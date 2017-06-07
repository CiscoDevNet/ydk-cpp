
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "NHRP_MIB.hpp"

namespace ydk {
namespace NHRP_MIB {

NhrpMib::NhrpMib()
    :
    nhrpcachetable(std::make_shared<NhrpMib::Nhrpcachetable>())
	,nhrpclientnhstable(std::make_shared<NhrpMib::Nhrpclientnhstable>())
	,nhrpclientregistrationtable(std::make_shared<NhrpMib::Nhrpclientregistrationtable>())
	,nhrpclientstattable(std::make_shared<NhrpMib::Nhrpclientstattable>())
	,nhrpclienttable(std::make_shared<NhrpMib::Nhrpclienttable>())
	,nhrpgeneralobjects(std::make_shared<NhrpMib::Nhrpgeneralobjects>())
	,nhrppurgereqtable(std::make_shared<NhrpMib::Nhrppurgereqtable>())
	,nhrpservercachetable(std::make_shared<NhrpMib::Nhrpservercachetable>())
	,nhrpservernhctable(std::make_shared<NhrpMib::Nhrpservernhctable>())
	,nhrpserverstattable(std::make_shared<NhrpMib::Nhrpserverstattable>())
	,nhrpservertable(std::make_shared<NhrpMib::Nhrpservertable>())
{
    nhrpcachetable->parent = this;

    nhrpclientnhstable->parent = this;

    nhrpclientregistrationtable->parent = this;

    nhrpclientstattable->parent = this;

    nhrpclienttable->parent = this;

    nhrpgeneralobjects->parent = this;

    nhrppurgereqtable->parent = this;

    nhrpservercachetable->parent = this;

    nhrpservernhctable->parent = this;

    nhrpserverstattable->parent = this;

    nhrpservertable->parent = this;

    yang_name = "NHRP-MIB"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::~NhrpMib()
{
}

bool NhrpMib::has_data() const
{
    return (nhrpcachetable !=  nullptr && nhrpcachetable->has_data())
	|| (nhrpclientnhstable !=  nullptr && nhrpclientnhstable->has_data())
	|| (nhrpclientregistrationtable !=  nullptr && nhrpclientregistrationtable->has_data())
	|| (nhrpclientstattable !=  nullptr && nhrpclientstattable->has_data())
	|| (nhrpclienttable !=  nullptr && nhrpclienttable->has_data())
	|| (nhrpgeneralobjects !=  nullptr && nhrpgeneralobjects->has_data())
	|| (nhrppurgereqtable !=  nullptr && nhrppurgereqtable->has_data())
	|| (nhrpservercachetable !=  nullptr && nhrpservercachetable->has_data())
	|| (nhrpservernhctable !=  nullptr && nhrpservernhctable->has_data())
	|| (nhrpserverstattable !=  nullptr && nhrpserverstattable->has_data())
	|| (nhrpservertable !=  nullptr && nhrpservertable->has_data());
}

bool NhrpMib::has_operation() const
{
    return is_set(operation)
	|| (nhrpcachetable !=  nullptr && nhrpcachetable->has_operation())
	|| (nhrpclientnhstable !=  nullptr && nhrpclientnhstable->has_operation())
	|| (nhrpclientregistrationtable !=  nullptr && nhrpclientregistrationtable->has_operation())
	|| (nhrpclientstattable !=  nullptr && nhrpclientstattable->has_operation())
	|| (nhrpclienttable !=  nullptr && nhrpclienttable->has_operation())
	|| (nhrpgeneralobjects !=  nullptr && nhrpgeneralobjects->has_operation())
	|| (nhrppurgereqtable !=  nullptr && nhrppurgereqtable->has_operation())
	|| (nhrpservercachetable !=  nullptr && nhrpservercachetable->has_operation())
	|| (nhrpservernhctable !=  nullptr && nhrpservernhctable->has_operation())
	|| (nhrpserverstattable !=  nullptr && nhrpserverstattable->has_operation())
	|| (nhrpservertable !=  nullptr && nhrpservertable->has_operation());
}

std::string NhrpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB";

    return path_buffer.str();

}

const EntityPath NhrpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> NhrpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpCacheTable")
    {
        if(nhrpcachetable == nullptr)
        {
            nhrpcachetable = std::make_shared<NhrpMib::Nhrpcachetable>();
        }
        return nhrpcachetable;
    }

    if(child_yang_name == "nhrpClientNhsTable")
    {
        if(nhrpclientnhstable == nullptr)
        {
            nhrpclientnhstable = std::make_shared<NhrpMib::Nhrpclientnhstable>();
        }
        return nhrpclientnhstable;
    }

    if(child_yang_name == "nhrpClientRegistrationTable")
    {
        if(nhrpclientregistrationtable == nullptr)
        {
            nhrpclientregistrationtable = std::make_shared<NhrpMib::Nhrpclientregistrationtable>();
        }
        return nhrpclientregistrationtable;
    }

    if(child_yang_name == "nhrpClientStatTable")
    {
        if(nhrpclientstattable == nullptr)
        {
            nhrpclientstattable = std::make_shared<NhrpMib::Nhrpclientstattable>();
        }
        return nhrpclientstattable;
    }

    if(child_yang_name == "nhrpClientTable")
    {
        if(nhrpclienttable == nullptr)
        {
            nhrpclienttable = std::make_shared<NhrpMib::Nhrpclienttable>();
        }
        return nhrpclienttable;
    }

    if(child_yang_name == "nhrpGeneralObjects")
    {
        if(nhrpgeneralobjects == nullptr)
        {
            nhrpgeneralobjects = std::make_shared<NhrpMib::Nhrpgeneralobjects>();
        }
        return nhrpgeneralobjects;
    }

    if(child_yang_name == "nhrpPurgeReqTable")
    {
        if(nhrppurgereqtable == nullptr)
        {
            nhrppurgereqtable = std::make_shared<NhrpMib::Nhrppurgereqtable>();
        }
        return nhrppurgereqtable;
    }

    if(child_yang_name == "nhrpServerCacheTable")
    {
        if(nhrpservercachetable == nullptr)
        {
            nhrpservercachetable = std::make_shared<NhrpMib::Nhrpservercachetable>();
        }
        return nhrpservercachetable;
    }

    if(child_yang_name == "nhrpServerNhcTable")
    {
        if(nhrpservernhctable == nullptr)
        {
            nhrpservernhctable = std::make_shared<NhrpMib::Nhrpservernhctable>();
        }
        return nhrpservernhctable;
    }

    if(child_yang_name == "nhrpServerStatTable")
    {
        if(nhrpserverstattable == nullptr)
        {
            nhrpserverstattable = std::make_shared<NhrpMib::Nhrpserverstattable>();
        }
        return nhrpserverstattable;
    }

    if(child_yang_name == "nhrpServerTable")
    {
        if(nhrpservertable == nullptr)
        {
            nhrpservertable = std::make_shared<NhrpMib::Nhrpservertable>();
        }
        return nhrpservertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nhrpcachetable != nullptr)
    {
        children["nhrpCacheTable"] = nhrpcachetable;
    }

    if(nhrpclientnhstable != nullptr)
    {
        children["nhrpClientNhsTable"] = nhrpclientnhstable;
    }

    if(nhrpclientregistrationtable != nullptr)
    {
        children["nhrpClientRegistrationTable"] = nhrpclientregistrationtable;
    }

    if(nhrpclientstattable != nullptr)
    {
        children["nhrpClientStatTable"] = nhrpclientstattable;
    }

    if(nhrpclienttable != nullptr)
    {
        children["nhrpClientTable"] = nhrpclienttable;
    }

    if(nhrpgeneralobjects != nullptr)
    {
        children["nhrpGeneralObjects"] = nhrpgeneralobjects;
    }

    if(nhrppurgereqtable != nullptr)
    {
        children["nhrpPurgeReqTable"] = nhrppurgereqtable;
    }

    if(nhrpservercachetable != nullptr)
    {
        children["nhrpServerCacheTable"] = nhrpservercachetable;
    }

    if(nhrpservernhctable != nullptr)
    {
        children["nhrpServerNhcTable"] = nhrpservernhctable;
    }

    if(nhrpserverstattable != nullptr)
    {
        children["nhrpServerStatTable"] = nhrpserverstattable;
    }

    if(nhrpservertable != nullptr)
    {
        children["nhrpServerTable"] = nhrpservertable;
    }

    return children;
}

void NhrpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> NhrpMib::clone_ptr() const
{
    return std::make_shared<NhrpMib>();
}

std::string NhrpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string NhrpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NhrpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

NhrpMib::Nhrpgeneralobjects::Nhrpgeneralobjects()
    :
    nhrpnextindex{YType::uint32, "nhrpNextIndex"}
{
    yang_name = "nhrpGeneralObjects"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpgeneralobjects::~Nhrpgeneralobjects()
{
}

bool NhrpMib::Nhrpgeneralobjects::has_data() const
{
    return nhrpnextindex.is_set;
}

bool NhrpMib::Nhrpgeneralobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpnextindex.operation);
}

std::string NhrpMib::Nhrpgeneralobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpGeneralObjects";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpgeneralobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpnextindex.is_set || is_set(nhrpnextindex.operation)) leaf_name_data.push_back(nhrpnextindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpgeneralobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpgeneralobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpgeneralobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpNextIndex")
    {
        nhrpnextindex = value;
    }
}

NhrpMib::Nhrpcachetable::Nhrpcachetable()
{
    yang_name = "nhrpCacheTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpcachetable::~Nhrpcachetable()
{
}

bool NhrpMib::Nhrpcachetable::has_data() const
{
    for (std::size_t index=0; index<nhrpcacheentry.size(); index++)
    {
        if(nhrpcacheentry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrpcachetable::has_operation() const
{
    for (std::size_t index=0; index<nhrpcacheentry.size(); index++)
    {
        if(nhrpcacheentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrpcachetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpCacheTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpcachetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpcachetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpCacheEntry")
    {
        for(auto const & c : nhrpcacheentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrpcachetable::Nhrpcacheentry>();
        c->parent = this;
        nhrpcacheentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpcachetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrpcacheentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrpcachetable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrpcachetable::Nhrpcacheentry::Nhrpcacheentry()
    :
    nhrpcacheinternetworkaddrtype{YType::enumeration, "nhrpCacheInternetworkAddrType"},
    nhrpcacheinternetworkaddr{YType::str, "nhrpCacheInternetworkAddr"},
    ifindex{YType::str, "ifIndex"},
    nhrpcacheindex{YType::uint32, "nhrpCacheIndex"},
    nhrpcacheholdingtime{YType::uint32, "nhrpCacheHoldingTime"},
    nhrpcacheholdingtimevalid{YType::boolean, "nhrpCacheHoldingTimeValid"},
    nhrpcachenbmaaddr{YType::str, "nhrpCacheNbmaAddr"},
    nhrpcachenbmaaddrtype{YType::enumeration, "nhrpCacheNbmaAddrType"},
    nhrpcachenbmasubaddr{YType::str, "nhrpCacheNbmaSubaddr"},
    nhrpcachenegotiatedmtu{YType::int32, "nhrpCacheNegotiatedMtu"},
    nhrpcachenexthopinternetworkaddr{YType::str, "nhrpCacheNextHopInternetworkAddr"},
    nhrpcachepreference{YType::int32, "nhrpCachePreference"},
    nhrpcacheprefixlength{YType::int32, "nhrpCachePrefixLength"},
    nhrpcacherowstatus{YType::enumeration, "nhrpCacheRowStatus"},
    nhrpcachestate{YType::enumeration, "nhrpCacheState"},
    nhrpcachestoragetype{YType::enumeration, "nhrpCacheStorageType"},
    nhrpcachetype{YType::enumeration, "nhrpCacheType"}
{
    yang_name = "nhrpCacheEntry"; yang_parent_name = "nhrpCacheTable";
}

NhrpMib::Nhrpcachetable::Nhrpcacheentry::~Nhrpcacheentry()
{
}

bool NhrpMib::Nhrpcachetable::Nhrpcacheentry::has_data() const
{
    return nhrpcacheinternetworkaddrtype.is_set
	|| nhrpcacheinternetworkaddr.is_set
	|| ifindex.is_set
	|| nhrpcacheindex.is_set
	|| nhrpcacheholdingtime.is_set
	|| nhrpcacheholdingtimevalid.is_set
	|| nhrpcachenbmaaddr.is_set
	|| nhrpcachenbmaaddrtype.is_set
	|| nhrpcachenbmasubaddr.is_set
	|| nhrpcachenegotiatedmtu.is_set
	|| nhrpcachenexthopinternetworkaddr.is_set
	|| nhrpcachepreference.is_set
	|| nhrpcacheprefixlength.is_set
	|| nhrpcacherowstatus.is_set
	|| nhrpcachestate.is_set
	|| nhrpcachestoragetype.is_set
	|| nhrpcachetype.is_set;
}

bool NhrpMib::Nhrpcachetable::Nhrpcacheentry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpcacheinternetworkaddrtype.operation)
	|| is_set(nhrpcacheinternetworkaddr.operation)
	|| is_set(ifindex.operation)
	|| is_set(nhrpcacheindex.operation)
	|| is_set(nhrpcacheholdingtime.operation)
	|| is_set(nhrpcacheholdingtimevalid.operation)
	|| is_set(nhrpcachenbmaaddr.operation)
	|| is_set(nhrpcachenbmaaddrtype.operation)
	|| is_set(nhrpcachenbmasubaddr.operation)
	|| is_set(nhrpcachenegotiatedmtu.operation)
	|| is_set(nhrpcachenexthopinternetworkaddr.operation)
	|| is_set(nhrpcachepreference.operation)
	|| is_set(nhrpcacheprefixlength.operation)
	|| is_set(nhrpcacherowstatus.operation)
	|| is_set(nhrpcachestate.operation)
	|| is_set(nhrpcachestoragetype.operation)
	|| is_set(nhrpcachetype.operation);
}

std::string NhrpMib::Nhrpcachetable::Nhrpcacheentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpCacheEntry" <<"[nhrpCacheInternetworkAddrType='" <<nhrpcacheinternetworkaddrtype <<"']" <<"[nhrpCacheInternetworkAddr='" <<nhrpcacheinternetworkaddr <<"']" <<"[ifIndex='" <<ifindex <<"']" <<"[nhrpCacheIndex='" <<nhrpcacheindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpcachetable::Nhrpcacheentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpCacheTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpcacheinternetworkaddrtype.is_set || is_set(nhrpcacheinternetworkaddrtype.operation)) leaf_name_data.push_back(nhrpcacheinternetworkaddrtype.get_name_leafdata());
    if (nhrpcacheinternetworkaddr.is_set || is_set(nhrpcacheinternetworkaddr.operation)) leaf_name_data.push_back(nhrpcacheinternetworkaddr.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (nhrpcacheindex.is_set || is_set(nhrpcacheindex.operation)) leaf_name_data.push_back(nhrpcacheindex.get_name_leafdata());
    if (nhrpcacheholdingtime.is_set || is_set(nhrpcacheholdingtime.operation)) leaf_name_data.push_back(nhrpcacheholdingtime.get_name_leafdata());
    if (nhrpcacheholdingtimevalid.is_set || is_set(nhrpcacheholdingtimevalid.operation)) leaf_name_data.push_back(nhrpcacheholdingtimevalid.get_name_leafdata());
    if (nhrpcachenbmaaddr.is_set || is_set(nhrpcachenbmaaddr.operation)) leaf_name_data.push_back(nhrpcachenbmaaddr.get_name_leafdata());
    if (nhrpcachenbmaaddrtype.is_set || is_set(nhrpcachenbmaaddrtype.operation)) leaf_name_data.push_back(nhrpcachenbmaaddrtype.get_name_leafdata());
    if (nhrpcachenbmasubaddr.is_set || is_set(nhrpcachenbmasubaddr.operation)) leaf_name_data.push_back(nhrpcachenbmasubaddr.get_name_leafdata());
    if (nhrpcachenegotiatedmtu.is_set || is_set(nhrpcachenegotiatedmtu.operation)) leaf_name_data.push_back(nhrpcachenegotiatedmtu.get_name_leafdata());
    if (nhrpcachenexthopinternetworkaddr.is_set || is_set(nhrpcachenexthopinternetworkaddr.operation)) leaf_name_data.push_back(nhrpcachenexthopinternetworkaddr.get_name_leafdata());
    if (nhrpcachepreference.is_set || is_set(nhrpcachepreference.operation)) leaf_name_data.push_back(nhrpcachepreference.get_name_leafdata());
    if (nhrpcacheprefixlength.is_set || is_set(nhrpcacheprefixlength.operation)) leaf_name_data.push_back(nhrpcacheprefixlength.get_name_leafdata());
    if (nhrpcacherowstatus.is_set || is_set(nhrpcacherowstatus.operation)) leaf_name_data.push_back(nhrpcacherowstatus.get_name_leafdata());
    if (nhrpcachestate.is_set || is_set(nhrpcachestate.operation)) leaf_name_data.push_back(nhrpcachestate.get_name_leafdata());
    if (nhrpcachestoragetype.is_set || is_set(nhrpcachestoragetype.operation)) leaf_name_data.push_back(nhrpcachestoragetype.get_name_leafdata());
    if (nhrpcachetype.is_set || is_set(nhrpcachetype.operation)) leaf_name_data.push_back(nhrpcachetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpcachetable::Nhrpcacheentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpcachetable::Nhrpcacheentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpcachetable::Nhrpcacheentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpCacheInternetworkAddrType")
    {
        nhrpcacheinternetworkaddrtype = value;
    }
    if(value_path == "nhrpCacheInternetworkAddr")
    {
        nhrpcacheinternetworkaddr = value;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "nhrpCacheIndex")
    {
        nhrpcacheindex = value;
    }
    if(value_path == "nhrpCacheHoldingTime")
    {
        nhrpcacheholdingtime = value;
    }
    if(value_path == "nhrpCacheHoldingTimeValid")
    {
        nhrpcacheholdingtimevalid = value;
    }
    if(value_path == "nhrpCacheNbmaAddr")
    {
        nhrpcachenbmaaddr = value;
    }
    if(value_path == "nhrpCacheNbmaAddrType")
    {
        nhrpcachenbmaaddrtype = value;
    }
    if(value_path == "nhrpCacheNbmaSubaddr")
    {
        nhrpcachenbmasubaddr = value;
    }
    if(value_path == "nhrpCacheNegotiatedMtu")
    {
        nhrpcachenegotiatedmtu = value;
    }
    if(value_path == "nhrpCacheNextHopInternetworkAddr")
    {
        nhrpcachenexthopinternetworkaddr = value;
    }
    if(value_path == "nhrpCachePreference")
    {
        nhrpcachepreference = value;
    }
    if(value_path == "nhrpCachePrefixLength")
    {
        nhrpcacheprefixlength = value;
    }
    if(value_path == "nhrpCacheRowStatus")
    {
        nhrpcacherowstatus = value;
    }
    if(value_path == "nhrpCacheState")
    {
        nhrpcachestate = value;
    }
    if(value_path == "nhrpCacheStorageType")
    {
        nhrpcachestoragetype = value;
    }
    if(value_path == "nhrpCacheType")
    {
        nhrpcachetype = value;
    }
}

NhrpMib::Nhrppurgereqtable::Nhrppurgereqtable()
{
    yang_name = "nhrpPurgeReqTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrppurgereqtable::~Nhrppurgereqtable()
{
}

bool NhrpMib::Nhrppurgereqtable::has_data() const
{
    for (std::size_t index=0; index<nhrppurgereqentry.size(); index++)
    {
        if(nhrppurgereqentry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrppurgereqtable::has_operation() const
{
    for (std::size_t index=0; index<nhrppurgereqentry.size(); index++)
    {
        if(nhrppurgereqentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrppurgereqtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpPurgeReqTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrppurgereqtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrppurgereqtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpPurgeReqEntry")
    {
        for(auto const & c : nhrppurgereqentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry>();
        c->parent = this;
        nhrppurgereqentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrppurgereqtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrppurgereqentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrppurgereqtable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry::Nhrppurgereqentry()
    :
    nhrppurgeindex{YType::uint32, "nhrpPurgeIndex"},
    nhrppurgecacheidentifier{YType::uint32, "nhrpPurgeCacheIdentifier"},
    nhrppurgeprefixlength{YType::int32, "nhrpPurgePrefixLength"},
    nhrppurgereplyexpected{YType::boolean, "nhrpPurgeReplyExpected"},
    nhrppurgerequestid{YType::uint32, "nhrpPurgeRequestID"},
    nhrppurgerowstatus{YType::enumeration, "nhrpPurgeRowStatus"}
{
    yang_name = "nhrpPurgeReqEntry"; yang_parent_name = "nhrpPurgeReqTable";
}

NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry::~Nhrppurgereqentry()
{
}

bool NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry::has_data() const
{
    return nhrppurgeindex.is_set
	|| nhrppurgecacheidentifier.is_set
	|| nhrppurgeprefixlength.is_set
	|| nhrppurgereplyexpected.is_set
	|| nhrppurgerequestid.is_set
	|| nhrppurgerowstatus.is_set;
}

bool NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrppurgeindex.operation)
	|| is_set(nhrppurgecacheidentifier.operation)
	|| is_set(nhrppurgeprefixlength.operation)
	|| is_set(nhrppurgereplyexpected.operation)
	|| is_set(nhrppurgerequestid.operation)
	|| is_set(nhrppurgerowstatus.operation);
}

std::string NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpPurgeReqEntry" <<"[nhrpPurgeIndex='" <<nhrppurgeindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpPurgeReqTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrppurgeindex.is_set || is_set(nhrppurgeindex.operation)) leaf_name_data.push_back(nhrppurgeindex.get_name_leafdata());
    if (nhrppurgecacheidentifier.is_set || is_set(nhrppurgecacheidentifier.operation)) leaf_name_data.push_back(nhrppurgecacheidentifier.get_name_leafdata());
    if (nhrppurgeprefixlength.is_set || is_set(nhrppurgeprefixlength.operation)) leaf_name_data.push_back(nhrppurgeprefixlength.get_name_leafdata());
    if (nhrppurgereplyexpected.is_set || is_set(nhrppurgereplyexpected.operation)) leaf_name_data.push_back(nhrppurgereplyexpected.get_name_leafdata());
    if (nhrppurgerequestid.is_set || is_set(nhrppurgerequestid.operation)) leaf_name_data.push_back(nhrppurgerequestid.get_name_leafdata());
    if (nhrppurgerowstatus.is_set || is_set(nhrppurgerowstatus.operation)) leaf_name_data.push_back(nhrppurgerowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrppurgereqtable::Nhrppurgereqentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpPurgeIndex")
    {
        nhrppurgeindex = value;
    }
    if(value_path == "nhrpPurgeCacheIdentifier")
    {
        nhrppurgecacheidentifier = value;
    }
    if(value_path == "nhrpPurgePrefixLength")
    {
        nhrppurgeprefixlength = value;
    }
    if(value_path == "nhrpPurgeReplyExpected")
    {
        nhrppurgereplyexpected = value;
    }
    if(value_path == "nhrpPurgeRequestID")
    {
        nhrppurgerequestid = value;
    }
    if(value_path == "nhrpPurgeRowStatus")
    {
        nhrppurgerowstatus = value;
    }
}

NhrpMib::Nhrpclienttable::Nhrpclienttable()
{
    yang_name = "nhrpClientTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpclienttable::~Nhrpclienttable()
{
}

bool NhrpMib::Nhrpclienttable::has_data() const
{
    for (std::size_t index=0; index<nhrpcliententry.size(); index++)
    {
        if(nhrpcliententry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrpclienttable::has_operation() const
{
    for (std::size_t index=0; index<nhrpcliententry.size(); index++)
    {
        if(nhrpcliententry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrpclienttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpclienttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpclienttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpClientEntry")
    {
        for(auto const & c : nhrpcliententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrpclienttable::Nhrpcliententry>();
        c->parent = this;
        nhrpcliententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpclienttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrpcliententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrpclienttable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrpclienttable::Nhrpcliententry::Nhrpcliententry()
    :
    nhrpclientindex{YType::uint32, "nhrpClientIndex"},
    nhrpclientdefaultmtu{YType::uint32, "nhrpClientDefaultMtu"},
    nhrpclientholdtime{YType::uint32, "nhrpClientHoldTime"},
    nhrpclientinitialrequesttimeout{YType::int32, "nhrpClientInitialRequestTimeout"},
    nhrpclientinternetworkaddr{YType::str, "nhrpClientInternetworkAddr"},
    nhrpclientinternetworkaddrtype{YType::enumeration, "nhrpClientInternetworkAddrType"},
    nhrpclientnbmaaddr{YType::str, "nhrpClientNbmaAddr"},
    nhrpclientnbmaaddrtype{YType::enumeration, "nhrpClientNbmaAddrType"},
    nhrpclientnbmasubaddr{YType::str, "nhrpClientNbmaSubaddr"},
    nhrpclientpurgerequestretries{YType::int32, "nhrpClientPurgeRequestRetries"},
    nhrpclientregistrationrequestretries{YType::int32, "nhrpClientRegistrationRequestRetries"},
    nhrpclientrequestid{YType::uint32, "nhrpClientRequestID"},
    nhrpclientresolutionrequestretries{YType::int32, "nhrpClientResolutionRequestRetries"},
    nhrpclientrowstatus{YType::enumeration, "nhrpClientRowStatus"},
    nhrpclientstoragetype{YType::enumeration, "nhrpClientStorageType"}
{
    yang_name = "nhrpClientEntry"; yang_parent_name = "nhrpClientTable";
}

NhrpMib::Nhrpclienttable::Nhrpcliententry::~Nhrpcliententry()
{
}

bool NhrpMib::Nhrpclienttable::Nhrpcliententry::has_data() const
{
    return nhrpclientindex.is_set
	|| nhrpclientdefaultmtu.is_set
	|| nhrpclientholdtime.is_set
	|| nhrpclientinitialrequesttimeout.is_set
	|| nhrpclientinternetworkaddr.is_set
	|| nhrpclientinternetworkaddrtype.is_set
	|| nhrpclientnbmaaddr.is_set
	|| nhrpclientnbmaaddrtype.is_set
	|| nhrpclientnbmasubaddr.is_set
	|| nhrpclientpurgerequestretries.is_set
	|| nhrpclientregistrationrequestretries.is_set
	|| nhrpclientrequestid.is_set
	|| nhrpclientresolutionrequestretries.is_set
	|| nhrpclientrowstatus.is_set
	|| nhrpclientstoragetype.is_set;
}

bool NhrpMib::Nhrpclienttable::Nhrpcliententry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpclientindex.operation)
	|| is_set(nhrpclientdefaultmtu.operation)
	|| is_set(nhrpclientholdtime.operation)
	|| is_set(nhrpclientinitialrequesttimeout.operation)
	|| is_set(nhrpclientinternetworkaddr.operation)
	|| is_set(nhrpclientinternetworkaddrtype.operation)
	|| is_set(nhrpclientnbmaaddr.operation)
	|| is_set(nhrpclientnbmaaddrtype.operation)
	|| is_set(nhrpclientnbmasubaddr.operation)
	|| is_set(nhrpclientpurgerequestretries.operation)
	|| is_set(nhrpclientregistrationrequestretries.operation)
	|| is_set(nhrpclientrequestid.operation)
	|| is_set(nhrpclientresolutionrequestretries.operation)
	|| is_set(nhrpclientrowstatus.operation)
	|| is_set(nhrpclientstoragetype.operation);
}

std::string NhrpMib::Nhrpclienttable::Nhrpcliententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientEntry" <<"[nhrpClientIndex='" <<nhrpclientindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpclienttable::Nhrpcliententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpClientTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpclientindex.is_set || is_set(nhrpclientindex.operation)) leaf_name_data.push_back(nhrpclientindex.get_name_leafdata());
    if (nhrpclientdefaultmtu.is_set || is_set(nhrpclientdefaultmtu.operation)) leaf_name_data.push_back(nhrpclientdefaultmtu.get_name_leafdata());
    if (nhrpclientholdtime.is_set || is_set(nhrpclientholdtime.operation)) leaf_name_data.push_back(nhrpclientholdtime.get_name_leafdata());
    if (nhrpclientinitialrequesttimeout.is_set || is_set(nhrpclientinitialrequesttimeout.operation)) leaf_name_data.push_back(nhrpclientinitialrequesttimeout.get_name_leafdata());
    if (nhrpclientinternetworkaddr.is_set || is_set(nhrpclientinternetworkaddr.operation)) leaf_name_data.push_back(nhrpclientinternetworkaddr.get_name_leafdata());
    if (nhrpclientinternetworkaddrtype.is_set || is_set(nhrpclientinternetworkaddrtype.operation)) leaf_name_data.push_back(nhrpclientinternetworkaddrtype.get_name_leafdata());
    if (nhrpclientnbmaaddr.is_set || is_set(nhrpclientnbmaaddr.operation)) leaf_name_data.push_back(nhrpclientnbmaaddr.get_name_leafdata());
    if (nhrpclientnbmaaddrtype.is_set || is_set(nhrpclientnbmaaddrtype.operation)) leaf_name_data.push_back(nhrpclientnbmaaddrtype.get_name_leafdata());
    if (nhrpclientnbmasubaddr.is_set || is_set(nhrpclientnbmasubaddr.operation)) leaf_name_data.push_back(nhrpclientnbmasubaddr.get_name_leafdata());
    if (nhrpclientpurgerequestretries.is_set || is_set(nhrpclientpurgerequestretries.operation)) leaf_name_data.push_back(nhrpclientpurgerequestretries.get_name_leafdata());
    if (nhrpclientregistrationrequestretries.is_set || is_set(nhrpclientregistrationrequestretries.operation)) leaf_name_data.push_back(nhrpclientregistrationrequestretries.get_name_leafdata());
    if (nhrpclientrequestid.is_set || is_set(nhrpclientrequestid.operation)) leaf_name_data.push_back(nhrpclientrequestid.get_name_leafdata());
    if (nhrpclientresolutionrequestretries.is_set || is_set(nhrpclientresolutionrequestretries.operation)) leaf_name_data.push_back(nhrpclientresolutionrequestretries.get_name_leafdata());
    if (nhrpclientrowstatus.is_set || is_set(nhrpclientrowstatus.operation)) leaf_name_data.push_back(nhrpclientrowstatus.get_name_leafdata());
    if (nhrpclientstoragetype.is_set || is_set(nhrpclientstoragetype.operation)) leaf_name_data.push_back(nhrpclientstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpclienttable::Nhrpcliententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpclienttable::Nhrpcliententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpclienttable::Nhrpcliententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex = value;
    }
    if(value_path == "nhrpClientDefaultMtu")
    {
        nhrpclientdefaultmtu = value;
    }
    if(value_path == "nhrpClientHoldTime")
    {
        nhrpclientholdtime = value;
    }
    if(value_path == "nhrpClientInitialRequestTimeout")
    {
        nhrpclientinitialrequesttimeout = value;
    }
    if(value_path == "nhrpClientInternetworkAddr")
    {
        nhrpclientinternetworkaddr = value;
    }
    if(value_path == "nhrpClientInternetworkAddrType")
    {
        nhrpclientinternetworkaddrtype = value;
    }
    if(value_path == "nhrpClientNbmaAddr")
    {
        nhrpclientnbmaaddr = value;
    }
    if(value_path == "nhrpClientNbmaAddrType")
    {
        nhrpclientnbmaaddrtype = value;
    }
    if(value_path == "nhrpClientNbmaSubaddr")
    {
        nhrpclientnbmasubaddr = value;
    }
    if(value_path == "nhrpClientPurgeRequestRetries")
    {
        nhrpclientpurgerequestretries = value;
    }
    if(value_path == "nhrpClientRegistrationRequestRetries")
    {
        nhrpclientregistrationrequestretries = value;
    }
    if(value_path == "nhrpClientRequestID")
    {
        nhrpclientrequestid = value;
    }
    if(value_path == "nhrpClientResolutionRequestRetries")
    {
        nhrpclientresolutionrequestretries = value;
    }
    if(value_path == "nhrpClientRowStatus")
    {
        nhrpclientrowstatus = value;
    }
    if(value_path == "nhrpClientStorageType")
    {
        nhrpclientstoragetype = value;
    }
}

NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationtable()
{
    yang_name = "nhrpClientRegistrationTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpclientregistrationtable::~Nhrpclientregistrationtable()
{
}

bool NhrpMib::Nhrpclientregistrationtable::has_data() const
{
    for (std::size_t index=0; index<nhrpclientregistrationentry.size(); index++)
    {
        if(nhrpclientregistrationentry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrpclientregistrationtable::has_operation() const
{
    for (std::size_t index=0; index<nhrpclientregistrationentry.size(); index++)
    {
        if(nhrpclientregistrationentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrpclientregistrationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientRegistrationTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpclientregistrationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpclientregistrationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpClientRegistrationEntry")
    {
        for(auto const & c : nhrpclientregistrationentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry>();
        c->parent = this;
        nhrpclientregistrationentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpclientregistrationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrpclientregistrationentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrpclientregistrationtable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientregistrationentry()
    :
    nhrpclientindex{YType::str, "nhrpClientIndex"},
    nhrpclientregindex{YType::uint32, "nhrpClientRegIndex"},
    nhrpclientregrowstatus{YType::enumeration, "nhrpClientRegRowStatus"},
    nhrpclientregstate{YType::enumeration, "nhrpClientRegState"},
    nhrpclientreguniqueness{YType::enumeration, "nhrpClientRegUniqueness"}
{
    yang_name = "nhrpClientRegistrationEntry"; yang_parent_name = "nhrpClientRegistrationTable";
}

NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::~Nhrpclientregistrationentry()
{
}

bool NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::has_data() const
{
    return nhrpclientindex.is_set
	|| nhrpclientregindex.is_set
	|| nhrpclientregrowstatus.is_set
	|| nhrpclientregstate.is_set
	|| nhrpclientreguniqueness.is_set;
}

bool NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpclientindex.operation)
	|| is_set(nhrpclientregindex.operation)
	|| is_set(nhrpclientregrowstatus.operation)
	|| is_set(nhrpclientregstate.operation)
	|| is_set(nhrpclientreguniqueness.operation);
}

std::string NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientRegistrationEntry" <<"[nhrpClientIndex='" <<nhrpclientindex <<"']" <<"[nhrpClientRegIndex='" <<nhrpclientregindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpClientRegistrationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpclientindex.is_set || is_set(nhrpclientindex.operation)) leaf_name_data.push_back(nhrpclientindex.get_name_leafdata());
    if (nhrpclientregindex.is_set || is_set(nhrpclientregindex.operation)) leaf_name_data.push_back(nhrpclientregindex.get_name_leafdata());
    if (nhrpclientregrowstatus.is_set || is_set(nhrpclientregrowstatus.operation)) leaf_name_data.push_back(nhrpclientregrowstatus.get_name_leafdata());
    if (nhrpclientregstate.is_set || is_set(nhrpclientregstate.operation)) leaf_name_data.push_back(nhrpclientregstate.get_name_leafdata());
    if (nhrpclientreguniqueness.is_set || is_set(nhrpclientreguniqueness.operation)) leaf_name_data.push_back(nhrpclientreguniqueness.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex = value;
    }
    if(value_path == "nhrpClientRegIndex")
    {
        nhrpclientregindex = value;
    }
    if(value_path == "nhrpClientRegRowStatus")
    {
        nhrpclientregrowstatus = value;
    }
    if(value_path == "nhrpClientRegState")
    {
        nhrpclientregstate = value;
    }
    if(value_path == "nhrpClientRegUniqueness")
    {
        nhrpclientreguniqueness = value;
    }
}

NhrpMib::Nhrpclientnhstable::Nhrpclientnhstable()
{
    yang_name = "nhrpClientNhsTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpclientnhstable::~Nhrpclientnhstable()
{
}

bool NhrpMib::Nhrpclientnhstable::has_data() const
{
    for (std::size_t index=0; index<nhrpclientnhsentry.size(); index++)
    {
        if(nhrpclientnhsentry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrpclientnhstable::has_operation() const
{
    for (std::size_t index=0; index<nhrpclientnhsentry.size(); index++)
    {
        if(nhrpclientnhsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrpclientnhstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientNhsTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpclientnhstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpclientnhstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpClientNhsEntry")
    {
        for(auto const & c : nhrpclientnhsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry>();
        c->parent = this;
        nhrpclientnhsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpclientnhstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrpclientnhsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrpclientnhstable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry::Nhrpclientnhsentry()
    :
    nhrpclientindex{YType::str, "nhrpClientIndex"},
    nhrpclientnhsindex{YType::uint32, "nhrpClientNhsIndex"},
    nhrpclientnhsinternetworkaddr{YType::str, "nhrpClientNhsInternetworkAddr"},
    nhrpclientnhsinternetworkaddrtype{YType::enumeration, "nhrpClientNhsInternetworkAddrType"},
    nhrpclientnhsinuse{YType::boolean, "nhrpClientNhsInUse"},
    nhrpclientnhsnbmaaddr{YType::str, "nhrpClientNhsNbmaAddr"},
    nhrpclientnhsnbmaaddrtype{YType::enumeration, "nhrpClientNhsNbmaAddrType"},
    nhrpclientnhsnbmasubaddr{YType::str, "nhrpClientNhsNbmaSubaddr"},
    nhrpclientnhsrowstatus{YType::enumeration, "nhrpClientNhsRowStatus"}
{
    yang_name = "nhrpClientNhsEntry"; yang_parent_name = "nhrpClientNhsTable";
}

NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry::~Nhrpclientnhsentry()
{
}

bool NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry::has_data() const
{
    return nhrpclientindex.is_set
	|| nhrpclientnhsindex.is_set
	|| nhrpclientnhsinternetworkaddr.is_set
	|| nhrpclientnhsinternetworkaddrtype.is_set
	|| nhrpclientnhsinuse.is_set
	|| nhrpclientnhsnbmaaddr.is_set
	|| nhrpclientnhsnbmaaddrtype.is_set
	|| nhrpclientnhsnbmasubaddr.is_set
	|| nhrpclientnhsrowstatus.is_set;
}

bool NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpclientindex.operation)
	|| is_set(nhrpclientnhsindex.operation)
	|| is_set(nhrpclientnhsinternetworkaddr.operation)
	|| is_set(nhrpclientnhsinternetworkaddrtype.operation)
	|| is_set(nhrpclientnhsinuse.operation)
	|| is_set(nhrpclientnhsnbmaaddr.operation)
	|| is_set(nhrpclientnhsnbmaaddrtype.operation)
	|| is_set(nhrpclientnhsnbmasubaddr.operation)
	|| is_set(nhrpclientnhsrowstatus.operation);
}

std::string NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientNhsEntry" <<"[nhrpClientIndex='" <<nhrpclientindex <<"']" <<"[nhrpClientNhsIndex='" <<nhrpclientnhsindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpClientNhsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpclientindex.is_set || is_set(nhrpclientindex.operation)) leaf_name_data.push_back(nhrpclientindex.get_name_leafdata());
    if (nhrpclientnhsindex.is_set || is_set(nhrpclientnhsindex.operation)) leaf_name_data.push_back(nhrpclientnhsindex.get_name_leafdata());
    if (nhrpclientnhsinternetworkaddr.is_set || is_set(nhrpclientnhsinternetworkaddr.operation)) leaf_name_data.push_back(nhrpclientnhsinternetworkaddr.get_name_leafdata());
    if (nhrpclientnhsinternetworkaddrtype.is_set || is_set(nhrpclientnhsinternetworkaddrtype.operation)) leaf_name_data.push_back(nhrpclientnhsinternetworkaddrtype.get_name_leafdata());
    if (nhrpclientnhsinuse.is_set || is_set(nhrpclientnhsinuse.operation)) leaf_name_data.push_back(nhrpclientnhsinuse.get_name_leafdata());
    if (nhrpclientnhsnbmaaddr.is_set || is_set(nhrpclientnhsnbmaaddr.operation)) leaf_name_data.push_back(nhrpclientnhsnbmaaddr.get_name_leafdata());
    if (nhrpclientnhsnbmaaddrtype.is_set || is_set(nhrpclientnhsnbmaaddrtype.operation)) leaf_name_data.push_back(nhrpclientnhsnbmaaddrtype.get_name_leafdata());
    if (nhrpclientnhsnbmasubaddr.is_set || is_set(nhrpclientnhsnbmasubaddr.operation)) leaf_name_data.push_back(nhrpclientnhsnbmasubaddr.get_name_leafdata());
    if (nhrpclientnhsrowstatus.is_set || is_set(nhrpclientnhsrowstatus.operation)) leaf_name_data.push_back(nhrpclientnhsrowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpclientnhstable::Nhrpclientnhsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex = value;
    }
    if(value_path == "nhrpClientNhsIndex")
    {
        nhrpclientnhsindex = value;
    }
    if(value_path == "nhrpClientNhsInternetworkAddr")
    {
        nhrpclientnhsinternetworkaddr = value;
    }
    if(value_path == "nhrpClientNhsInternetworkAddrType")
    {
        nhrpclientnhsinternetworkaddrtype = value;
    }
    if(value_path == "nhrpClientNhsInUse")
    {
        nhrpclientnhsinuse = value;
    }
    if(value_path == "nhrpClientNhsNbmaAddr")
    {
        nhrpclientnhsnbmaaddr = value;
    }
    if(value_path == "nhrpClientNhsNbmaAddrType")
    {
        nhrpclientnhsnbmaaddrtype = value;
    }
    if(value_path == "nhrpClientNhsNbmaSubaddr")
    {
        nhrpclientnhsnbmasubaddr = value;
    }
    if(value_path == "nhrpClientNhsRowStatus")
    {
        nhrpclientnhsrowstatus = value;
    }
}

NhrpMib::Nhrpclientstattable::Nhrpclientstattable()
{
    yang_name = "nhrpClientStatTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpclientstattable::~Nhrpclientstattable()
{
}

bool NhrpMib::Nhrpclientstattable::has_data() const
{
    for (std::size_t index=0; index<nhrpclientstatentry.size(); index++)
    {
        if(nhrpclientstatentry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrpclientstattable::has_operation() const
{
    for (std::size_t index=0; index<nhrpclientstatentry.size(); index++)
    {
        if(nhrpclientstatentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrpclientstattable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientStatTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpclientstattable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpclientstattable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpClientStatEntry")
    {
        for(auto const & c : nhrpclientstatentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrpclientstattable::Nhrpclientstatentry>();
        c->parent = this;
        nhrpclientstatentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpclientstattable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrpclientstatentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrpclientstattable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrpclientstattable::Nhrpclientstatentry::Nhrpclientstatentry()
    :
    nhrpclientindex{YType::str, "nhrpClientIndex"},
    nhrpclientstatdiscontinuitytime{YType::uint32, "nhrpClientStatDiscontinuityTime"},
    nhrpclientstatrxerrauthenticationfailure{YType::uint32, "nhrpClientStatRxErrAuthenticationFailure"},
    nhrpclientstatrxerrhopcountexceeded{YType::uint32, "nhrpClientStatRxErrHopCountExceeded"},
    nhrpclientstatrxerrinvalidextension{YType::uint32, "nhrpClientStatRxErrInvalidExtension"},
    nhrpclientstatrxerrloopdetected{YType::uint32, "nhrpClientStatRxErrLoopDetected"},
    nhrpclientstatrxerrprotoaddrunreachable{YType::uint32, "nhrpClientStatRxErrProtoAddrUnreachable"},
    nhrpclientstatrxerrprotoerror{YType::uint32, "nhrpClientStatRxErrProtoError"},
    nhrpclientstatrxerrsdusizeexceeded{YType::uint32, "nhrpClientStatRxErrSduSizeExceeded"},
    nhrpclientstatrxerrunrecognizedextension{YType::uint32, "nhrpClientStatRxErrUnrecognizedExtension"},
    nhrpclientstatrxpurgereply{YType::uint32, "nhrpClientStatRxPurgeReply"},
    nhrpclientstatrxpurgereq{YType::uint32, "nhrpClientStatRxPurgeReq"},
    nhrpclientstatrxregisterack{YType::uint32, "nhrpClientStatRxRegisterAck"},
    nhrpclientstatrxregisternakalreadyreg{YType::uint32, "nhrpClientStatRxRegisterNakAlreadyReg"},
    nhrpclientstatrxregisternakinsufresources{YType::uint32, "nhrpClientStatRxRegisterNakInsufResources"},
    nhrpclientstatrxregisternakprohibited{YType::uint32, "nhrpClientStatRxRegisterNakProhibited"},
    nhrpclientstatrxresolvereplyack{YType::uint32, "nhrpClientStatRxResolveReplyAck"},
    nhrpclientstatrxresolvereplynakinsufresources{YType::uint32, "nhrpClientStatRxResolveReplyNakInsufResources"},
    nhrpclientstatrxresolvereplynaknobinding{YType::uint32, "nhrpClientStatRxResolveReplyNakNoBinding"},
    nhrpclientstatrxresolvereplynaknotunique{YType::uint32, "nhrpClientStatRxResolveReplyNakNotUnique"},
    nhrpclientstatrxresolvereplynakprohibited{YType::uint32, "nhrpClientStatRxResolveReplyNakProhibited"},
    nhrpclientstattxerrorindication{YType::uint32, "nhrpClientStatTxErrorIndication"},
    nhrpclientstattxpurgereply{YType::uint32, "nhrpClientStatTxPurgeReply"},
    nhrpclientstattxpurgereq{YType::uint32, "nhrpClientStatTxPurgeReq"},
    nhrpclientstattxregisterreq{YType::uint32, "nhrpClientStatTxRegisterReq"},
    nhrpclientstattxresolvereq{YType::uint32, "nhrpClientStatTxResolveReq"}
{
    yang_name = "nhrpClientStatEntry"; yang_parent_name = "nhrpClientStatTable";
}

NhrpMib::Nhrpclientstattable::Nhrpclientstatentry::~Nhrpclientstatentry()
{
}

bool NhrpMib::Nhrpclientstattable::Nhrpclientstatentry::has_data() const
{
    return nhrpclientindex.is_set
	|| nhrpclientstatdiscontinuitytime.is_set
	|| nhrpclientstatrxerrauthenticationfailure.is_set
	|| nhrpclientstatrxerrhopcountexceeded.is_set
	|| nhrpclientstatrxerrinvalidextension.is_set
	|| nhrpclientstatrxerrloopdetected.is_set
	|| nhrpclientstatrxerrprotoaddrunreachable.is_set
	|| nhrpclientstatrxerrprotoerror.is_set
	|| nhrpclientstatrxerrsdusizeexceeded.is_set
	|| nhrpclientstatrxerrunrecognizedextension.is_set
	|| nhrpclientstatrxpurgereply.is_set
	|| nhrpclientstatrxpurgereq.is_set
	|| nhrpclientstatrxregisterack.is_set
	|| nhrpclientstatrxregisternakalreadyreg.is_set
	|| nhrpclientstatrxregisternakinsufresources.is_set
	|| nhrpclientstatrxregisternakprohibited.is_set
	|| nhrpclientstatrxresolvereplyack.is_set
	|| nhrpclientstatrxresolvereplynakinsufresources.is_set
	|| nhrpclientstatrxresolvereplynaknobinding.is_set
	|| nhrpclientstatrxresolvereplynaknotunique.is_set
	|| nhrpclientstatrxresolvereplynakprohibited.is_set
	|| nhrpclientstattxerrorindication.is_set
	|| nhrpclientstattxpurgereply.is_set
	|| nhrpclientstattxpurgereq.is_set
	|| nhrpclientstattxregisterreq.is_set
	|| nhrpclientstattxresolvereq.is_set;
}

bool NhrpMib::Nhrpclientstattable::Nhrpclientstatentry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpclientindex.operation)
	|| is_set(nhrpclientstatdiscontinuitytime.operation)
	|| is_set(nhrpclientstatrxerrauthenticationfailure.operation)
	|| is_set(nhrpclientstatrxerrhopcountexceeded.operation)
	|| is_set(nhrpclientstatrxerrinvalidextension.operation)
	|| is_set(nhrpclientstatrxerrloopdetected.operation)
	|| is_set(nhrpclientstatrxerrprotoaddrunreachable.operation)
	|| is_set(nhrpclientstatrxerrprotoerror.operation)
	|| is_set(nhrpclientstatrxerrsdusizeexceeded.operation)
	|| is_set(nhrpclientstatrxerrunrecognizedextension.operation)
	|| is_set(nhrpclientstatrxpurgereply.operation)
	|| is_set(nhrpclientstatrxpurgereq.operation)
	|| is_set(nhrpclientstatrxregisterack.operation)
	|| is_set(nhrpclientstatrxregisternakalreadyreg.operation)
	|| is_set(nhrpclientstatrxregisternakinsufresources.operation)
	|| is_set(nhrpclientstatrxregisternakprohibited.operation)
	|| is_set(nhrpclientstatrxresolvereplyack.operation)
	|| is_set(nhrpclientstatrxresolvereplynakinsufresources.operation)
	|| is_set(nhrpclientstatrxresolvereplynaknobinding.operation)
	|| is_set(nhrpclientstatrxresolvereplynaknotunique.operation)
	|| is_set(nhrpclientstatrxresolvereplynakprohibited.operation)
	|| is_set(nhrpclientstattxerrorindication.operation)
	|| is_set(nhrpclientstattxpurgereply.operation)
	|| is_set(nhrpclientstattxpurgereq.operation)
	|| is_set(nhrpclientstattxregisterreq.operation)
	|| is_set(nhrpclientstattxresolvereq.operation);
}

std::string NhrpMib::Nhrpclientstattable::Nhrpclientstatentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientStatEntry" <<"[nhrpClientIndex='" <<nhrpclientindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpclientstattable::Nhrpclientstatentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpClientStatTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpclientindex.is_set || is_set(nhrpclientindex.operation)) leaf_name_data.push_back(nhrpclientindex.get_name_leafdata());
    if (nhrpclientstatdiscontinuitytime.is_set || is_set(nhrpclientstatdiscontinuitytime.operation)) leaf_name_data.push_back(nhrpclientstatdiscontinuitytime.get_name_leafdata());
    if (nhrpclientstatrxerrauthenticationfailure.is_set || is_set(nhrpclientstatrxerrauthenticationfailure.operation)) leaf_name_data.push_back(nhrpclientstatrxerrauthenticationfailure.get_name_leafdata());
    if (nhrpclientstatrxerrhopcountexceeded.is_set || is_set(nhrpclientstatrxerrhopcountexceeded.operation)) leaf_name_data.push_back(nhrpclientstatrxerrhopcountexceeded.get_name_leafdata());
    if (nhrpclientstatrxerrinvalidextension.is_set || is_set(nhrpclientstatrxerrinvalidextension.operation)) leaf_name_data.push_back(nhrpclientstatrxerrinvalidextension.get_name_leafdata());
    if (nhrpclientstatrxerrloopdetected.is_set || is_set(nhrpclientstatrxerrloopdetected.operation)) leaf_name_data.push_back(nhrpclientstatrxerrloopdetected.get_name_leafdata());
    if (nhrpclientstatrxerrprotoaddrunreachable.is_set || is_set(nhrpclientstatrxerrprotoaddrunreachable.operation)) leaf_name_data.push_back(nhrpclientstatrxerrprotoaddrunreachable.get_name_leafdata());
    if (nhrpclientstatrxerrprotoerror.is_set || is_set(nhrpclientstatrxerrprotoerror.operation)) leaf_name_data.push_back(nhrpclientstatrxerrprotoerror.get_name_leafdata());
    if (nhrpclientstatrxerrsdusizeexceeded.is_set || is_set(nhrpclientstatrxerrsdusizeexceeded.operation)) leaf_name_data.push_back(nhrpclientstatrxerrsdusizeexceeded.get_name_leafdata());
    if (nhrpclientstatrxerrunrecognizedextension.is_set || is_set(nhrpclientstatrxerrunrecognizedextension.operation)) leaf_name_data.push_back(nhrpclientstatrxerrunrecognizedextension.get_name_leafdata());
    if (nhrpclientstatrxpurgereply.is_set || is_set(nhrpclientstatrxpurgereply.operation)) leaf_name_data.push_back(nhrpclientstatrxpurgereply.get_name_leafdata());
    if (nhrpclientstatrxpurgereq.is_set || is_set(nhrpclientstatrxpurgereq.operation)) leaf_name_data.push_back(nhrpclientstatrxpurgereq.get_name_leafdata());
    if (nhrpclientstatrxregisterack.is_set || is_set(nhrpclientstatrxregisterack.operation)) leaf_name_data.push_back(nhrpclientstatrxregisterack.get_name_leafdata());
    if (nhrpclientstatrxregisternakalreadyreg.is_set || is_set(nhrpclientstatrxregisternakalreadyreg.operation)) leaf_name_data.push_back(nhrpclientstatrxregisternakalreadyreg.get_name_leafdata());
    if (nhrpclientstatrxregisternakinsufresources.is_set || is_set(nhrpclientstatrxregisternakinsufresources.operation)) leaf_name_data.push_back(nhrpclientstatrxregisternakinsufresources.get_name_leafdata());
    if (nhrpclientstatrxregisternakprohibited.is_set || is_set(nhrpclientstatrxregisternakprohibited.operation)) leaf_name_data.push_back(nhrpclientstatrxregisternakprohibited.get_name_leafdata());
    if (nhrpclientstatrxresolvereplyack.is_set || is_set(nhrpclientstatrxresolvereplyack.operation)) leaf_name_data.push_back(nhrpclientstatrxresolvereplyack.get_name_leafdata());
    if (nhrpclientstatrxresolvereplynakinsufresources.is_set || is_set(nhrpclientstatrxresolvereplynakinsufresources.operation)) leaf_name_data.push_back(nhrpclientstatrxresolvereplynakinsufresources.get_name_leafdata());
    if (nhrpclientstatrxresolvereplynaknobinding.is_set || is_set(nhrpclientstatrxresolvereplynaknobinding.operation)) leaf_name_data.push_back(nhrpclientstatrxresolvereplynaknobinding.get_name_leafdata());
    if (nhrpclientstatrxresolvereplynaknotunique.is_set || is_set(nhrpclientstatrxresolvereplynaknotunique.operation)) leaf_name_data.push_back(nhrpclientstatrxresolvereplynaknotunique.get_name_leafdata());
    if (nhrpclientstatrxresolvereplynakprohibited.is_set || is_set(nhrpclientstatrxresolvereplynakprohibited.operation)) leaf_name_data.push_back(nhrpclientstatrxresolvereplynakprohibited.get_name_leafdata());
    if (nhrpclientstattxerrorindication.is_set || is_set(nhrpclientstattxerrorindication.operation)) leaf_name_data.push_back(nhrpclientstattxerrorindication.get_name_leafdata());
    if (nhrpclientstattxpurgereply.is_set || is_set(nhrpclientstattxpurgereply.operation)) leaf_name_data.push_back(nhrpclientstattxpurgereply.get_name_leafdata());
    if (nhrpclientstattxpurgereq.is_set || is_set(nhrpclientstattxpurgereq.operation)) leaf_name_data.push_back(nhrpclientstattxpurgereq.get_name_leafdata());
    if (nhrpclientstattxregisterreq.is_set || is_set(nhrpclientstattxregisterreq.operation)) leaf_name_data.push_back(nhrpclientstattxregisterreq.get_name_leafdata());
    if (nhrpclientstattxresolvereq.is_set || is_set(nhrpclientstattxresolvereq.operation)) leaf_name_data.push_back(nhrpclientstattxresolvereq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpclientstattable::Nhrpclientstatentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpclientstattable::Nhrpclientstatentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpclientstattable::Nhrpclientstatentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex = value;
    }
    if(value_path == "nhrpClientStatDiscontinuityTime")
    {
        nhrpclientstatdiscontinuitytime = value;
    }
    if(value_path == "nhrpClientStatRxErrAuthenticationFailure")
    {
        nhrpclientstatrxerrauthenticationfailure = value;
    }
    if(value_path == "nhrpClientStatRxErrHopCountExceeded")
    {
        nhrpclientstatrxerrhopcountexceeded = value;
    }
    if(value_path == "nhrpClientStatRxErrInvalidExtension")
    {
        nhrpclientstatrxerrinvalidextension = value;
    }
    if(value_path == "nhrpClientStatRxErrLoopDetected")
    {
        nhrpclientstatrxerrloopdetected = value;
    }
    if(value_path == "nhrpClientStatRxErrProtoAddrUnreachable")
    {
        nhrpclientstatrxerrprotoaddrunreachable = value;
    }
    if(value_path == "nhrpClientStatRxErrProtoError")
    {
        nhrpclientstatrxerrprotoerror = value;
    }
    if(value_path == "nhrpClientStatRxErrSduSizeExceeded")
    {
        nhrpclientstatrxerrsdusizeexceeded = value;
    }
    if(value_path == "nhrpClientStatRxErrUnrecognizedExtension")
    {
        nhrpclientstatrxerrunrecognizedextension = value;
    }
    if(value_path == "nhrpClientStatRxPurgeReply")
    {
        nhrpclientstatrxpurgereply = value;
    }
    if(value_path == "nhrpClientStatRxPurgeReq")
    {
        nhrpclientstatrxpurgereq = value;
    }
    if(value_path == "nhrpClientStatRxRegisterAck")
    {
        nhrpclientstatrxregisterack = value;
    }
    if(value_path == "nhrpClientStatRxRegisterNakAlreadyReg")
    {
        nhrpclientstatrxregisternakalreadyreg = value;
    }
    if(value_path == "nhrpClientStatRxRegisterNakInsufResources")
    {
        nhrpclientstatrxregisternakinsufresources = value;
    }
    if(value_path == "nhrpClientStatRxRegisterNakProhibited")
    {
        nhrpclientstatrxregisternakprohibited = value;
    }
    if(value_path == "nhrpClientStatRxResolveReplyAck")
    {
        nhrpclientstatrxresolvereplyack = value;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakInsufResources")
    {
        nhrpclientstatrxresolvereplynakinsufresources = value;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakNoBinding")
    {
        nhrpclientstatrxresolvereplynaknobinding = value;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakNotUnique")
    {
        nhrpclientstatrxresolvereplynaknotunique = value;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakProhibited")
    {
        nhrpclientstatrxresolvereplynakprohibited = value;
    }
    if(value_path == "nhrpClientStatTxErrorIndication")
    {
        nhrpclientstattxerrorindication = value;
    }
    if(value_path == "nhrpClientStatTxPurgeReply")
    {
        nhrpclientstattxpurgereply = value;
    }
    if(value_path == "nhrpClientStatTxPurgeReq")
    {
        nhrpclientstattxpurgereq = value;
    }
    if(value_path == "nhrpClientStatTxRegisterReq")
    {
        nhrpclientstattxregisterreq = value;
    }
    if(value_path == "nhrpClientStatTxResolveReq")
    {
        nhrpclientstattxresolvereq = value;
    }
}

NhrpMib::Nhrpservertable::Nhrpservertable()
{
    yang_name = "nhrpServerTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpservertable::~Nhrpservertable()
{
}

bool NhrpMib::Nhrpservertable::has_data() const
{
    for (std::size_t index=0; index<nhrpserverentry.size(); index++)
    {
        if(nhrpserverentry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrpservertable::has_operation() const
{
    for (std::size_t index=0; index<nhrpserverentry.size(); index++)
    {
        if(nhrpserverentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrpservertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpservertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpservertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpServerEntry")
    {
        for(auto const & c : nhrpserverentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrpservertable::Nhrpserverentry>();
        c->parent = this;
        nhrpserverentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpservertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrpserverentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrpservertable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrpservertable::Nhrpserverentry::Nhrpserverentry()
    :
    nhrpserverindex{YType::uint32, "nhrpServerIndex"},
    nhrpserverinternetworkaddr{YType::str, "nhrpServerInternetworkAddr"},
    nhrpserverinternetworkaddrtype{YType::enumeration, "nhrpServerInternetworkAddrType"},
    nhrpservernbmaaddr{YType::str, "nhrpServerNbmaAddr"},
    nhrpservernbmaaddrtype{YType::enumeration, "nhrpServerNbmaAddrType"},
    nhrpservernbmasubaddr{YType::str, "nhrpServerNbmaSubaddr"},
    nhrpserverrowstatus{YType::enumeration, "nhrpServerRowStatus"},
    nhrpserverstoragetype{YType::enumeration, "nhrpServerStorageType"}
{
    yang_name = "nhrpServerEntry"; yang_parent_name = "nhrpServerTable";
}

NhrpMib::Nhrpservertable::Nhrpserverentry::~Nhrpserverentry()
{
}

bool NhrpMib::Nhrpservertable::Nhrpserverentry::has_data() const
{
    return nhrpserverindex.is_set
	|| nhrpserverinternetworkaddr.is_set
	|| nhrpserverinternetworkaddrtype.is_set
	|| nhrpservernbmaaddr.is_set
	|| nhrpservernbmaaddrtype.is_set
	|| nhrpservernbmasubaddr.is_set
	|| nhrpserverrowstatus.is_set
	|| nhrpserverstoragetype.is_set;
}

bool NhrpMib::Nhrpservertable::Nhrpserverentry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpserverindex.operation)
	|| is_set(nhrpserverinternetworkaddr.operation)
	|| is_set(nhrpserverinternetworkaddrtype.operation)
	|| is_set(nhrpservernbmaaddr.operation)
	|| is_set(nhrpservernbmaaddrtype.operation)
	|| is_set(nhrpservernbmasubaddr.operation)
	|| is_set(nhrpserverrowstatus.operation)
	|| is_set(nhrpserverstoragetype.operation);
}

std::string NhrpMib::Nhrpservertable::Nhrpserverentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerEntry" <<"[nhrpServerIndex='" <<nhrpserverindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpservertable::Nhrpserverentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpServerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpserverindex.is_set || is_set(nhrpserverindex.operation)) leaf_name_data.push_back(nhrpserverindex.get_name_leafdata());
    if (nhrpserverinternetworkaddr.is_set || is_set(nhrpserverinternetworkaddr.operation)) leaf_name_data.push_back(nhrpserverinternetworkaddr.get_name_leafdata());
    if (nhrpserverinternetworkaddrtype.is_set || is_set(nhrpserverinternetworkaddrtype.operation)) leaf_name_data.push_back(nhrpserverinternetworkaddrtype.get_name_leafdata());
    if (nhrpservernbmaaddr.is_set || is_set(nhrpservernbmaaddr.operation)) leaf_name_data.push_back(nhrpservernbmaaddr.get_name_leafdata());
    if (nhrpservernbmaaddrtype.is_set || is_set(nhrpservernbmaaddrtype.operation)) leaf_name_data.push_back(nhrpservernbmaaddrtype.get_name_leafdata());
    if (nhrpservernbmasubaddr.is_set || is_set(nhrpservernbmasubaddr.operation)) leaf_name_data.push_back(nhrpservernbmasubaddr.get_name_leafdata());
    if (nhrpserverrowstatus.is_set || is_set(nhrpserverrowstatus.operation)) leaf_name_data.push_back(nhrpserverrowstatus.get_name_leafdata());
    if (nhrpserverstoragetype.is_set || is_set(nhrpserverstoragetype.operation)) leaf_name_data.push_back(nhrpserverstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpservertable::Nhrpserverentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpservertable::Nhrpserverentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpservertable::Nhrpserverentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpServerIndex")
    {
        nhrpserverindex = value;
    }
    if(value_path == "nhrpServerInternetworkAddr")
    {
        nhrpserverinternetworkaddr = value;
    }
    if(value_path == "nhrpServerInternetworkAddrType")
    {
        nhrpserverinternetworkaddrtype = value;
    }
    if(value_path == "nhrpServerNbmaAddr")
    {
        nhrpservernbmaaddr = value;
    }
    if(value_path == "nhrpServerNbmaAddrType")
    {
        nhrpservernbmaaddrtype = value;
    }
    if(value_path == "nhrpServerNbmaSubaddr")
    {
        nhrpservernbmasubaddr = value;
    }
    if(value_path == "nhrpServerRowStatus")
    {
        nhrpserverrowstatus = value;
    }
    if(value_path == "nhrpServerStorageType")
    {
        nhrpserverstoragetype = value;
    }
}

NhrpMib::Nhrpservercachetable::Nhrpservercachetable()
{
    yang_name = "nhrpServerCacheTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpservercachetable::~Nhrpservercachetable()
{
}

bool NhrpMib::Nhrpservercachetable::has_data() const
{
    for (std::size_t index=0; index<nhrpservercacheentry.size(); index++)
    {
        if(nhrpservercacheentry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrpservercachetable::has_operation() const
{
    for (std::size_t index=0; index<nhrpservercacheentry.size(); index++)
    {
        if(nhrpservercacheentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrpservercachetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerCacheTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpservercachetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpservercachetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpServerCacheEntry")
    {
        for(auto const & c : nhrpservercacheentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrpservercachetable::Nhrpservercacheentry>();
        c->parent = this;
        nhrpservercacheentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpservercachetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrpservercacheentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrpservercachetable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrpservercachetable::Nhrpservercacheentry::Nhrpservercacheentry()
    :
    nhrpcacheinternetworkaddrtype{YType::enumeration, "nhrpCacheInternetworkAddrType"},
    nhrpcacheinternetworkaddr{YType::str, "nhrpCacheInternetworkAddr"},
    ifindex{YType::str, "ifIndex"},
    nhrpcacheindex{YType::str, "nhrpCacheIndex"},
    nhrpservercacheauthoritative{YType::boolean, "nhrpServerCacheAuthoritative"},
    nhrpservercacheuniqueness{YType::boolean, "nhrpServerCacheUniqueness"}
{
    yang_name = "nhrpServerCacheEntry"; yang_parent_name = "nhrpServerCacheTable";
}

NhrpMib::Nhrpservercachetable::Nhrpservercacheentry::~Nhrpservercacheentry()
{
}

bool NhrpMib::Nhrpservercachetable::Nhrpservercacheentry::has_data() const
{
    return nhrpcacheinternetworkaddrtype.is_set
	|| nhrpcacheinternetworkaddr.is_set
	|| ifindex.is_set
	|| nhrpcacheindex.is_set
	|| nhrpservercacheauthoritative.is_set
	|| nhrpservercacheuniqueness.is_set;
}

bool NhrpMib::Nhrpservercachetable::Nhrpservercacheentry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpcacheinternetworkaddrtype.operation)
	|| is_set(nhrpcacheinternetworkaddr.operation)
	|| is_set(ifindex.operation)
	|| is_set(nhrpcacheindex.operation)
	|| is_set(nhrpservercacheauthoritative.operation)
	|| is_set(nhrpservercacheuniqueness.operation);
}

std::string NhrpMib::Nhrpservercachetable::Nhrpservercacheentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerCacheEntry" <<"[nhrpCacheInternetworkAddrType='" <<nhrpcacheinternetworkaddrtype <<"']" <<"[nhrpCacheInternetworkAddr='" <<nhrpcacheinternetworkaddr <<"']" <<"[ifIndex='" <<ifindex <<"']" <<"[nhrpCacheIndex='" <<nhrpcacheindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpservercachetable::Nhrpservercacheentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpServerCacheTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpcacheinternetworkaddrtype.is_set || is_set(nhrpcacheinternetworkaddrtype.operation)) leaf_name_data.push_back(nhrpcacheinternetworkaddrtype.get_name_leafdata());
    if (nhrpcacheinternetworkaddr.is_set || is_set(nhrpcacheinternetworkaddr.operation)) leaf_name_data.push_back(nhrpcacheinternetworkaddr.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (nhrpcacheindex.is_set || is_set(nhrpcacheindex.operation)) leaf_name_data.push_back(nhrpcacheindex.get_name_leafdata());
    if (nhrpservercacheauthoritative.is_set || is_set(nhrpservercacheauthoritative.operation)) leaf_name_data.push_back(nhrpservercacheauthoritative.get_name_leafdata());
    if (nhrpservercacheuniqueness.is_set || is_set(nhrpservercacheuniqueness.operation)) leaf_name_data.push_back(nhrpservercacheuniqueness.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpservercachetable::Nhrpservercacheentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpservercachetable::Nhrpservercacheentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpservercachetable::Nhrpservercacheentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpCacheInternetworkAddrType")
    {
        nhrpcacheinternetworkaddrtype = value;
    }
    if(value_path == "nhrpCacheInternetworkAddr")
    {
        nhrpcacheinternetworkaddr = value;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "nhrpCacheIndex")
    {
        nhrpcacheindex = value;
    }
    if(value_path == "nhrpServerCacheAuthoritative")
    {
        nhrpservercacheauthoritative = value;
    }
    if(value_path == "nhrpServerCacheUniqueness")
    {
        nhrpservercacheuniqueness = value;
    }
}

NhrpMib::Nhrpservernhctable::Nhrpservernhctable()
{
    yang_name = "nhrpServerNhcTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpservernhctable::~Nhrpservernhctable()
{
}

bool NhrpMib::Nhrpservernhctable::has_data() const
{
    for (std::size_t index=0; index<nhrpservernhcentry.size(); index++)
    {
        if(nhrpservernhcentry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrpservernhctable::has_operation() const
{
    for (std::size_t index=0; index<nhrpservernhcentry.size(); index++)
    {
        if(nhrpservernhcentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrpservernhctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerNhcTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpservernhctable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpservernhctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpServerNhcEntry")
    {
        for(auto const & c : nhrpservernhcentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrpservernhctable::Nhrpservernhcentry>();
        c->parent = this;
        nhrpservernhcentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpservernhctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrpservernhcentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrpservernhctable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrpservernhctable::Nhrpservernhcentry::Nhrpservernhcentry()
    :
    nhrpserverindex{YType::str, "nhrpServerIndex"},
    nhrpservernhcindex{YType::uint32, "nhrpServerNhcIndex"},
    nhrpservernhcinternetworkaddr{YType::str, "nhrpServerNhcInternetworkAddr"},
    nhrpservernhcinternetworkaddrtype{YType::enumeration, "nhrpServerNhcInternetworkAddrType"},
    nhrpservernhcinuse{YType::boolean, "nhrpServerNhcInUse"},
    nhrpservernhcnbmaaddr{YType::str, "nhrpServerNhcNbmaAddr"},
    nhrpservernhcnbmaaddrtype{YType::enumeration, "nhrpServerNhcNbmaAddrType"},
    nhrpservernhcnbmasubaddr{YType::str, "nhrpServerNhcNbmaSubaddr"},
    nhrpservernhcprefixlength{YType::int32, "nhrpServerNhcPrefixLength"},
    nhrpservernhcrowstatus{YType::enumeration, "nhrpServerNhcRowStatus"}
{
    yang_name = "nhrpServerNhcEntry"; yang_parent_name = "nhrpServerNhcTable";
}

NhrpMib::Nhrpservernhctable::Nhrpservernhcentry::~Nhrpservernhcentry()
{
}

bool NhrpMib::Nhrpservernhctable::Nhrpservernhcentry::has_data() const
{
    return nhrpserverindex.is_set
	|| nhrpservernhcindex.is_set
	|| nhrpservernhcinternetworkaddr.is_set
	|| nhrpservernhcinternetworkaddrtype.is_set
	|| nhrpservernhcinuse.is_set
	|| nhrpservernhcnbmaaddr.is_set
	|| nhrpservernhcnbmaaddrtype.is_set
	|| nhrpservernhcnbmasubaddr.is_set
	|| nhrpservernhcprefixlength.is_set
	|| nhrpservernhcrowstatus.is_set;
}

bool NhrpMib::Nhrpservernhctable::Nhrpservernhcentry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpserverindex.operation)
	|| is_set(nhrpservernhcindex.operation)
	|| is_set(nhrpservernhcinternetworkaddr.operation)
	|| is_set(nhrpservernhcinternetworkaddrtype.operation)
	|| is_set(nhrpservernhcinuse.operation)
	|| is_set(nhrpservernhcnbmaaddr.operation)
	|| is_set(nhrpservernhcnbmaaddrtype.operation)
	|| is_set(nhrpservernhcnbmasubaddr.operation)
	|| is_set(nhrpservernhcprefixlength.operation)
	|| is_set(nhrpservernhcrowstatus.operation);
}

std::string NhrpMib::Nhrpservernhctable::Nhrpservernhcentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerNhcEntry" <<"[nhrpServerIndex='" <<nhrpserverindex <<"']" <<"[nhrpServerNhcIndex='" <<nhrpservernhcindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpservernhctable::Nhrpservernhcentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpServerNhcTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpserverindex.is_set || is_set(nhrpserverindex.operation)) leaf_name_data.push_back(nhrpserverindex.get_name_leafdata());
    if (nhrpservernhcindex.is_set || is_set(nhrpservernhcindex.operation)) leaf_name_data.push_back(nhrpservernhcindex.get_name_leafdata());
    if (nhrpservernhcinternetworkaddr.is_set || is_set(nhrpservernhcinternetworkaddr.operation)) leaf_name_data.push_back(nhrpservernhcinternetworkaddr.get_name_leafdata());
    if (nhrpservernhcinternetworkaddrtype.is_set || is_set(nhrpservernhcinternetworkaddrtype.operation)) leaf_name_data.push_back(nhrpservernhcinternetworkaddrtype.get_name_leafdata());
    if (nhrpservernhcinuse.is_set || is_set(nhrpservernhcinuse.operation)) leaf_name_data.push_back(nhrpservernhcinuse.get_name_leafdata());
    if (nhrpservernhcnbmaaddr.is_set || is_set(nhrpservernhcnbmaaddr.operation)) leaf_name_data.push_back(nhrpservernhcnbmaaddr.get_name_leafdata());
    if (nhrpservernhcnbmaaddrtype.is_set || is_set(nhrpservernhcnbmaaddrtype.operation)) leaf_name_data.push_back(nhrpservernhcnbmaaddrtype.get_name_leafdata());
    if (nhrpservernhcnbmasubaddr.is_set || is_set(nhrpservernhcnbmasubaddr.operation)) leaf_name_data.push_back(nhrpservernhcnbmasubaddr.get_name_leafdata());
    if (nhrpservernhcprefixlength.is_set || is_set(nhrpservernhcprefixlength.operation)) leaf_name_data.push_back(nhrpservernhcprefixlength.get_name_leafdata());
    if (nhrpservernhcrowstatus.is_set || is_set(nhrpservernhcrowstatus.operation)) leaf_name_data.push_back(nhrpservernhcrowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpservernhctable::Nhrpservernhcentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpservernhctable::Nhrpservernhcentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpservernhctable::Nhrpservernhcentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpServerIndex")
    {
        nhrpserverindex = value;
    }
    if(value_path == "nhrpServerNhcIndex")
    {
        nhrpservernhcindex = value;
    }
    if(value_path == "nhrpServerNhcInternetworkAddr")
    {
        nhrpservernhcinternetworkaddr = value;
    }
    if(value_path == "nhrpServerNhcInternetworkAddrType")
    {
        nhrpservernhcinternetworkaddrtype = value;
    }
    if(value_path == "nhrpServerNhcInUse")
    {
        nhrpservernhcinuse = value;
    }
    if(value_path == "nhrpServerNhcNbmaAddr")
    {
        nhrpservernhcnbmaaddr = value;
    }
    if(value_path == "nhrpServerNhcNbmaAddrType")
    {
        nhrpservernhcnbmaaddrtype = value;
    }
    if(value_path == "nhrpServerNhcNbmaSubaddr")
    {
        nhrpservernhcnbmasubaddr = value;
    }
    if(value_path == "nhrpServerNhcPrefixLength")
    {
        nhrpservernhcprefixlength = value;
    }
    if(value_path == "nhrpServerNhcRowStatus")
    {
        nhrpservernhcrowstatus = value;
    }
}

NhrpMib::Nhrpserverstattable::Nhrpserverstattable()
{
    yang_name = "nhrpServerStatTable"; yang_parent_name = "NHRP-MIB";
}

NhrpMib::Nhrpserverstattable::~Nhrpserverstattable()
{
}

bool NhrpMib::Nhrpserverstattable::has_data() const
{
    for (std::size_t index=0; index<nhrpserverstatentry.size(); index++)
    {
        if(nhrpserverstatentry[index]->has_data())
            return true;
    }
    return false;
}

bool NhrpMib::Nhrpserverstattable::has_operation() const
{
    for (std::size_t index=0; index<nhrpserverstatentry.size(); index++)
    {
        if(nhrpserverstatentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NhrpMib::Nhrpserverstattable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerStatTable";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpserverstattable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpserverstattable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpServerStatEntry")
    {
        for(auto const & c : nhrpserverstatentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NhrpMib::Nhrpserverstattable::Nhrpserverstatentry>();
        c->parent = this;
        nhrpserverstatentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpserverstattable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrpserverstatentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NhrpMib::Nhrpserverstattable::set_value(const std::string & value_path, std::string value)
{
}

NhrpMib::Nhrpserverstattable::Nhrpserverstatentry::Nhrpserverstatentry()
    :
    nhrpserverindex{YType::str, "nhrpServerIndex"},
    nhrpserverstatdiscontinuitytime{YType::uint32, "nhrpServerStatDiscontinuityTime"},
    nhrpserverstatfwerrorindication{YType::uint32, "nhrpServerStatFwErrorIndication"},
    nhrpserverstatfwpurgereply{YType::uint32, "nhrpServerStatFwPurgeReply"},
    nhrpserverstatfwpurgereq{YType::uint32, "nhrpServerStatFwPurgeReq"},
    nhrpserverstatfwregisterreply{YType::uint32, "nhrpServerStatFwRegisterReply"},
    nhrpserverstatfwregisterreq{YType::uint32, "nhrpServerStatFwRegisterReq"},
    nhrpserverstatfwresolvereply{YType::uint32, "nhrpServerStatFwResolveReply"},
    nhrpserverstatfwresolvereq{YType::uint32, "nhrpServerStatFwResolveReq"},
    nhrpserverstatrxerrauthenticationfailure{YType::uint32, "nhrpServerStatRxErrAuthenticationFailure"},
    nhrpserverstatrxerrhopcountexceeded{YType::uint32, "nhrpServerStatRxErrHopCountExceeded"},
    nhrpserverstatrxerrinvalidextension{YType::uint32, "nhrpServerStatRxErrInvalidExtension"},
    nhrpserverstatrxerrinvalidresreplyreceived{YType::uint32, "nhrpServerStatRxErrInvalidResReplyReceived"},
    nhrpserverstatrxerrloopdetected{YType::uint32, "nhrpServerStatRxErrLoopDetected"},
    nhrpserverstatrxerrprotoaddrunreachable{YType::uint32, "nhrpServerStatRxErrProtoAddrUnreachable"},
    nhrpserverstatrxerrprotoerror{YType::uint32, "nhrpServerStatRxErrProtoError"},
    nhrpserverstatrxerrsdusizeexceeded{YType::uint32, "nhrpServerStatRxErrSduSizeExceeded"},
    nhrpserverstatrxerrunrecognizedextension{YType::uint32, "nhrpServerStatRxErrUnrecognizedExtension"},
    nhrpserverstatrxpurgereply{YType::uint32, "nhrpServerStatRxPurgeReply"},
    nhrpserverstatrxpurgereq{YType::uint32, "nhrpServerStatRxPurgeReq"},
    nhrpserverstatrxregisterreq{YType::uint32, "nhrpServerStatRxRegisterReq"},
    nhrpserverstatrxresolvereq{YType::uint32, "nhrpServerStatRxResolveReq"},
    nhrpserverstattxerrauthenticationfailure{YType::uint32, "nhrpServerStatTxErrAuthenticationFailure"},
    nhrpserverstattxerrhopcountexceeded{YType::uint32, "nhrpServerStatTxErrHopCountExceeded"},
    nhrpserverstattxerrinvalidextension{YType::uint32, "nhrpServerStatTxErrInvalidExtension"},
    nhrpserverstattxerrloopdetected{YType::uint32, "nhrpServerStatTxErrLoopDetected"},
    nhrpserverstattxerrprotoaddrunreachable{YType::uint32, "nhrpServerStatTxErrProtoAddrUnreachable"},
    nhrpserverstattxerrprotoerror{YType::uint32, "nhrpServerStatTxErrProtoError"},
    nhrpserverstattxerrsdusizeexceeded{YType::uint32, "nhrpServerStatTxErrSduSizeExceeded"},
    nhrpserverstattxerrunrecognizedextension{YType::uint32, "nhrpServerStatTxErrUnrecognizedExtension"},
    nhrpserverstattxpurgereply{YType::uint32, "nhrpServerStatTxPurgeReply"},
    nhrpserverstattxpurgereq{YType::uint32, "nhrpServerStatTxPurgeReq"},
    nhrpserverstattxregisterack{YType::uint32, "nhrpServerStatTxRegisterAck"},
    nhrpserverstattxregisternakalreadyreg{YType::uint32, "nhrpServerStatTxRegisterNakAlreadyReg"},
    nhrpserverstattxregisternakinsufresources{YType::uint32, "nhrpServerStatTxRegisterNakInsufResources"},
    nhrpserverstattxregisternakprohibited{YType::uint32, "nhrpServerStatTxRegisterNakProhibited"},
    nhrpserverstattxresolvereplyack{YType::uint32, "nhrpServerStatTxResolveReplyAck"},
    nhrpserverstattxresolvereplynakinsufresources{YType::uint32, "nhrpServerStatTxResolveReplyNakInsufResources"},
    nhrpserverstattxresolvereplynaknobinding{YType::uint32, "nhrpServerStatTxResolveReplyNakNoBinding"},
    nhrpserverstattxresolvereplynaknotunique{YType::uint32, "nhrpServerStatTxResolveReplyNakNotUnique"},
    nhrpserverstattxresolvereplynakprohibited{YType::uint32, "nhrpServerStatTxResolveReplyNakProhibited"}
{
    yang_name = "nhrpServerStatEntry"; yang_parent_name = "nhrpServerStatTable";
}

NhrpMib::Nhrpserverstattable::Nhrpserverstatentry::~Nhrpserverstatentry()
{
}

bool NhrpMib::Nhrpserverstattable::Nhrpserverstatentry::has_data() const
{
    return nhrpserverindex.is_set
	|| nhrpserverstatdiscontinuitytime.is_set
	|| nhrpserverstatfwerrorindication.is_set
	|| nhrpserverstatfwpurgereply.is_set
	|| nhrpserverstatfwpurgereq.is_set
	|| nhrpserverstatfwregisterreply.is_set
	|| nhrpserverstatfwregisterreq.is_set
	|| nhrpserverstatfwresolvereply.is_set
	|| nhrpserverstatfwresolvereq.is_set
	|| nhrpserverstatrxerrauthenticationfailure.is_set
	|| nhrpserverstatrxerrhopcountexceeded.is_set
	|| nhrpserverstatrxerrinvalidextension.is_set
	|| nhrpserverstatrxerrinvalidresreplyreceived.is_set
	|| nhrpserverstatrxerrloopdetected.is_set
	|| nhrpserverstatrxerrprotoaddrunreachable.is_set
	|| nhrpserverstatrxerrprotoerror.is_set
	|| nhrpserverstatrxerrsdusizeexceeded.is_set
	|| nhrpserverstatrxerrunrecognizedextension.is_set
	|| nhrpserverstatrxpurgereply.is_set
	|| nhrpserverstatrxpurgereq.is_set
	|| nhrpserverstatrxregisterreq.is_set
	|| nhrpserverstatrxresolvereq.is_set
	|| nhrpserverstattxerrauthenticationfailure.is_set
	|| nhrpserverstattxerrhopcountexceeded.is_set
	|| nhrpserverstattxerrinvalidextension.is_set
	|| nhrpserverstattxerrloopdetected.is_set
	|| nhrpserverstattxerrprotoaddrunreachable.is_set
	|| nhrpserverstattxerrprotoerror.is_set
	|| nhrpserverstattxerrsdusizeexceeded.is_set
	|| nhrpserverstattxerrunrecognizedextension.is_set
	|| nhrpserverstattxpurgereply.is_set
	|| nhrpserverstattxpurgereq.is_set
	|| nhrpserverstattxregisterack.is_set
	|| nhrpserverstattxregisternakalreadyreg.is_set
	|| nhrpserverstattxregisternakinsufresources.is_set
	|| nhrpserverstattxregisternakprohibited.is_set
	|| nhrpserverstattxresolvereplyack.is_set
	|| nhrpserverstattxresolvereplynakinsufresources.is_set
	|| nhrpserverstattxresolvereplynaknobinding.is_set
	|| nhrpserverstattxresolvereplynaknotunique.is_set
	|| nhrpserverstattxresolvereplynakprohibited.is_set;
}

bool NhrpMib::Nhrpserverstattable::Nhrpserverstatentry::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrpserverindex.operation)
	|| is_set(nhrpserverstatdiscontinuitytime.operation)
	|| is_set(nhrpserverstatfwerrorindication.operation)
	|| is_set(nhrpserverstatfwpurgereply.operation)
	|| is_set(nhrpserverstatfwpurgereq.operation)
	|| is_set(nhrpserverstatfwregisterreply.operation)
	|| is_set(nhrpserverstatfwregisterreq.operation)
	|| is_set(nhrpserverstatfwresolvereply.operation)
	|| is_set(nhrpserverstatfwresolvereq.operation)
	|| is_set(nhrpserverstatrxerrauthenticationfailure.operation)
	|| is_set(nhrpserverstatrxerrhopcountexceeded.operation)
	|| is_set(nhrpserverstatrxerrinvalidextension.operation)
	|| is_set(nhrpserverstatrxerrinvalidresreplyreceived.operation)
	|| is_set(nhrpserverstatrxerrloopdetected.operation)
	|| is_set(nhrpserverstatrxerrprotoaddrunreachable.operation)
	|| is_set(nhrpserverstatrxerrprotoerror.operation)
	|| is_set(nhrpserverstatrxerrsdusizeexceeded.operation)
	|| is_set(nhrpserverstatrxerrunrecognizedextension.operation)
	|| is_set(nhrpserverstatrxpurgereply.operation)
	|| is_set(nhrpserverstatrxpurgereq.operation)
	|| is_set(nhrpserverstatrxregisterreq.operation)
	|| is_set(nhrpserverstatrxresolvereq.operation)
	|| is_set(nhrpserverstattxerrauthenticationfailure.operation)
	|| is_set(nhrpserverstattxerrhopcountexceeded.operation)
	|| is_set(nhrpserverstattxerrinvalidextension.operation)
	|| is_set(nhrpserverstattxerrloopdetected.operation)
	|| is_set(nhrpserverstattxerrprotoaddrunreachable.operation)
	|| is_set(nhrpserverstattxerrprotoerror.operation)
	|| is_set(nhrpserverstattxerrsdusizeexceeded.operation)
	|| is_set(nhrpserverstattxerrunrecognizedextension.operation)
	|| is_set(nhrpserverstattxpurgereply.operation)
	|| is_set(nhrpserverstattxpurgereq.operation)
	|| is_set(nhrpserverstattxregisterack.operation)
	|| is_set(nhrpserverstattxregisternakalreadyreg.operation)
	|| is_set(nhrpserverstattxregisternakinsufresources.operation)
	|| is_set(nhrpserverstattxregisternakprohibited.operation)
	|| is_set(nhrpserverstattxresolvereplyack.operation)
	|| is_set(nhrpserverstattxresolvereplynakinsufresources.operation)
	|| is_set(nhrpserverstattxresolvereplynaknobinding.operation)
	|| is_set(nhrpserverstattxresolvereplynaknotunique.operation)
	|| is_set(nhrpserverstattxresolvereplynakprohibited.operation);
}

std::string NhrpMib::Nhrpserverstattable::Nhrpserverstatentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerStatEntry" <<"[nhrpServerIndex='" <<nhrpserverindex <<"']";

    return path_buffer.str();

}

const EntityPath NhrpMib::Nhrpserverstattable::Nhrpserverstatentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NHRP-MIB:NHRP-MIB/nhrpServerStatTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpserverindex.is_set || is_set(nhrpserverindex.operation)) leaf_name_data.push_back(nhrpserverindex.get_name_leafdata());
    if (nhrpserverstatdiscontinuitytime.is_set || is_set(nhrpserverstatdiscontinuitytime.operation)) leaf_name_data.push_back(nhrpserverstatdiscontinuitytime.get_name_leafdata());
    if (nhrpserverstatfwerrorindication.is_set || is_set(nhrpserverstatfwerrorindication.operation)) leaf_name_data.push_back(nhrpserverstatfwerrorindication.get_name_leafdata());
    if (nhrpserverstatfwpurgereply.is_set || is_set(nhrpserverstatfwpurgereply.operation)) leaf_name_data.push_back(nhrpserverstatfwpurgereply.get_name_leafdata());
    if (nhrpserverstatfwpurgereq.is_set || is_set(nhrpserverstatfwpurgereq.operation)) leaf_name_data.push_back(nhrpserverstatfwpurgereq.get_name_leafdata());
    if (nhrpserverstatfwregisterreply.is_set || is_set(nhrpserverstatfwregisterreply.operation)) leaf_name_data.push_back(nhrpserverstatfwregisterreply.get_name_leafdata());
    if (nhrpserverstatfwregisterreq.is_set || is_set(nhrpserverstatfwregisterreq.operation)) leaf_name_data.push_back(nhrpserverstatfwregisterreq.get_name_leafdata());
    if (nhrpserverstatfwresolvereply.is_set || is_set(nhrpserverstatfwresolvereply.operation)) leaf_name_data.push_back(nhrpserverstatfwresolvereply.get_name_leafdata());
    if (nhrpserverstatfwresolvereq.is_set || is_set(nhrpserverstatfwresolvereq.operation)) leaf_name_data.push_back(nhrpserverstatfwresolvereq.get_name_leafdata());
    if (nhrpserverstatrxerrauthenticationfailure.is_set || is_set(nhrpserverstatrxerrauthenticationfailure.operation)) leaf_name_data.push_back(nhrpserverstatrxerrauthenticationfailure.get_name_leafdata());
    if (nhrpserverstatrxerrhopcountexceeded.is_set || is_set(nhrpserverstatrxerrhopcountexceeded.operation)) leaf_name_data.push_back(nhrpserverstatrxerrhopcountexceeded.get_name_leafdata());
    if (nhrpserverstatrxerrinvalidextension.is_set || is_set(nhrpserverstatrxerrinvalidextension.operation)) leaf_name_data.push_back(nhrpserverstatrxerrinvalidextension.get_name_leafdata());
    if (nhrpserverstatrxerrinvalidresreplyreceived.is_set || is_set(nhrpserverstatrxerrinvalidresreplyreceived.operation)) leaf_name_data.push_back(nhrpserverstatrxerrinvalidresreplyreceived.get_name_leafdata());
    if (nhrpserverstatrxerrloopdetected.is_set || is_set(nhrpserverstatrxerrloopdetected.operation)) leaf_name_data.push_back(nhrpserverstatrxerrloopdetected.get_name_leafdata());
    if (nhrpserverstatrxerrprotoaddrunreachable.is_set || is_set(nhrpserverstatrxerrprotoaddrunreachable.operation)) leaf_name_data.push_back(nhrpserverstatrxerrprotoaddrunreachable.get_name_leafdata());
    if (nhrpserverstatrxerrprotoerror.is_set || is_set(nhrpserverstatrxerrprotoerror.operation)) leaf_name_data.push_back(nhrpserverstatrxerrprotoerror.get_name_leafdata());
    if (nhrpserverstatrxerrsdusizeexceeded.is_set || is_set(nhrpserverstatrxerrsdusizeexceeded.operation)) leaf_name_data.push_back(nhrpserverstatrxerrsdusizeexceeded.get_name_leafdata());
    if (nhrpserverstatrxerrunrecognizedextension.is_set || is_set(nhrpserverstatrxerrunrecognizedextension.operation)) leaf_name_data.push_back(nhrpserverstatrxerrunrecognizedextension.get_name_leafdata());
    if (nhrpserverstatrxpurgereply.is_set || is_set(nhrpserverstatrxpurgereply.operation)) leaf_name_data.push_back(nhrpserverstatrxpurgereply.get_name_leafdata());
    if (nhrpserverstatrxpurgereq.is_set || is_set(nhrpserverstatrxpurgereq.operation)) leaf_name_data.push_back(nhrpserverstatrxpurgereq.get_name_leafdata());
    if (nhrpserverstatrxregisterreq.is_set || is_set(nhrpserverstatrxregisterreq.operation)) leaf_name_data.push_back(nhrpserverstatrxregisterreq.get_name_leafdata());
    if (nhrpserverstatrxresolvereq.is_set || is_set(nhrpserverstatrxresolvereq.operation)) leaf_name_data.push_back(nhrpserverstatrxresolvereq.get_name_leafdata());
    if (nhrpserverstattxerrauthenticationfailure.is_set || is_set(nhrpserverstattxerrauthenticationfailure.operation)) leaf_name_data.push_back(nhrpserverstattxerrauthenticationfailure.get_name_leafdata());
    if (nhrpserverstattxerrhopcountexceeded.is_set || is_set(nhrpserverstattxerrhopcountexceeded.operation)) leaf_name_data.push_back(nhrpserverstattxerrhopcountexceeded.get_name_leafdata());
    if (nhrpserverstattxerrinvalidextension.is_set || is_set(nhrpserverstattxerrinvalidextension.operation)) leaf_name_data.push_back(nhrpserverstattxerrinvalidextension.get_name_leafdata());
    if (nhrpserverstattxerrloopdetected.is_set || is_set(nhrpserverstattxerrloopdetected.operation)) leaf_name_data.push_back(nhrpserverstattxerrloopdetected.get_name_leafdata());
    if (nhrpserverstattxerrprotoaddrunreachable.is_set || is_set(nhrpserverstattxerrprotoaddrunreachable.operation)) leaf_name_data.push_back(nhrpserverstattxerrprotoaddrunreachable.get_name_leafdata());
    if (nhrpserverstattxerrprotoerror.is_set || is_set(nhrpserverstattxerrprotoerror.operation)) leaf_name_data.push_back(nhrpserverstattxerrprotoerror.get_name_leafdata());
    if (nhrpserverstattxerrsdusizeexceeded.is_set || is_set(nhrpserverstattxerrsdusizeexceeded.operation)) leaf_name_data.push_back(nhrpserverstattxerrsdusizeexceeded.get_name_leafdata());
    if (nhrpserverstattxerrunrecognizedextension.is_set || is_set(nhrpserverstattxerrunrecognizedextension.operation)) leaf_name_data.push_back(nhrpserverstattxerrunrecognizedextension.get_name_leafdata());
    if (nhrpserverstattxpurgereply.is_set || is_set(nhrpserverstattxpurgereply.operation)) leaf_name_data.push_back(nhrpserverstattxpurgereply.get_name_leafdata());
    if (nhrpserverstattxpurgereq.is_set || is_set(nhrpserverstattxpurgereq.operation)) leaf_name_data.push_back(nhrpserverstattxpurgereq.get_name_leafdata());
    if (nhrpserverstattxregisterack.is_set || is_set(nhrpserverstattxregisterack.operation)) leaf_name_data.push_back(nhrpserverstattxregisterack.get_name_leafdata());
    if (nhrpserverstattxregisternakalreadyreg.is_set || is_set(nhrpserverstattxregisternakalreadyreg.operation)) leaf_name_data.push_back(nhrpserverstattxregisternakalreadyreg.get_name_leafdata());
    if (nhrpserverstattxregisternakinsufresources.is_set || is_set(nhrpserverstattxregisternakinsufresources.operation)) leaf_name_data.push_back(nhrpserverstattxregisternakinsufresources.get_name_leafdata());
    if (nhrpserverstattxregisternakprohibited.is_set || is_set(nhrpserverstattxregisternakprohibited.operation)) leaf_name_data.push_back(nhrpserverstattxregisternakprohibited.get_name_leafdata());
    if (nhrpserverstattxresolvereplyack.is_set || is_set(nhrpserverstattxresolvereplyack.operation)) leaf_name_data.push_back(nhrpserverstattxresolvereplyack.get_name_leafdata());
    if (nhrpserverstattxresolvereplynakinsufresources.is_set || is_set(nhrpserverstattxresolvereplynakinsufresources.operation)) leaf_name_data.push_back(nhrpserverstattxresolvereplynakinsufresources.get_name_leafdata());
    if (nhrpserverstattxresolvereplynaknobinding.is_set || is_set(nhrpserverstattxresolvereplynaknobinding.operation)) leaf_name_data.push_back(nhrpserverstattxresolvereplynaknobinding.get_name_leafdata());
    if (nhrpserverstattxresolvereplynaknotunique.is_set || is_set(nhrpserverstattxresolvereplynaknotunique.operation)) leaf_name_data.push_back(nhrpserverstattxresolvereplynaknotunique.get_name_leafdata());
    if (nhrpserverstattxresolvereplynakprohibited.is_set || is_set(nhrpserverstattxresolvereplynakprohibited.operation)) leaf_name_data.push_back(nhrpserverstattxresolvereplynakprohibited.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NhrpMib::Nhrpserverstattable::Nhrpserverstatentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NhrpMib::Nhrpserverstattable::Nhrpserverstatentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NhrpMib::Nhrpserverstattable::Nhrpserverstatentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrpServerIndex")
    {
        nhrpserverindex = value;
    }
    if(value_path == "nhrpServerStatDiscontinuityTime")
    {
        nhrpserverstatdiscontinuitytime = value;
    }
    if(value_path == "nhrpServerStatFwErrorIndication")
    {
        nhrpserverstatfwerrorindication = value;
    }
    if(value_path == "nhrpServerStatFwPurgeReply")
    {
        nhrpserverstatfwpurgereply = value;
    }
    if(value_path == "nhrpServerStatFwPurgeReq")
    {
        nhrpserverstatfwpurgereq = value;
    }
    if(value_path == "nhrpServerStatFwRegisterReply")
    {
        nhrpserverstatfwregisterreply = value;
    }
    if(value_path == "nhrpServerStatFwRegisterReq")
    {
        nhrpserverstatfwregisterreq = value;
    }
    if(value_path == "nhrpServerStatFwResolveReply")
    {
        nhrpserverstatfwresolvereply = value;
    }
    if(value_path == "nhrpServerStatFwResolveReq")
    {
        nhrpserverstatfwresolvereq = value;
    }
    if(value_path == "nhrpServerStatRxErrAuthenticationFailure")
    {
        nhrpserverstatrxerrauthenticationfailure = value;
    }
    if(value_path == "nhrpServerStatRxErrHopCountExceeded")
    {
        nhrpserverstatrxerrhopcountexceeded = value;
    }
    if(value_path == "nhrpServerStatRxErrInvalidExtension")
    {
        nhrpserverstatrxerrinvalidextension = value;
    }
    if(value_path == "nhrpServerStatRxErrInvalidResReplyReceived")
    {
        nhrpserverstatrxerrinvalidresreplyreceived = value;
    }
    if(value_path == "nhrpServerStatRxErrLoopDetected")
    {
        nhrpserverstatrxerrloopdetected = value;
    }
    if(value_path == "nhrpServerStatRxErrProtoAddrUnreachable")
    {
        nhrpserverstatrxerrprotoaddrunreachable = value;
    }
    if(value_path == "nhrpServerStatRxErrProtoError")
    {
        nhrpserverstatrxerrprotoerror = value;
    }
    if(value_path == "nhrpServerStatRxErrSduSizeExceeded")
    {
        nhrpserverstatrxerrsdusizeexceeded = value;
    }
    if(value_path == "nhrpServerStatRxErrUnrecognizedExtension")
    {
        nhrpserverstatrxerrunrecognizedextension = value;
    }
    if(value_path == "nhrpServerStatRxPurgeReply")
    {
        nhrpserverstatrxpurgereply = value;
    }
    if(value_path == "nhrpServerStatRxPurgeReq")
    {
        nhrpserverstatrxpurgereq = value;
    }
    if(value_path == "nhrpServerStatRxRegisterReq")
    {
        nhrpserverstatrxregisterreq = value;
    }
    if(value_path == "nhrpServerStatRxResolveReq")
    {
        nhrpserverstatrxresolvereq = value;
    }
    if(value_path == "nhrpServerStatTxErrAuthenticationFailure")
    {
        nhrpserverstattxerrauthenticationfailure = value;
    }
    if(value_path == "nhrpServerStatTxErrHopCountExceeded")
    {
        nhrpserverstattxerrhopcountexceeded = value;
    }
    if(value_path == "nhrpServerStatTxErrInvalidExtension")
    {
        nhrpserverstattxerrinvalidextension = value;
    }
    if(value_path == "nhrpServerStatTxErrLoopDetected")
    {
        nhrpserverstattxerrloopdetected = value;
    }
    if(value_path == "nhrpServerStatTxErrProtoAddrUnreachable")
    {
        nhrpserverstattxerrprotoaddrunreachable = value;
    }
    if(value_path == "nhrpServerStatTxErrProtoError")
    {
        nhrpserverstattxerrprotoerror = value;
    }
    if(value_path == "nhrpServerStatTxErrSduSizeExceeded")
    {
        nhrpserverstattxerrsdusizeexceeded = value;
    }
    if(value_path == "nhrpServerStatTxErrUnrecognizedExtension")
    {
        nhrpserverstattxerrunrecognizedextension = value;
    }
    if(value_path == "nhrpServerStatTxPurgeReply")
    {
        nhrpserverstattxpurgereply = value;
    }
    if(value_path == "nhrpServerStatTxPurgeReq")
    {
        nhrpserverstattxpurgereq = value;
    }
    if(value_path == "nhrpServerStatTxRegisterAck")
    {
        nhrpserverstattxregisterack = value;
    }
    if(value_path == "nhrpServerStatTxRegisterNakAlreadyReg")
    {
        nhrpserverstattxregisternakalreadyreg = value;
    }
    if(value_path == "nhrpServerStatTxRegisterNakInsufResources")
    {
        nhrpserverstattxregisternakinsufresources = value;
    }
    if(value_path == "nhrpServerStatTxRegisterNakProhibited")
    {
        nhrpserverstattxregisternakprohibited = value;
    }
    if(value_path == "nhrpServerStatTxResolveReplyAck")
    {
        nhrpserverstattxresolvereplyack = value;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakInsufResources")
    {
        nhrpserverstattxresolvereplynakinsufresources = value;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakNoBinding")
    {
        nhrpserverstattxresolvereplynaknobinding = value;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakNotUnique")
    {
        nhrpserverstattxresolvereplynaknotunique = value;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakProhibited")
    {
        nhrpserverstattxresolvereplynakprohibited = value;
    }
}

const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachetypeEnum::other {1, "other"};
const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachetypeEnum::register {2, "register"};
const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachetypeEnum::resolveAuthoritative {3, "resolveAuthoritative"};
const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachetypeEnum::resoveNonauthoritative {4, "resoveNonauthoritative"};
const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachetypeEnum::transit {5, "transit"};
const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachetypeEnum::administrativelyAdded {6, "administrativelyAdded"};
const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachetypeEnum::atmarp {7, "atmarp"};
const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachetypeEnum::scsp {8, "scsp"};

const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachestateEnum::incomplete {1, "incomplete"};
const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachestateEnum::ackReply {2, "ackReply"};
const Enum::YLeaf NhrpMib::Nhrpcachetable::Nhrpcacheentry::NhrpcachestateEnum::nakReply {3, "nakReply"};

const Enum::YLeaf NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::NhrpclientreguniquenessEnum::requestUnique {1, "requestUnique"};
const Enum::YLeaf NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::NhrpclientreguniquenessEnum::requestNotUnique {2, "requestNotUnique"};

const Enum::YLeaf NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::NhrpclientregstateEnum::other {1, "other"};
const Enum::YLeaf NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::NhrpclientregstateEnum::registering {2, "registering"};
const Enum::YLeaf NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::NhrpclientregstateEnum::ackRegisterReply {3, "ackRegisterReply"};
const Enum::YLeaf NhrpMib::Nhrpclientregistrationtable::Nhrpclientregistrationentry::NhrpclientregstateEnum::nakRegisterReply {4, "nakRegisterReply"};


}
}

