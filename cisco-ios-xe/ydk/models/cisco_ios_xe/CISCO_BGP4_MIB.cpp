
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_BGP4_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_BGP4_MIB {

CISCOBGP4MIB::CISCOBGP4MIB()
    :
    cbgpglobal(std::make_shared<CISCOBGP4MIB::Cbgpglobal>())
	,cbgppeer2addrfamilyprefixtable(std::make_shared<CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable>())
	,cbgppeer2addrfamilytable(std::make_shared<CISCOBGP4MIB::Cbgppeer2Addrfamilytable>())
	,cbgppeer2capstable(std::make_shared<CISCOBGP4MIB::Cbgppeer2Capstable>())
	,cbgppeer2table(std::make_shared<CISCOBGP4MIB::Cbgppeer2Table>())
	,cbgppeeraddrfamilyprefixtable(std::make_shared<CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable>())
	,cbgppeeraddrfamilytable(std::make_shared<CISCOBGP4MIB::Cbgppeeraddrfamilytable>())
	,cbgppeercapstable(std::make_shared<CISCOBGP4MIB::Cbgppeercapstable>())
	,cbgproutetable(std::make_shared<CISCOBGP4MIB::Cbgproutetable>())
{
    cbgpglobal->parent = this;
    cbgppeer2addrfamilyprefixtable->parent = this;
    cbgppeer2addrfamilytable->parent = this;
    cbgppeer2capstable->parent = this;
    cbgppeer2table->parent = this;
    cbgppeeraddrfamilyprefixtable->parent = this;
    cbgppeeraddrfamilytable->parent = this;
    cbgppeercapstable->parent = this;
    cbgproutetable->parent = this;

    yang_name = "CISCO-BGP4-MIB"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOBGP4MIB::~CISCOBGP4MIB()
{
}

bool CISCOBGP4MIB::has_data() const
{
    return (cbgpglobal !=  nullptr && cbgpglobal->has_data())
	|| (cbgppeer2addrfamilyprefixtable !=  nullptr && cbgppeer2addrfamilyprefixtable->has_data())
	|| (cbgppeer2addrfamilytable !=  nullptr && cbgppeer2addrfamilytable->has_data())
	|| (cbgppeer2capstable !=  nullptr && cbgppeer2capstable->has_data())
	|| (cbgppeer2table !=  nullptr && cbgppeer2table->has_data())
	|| (cbgppeeraddrfamilyprefixtable !=  nullptr && cbgppeeraddrfamilyprefixtable->has_data())
	|| (cbgppeeraddrfamilytable !=  nullptr && cbgppeeraddrfamilytable->has_data())
	|| (cbgppeercapstable !=  nullptr && cbgppeercapstable->has_data())
	|| (cbgproutetable !=  nullptr && cbgproutetable->has_data());
}

bool CISCOBGP4MIB::has_operation() const
{
    return is_set(yfilter)
	|| (cbgpglobal !=  nullptr && cbgpglobal->has_operation())
	|| (cbgppeer2addrfamilyprefixtable !=  nullptr && cbgppeer2addrfamilyprefixtable->has_operation())
	|| (cbgppeer2addrfamilytable !=  nullptr && cbgppeer2addrfamilytable->has_operation())
	|| (cbgppeer2capstable !=  nullptr && cbgppeer2capstable->has_operation())
	|| (cbgppeer2table !=  nullptr && cbgppeer2table->has_operation())
	|| (cbgppeeraddrfamilyprefixtable !=  nullptr && cbgppeeraddrfamilyprefixtable->has_operation())
	|| (cbgppeeraddrfamilytable !=  nullptr && cbgppeeraddrfamilytable->has_operation())
	|| (cbgppeercapstable !=  nullptr && cbgppeercapstable->has_operation())
	|| (cbgproutetable !=  nullptr && cbgproutetable->has_operation());
}

std::string CISCOBGP4MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpGlobal")
    {
        if(cbgpglobal == nullptr)
        {
            cbgpglobal = std::make_shared<CISCOBGP4MIB::Cbgpglobal>();
        }
        return cbgpglobal;
    }

    if(child_yang_name == "cbgpPeer2AddrFamilyPrefixTable")
    {
        if(cbgppeer2addrfamilyprefixtable == nullptr)
        {
            cbgppeer2addrfamilyprefixtable = std::make_shared<CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable>();
        }
        return cbgppeer2addrfamilyprefixtable;
    }

    if(child_yang_name == "cbgpPeer2AddrFamilyTable")
    {
        if(cbgppeer2addrfamilytable == nullptr)
        {
            cbgppeer2addrfamilytable = std::make_shared<CISCOBGP4MIB::Cbgppeer2Addrfamilytable>();
        }
        return cbgppeer2addrfamilytable;
    }

    if(child_yang_name == "cbgpPeer2CapsTable")
    {
        if(cbgppeer2capstable == nullptr)
        {
            cbgppeer2capstable = std::make_shared<CISCOBGP4MIB::Cbgppeer2Capstable>();
        }
        return cbgppeer2capstable;
    }

    if(child_yang_name == "cbgpPeer2Table")
    {
        if(cbgppeer2table == nullptr)
        {
            cbgppeer2table = std::make_shared<CISCOBGP4MIB::Cbgppeer2Table>();
        }
        return cbgppeer2table;
    }

    if(child_yang_name == "cbgpPeerAddrFamilyPrefixTable")
    {
        if(cbgppeeraddrfamilyprefixtable == nullptr)
        {
            cbgppeeraddrfamilyprefixtable = std::make_shared<CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable>();
        }
        return cbgppeeraddrfamilyprefixtable;
    }

    if(child_yang_name == "cbgpPeerAddrFamilyTable")
    {
        if(cbgppeeraddrfamilytable == nullptr)
        {
            cbgppeeraddrfamilytable = std::make_shared<CISCOBGP4MIB::Cbgppeeraddrfamilytable>();
        }
        return cbgppeeraddrfamilytable;
    }

    if(child_yang_name == "cbgpPeerCapsTable")
    {
        if(cbgppeercapstable == nullptr)
        {
            cbgppeercapstable = std::make_shared<CISCOBGP4MIB::Cbgppeercapstable>();
        }
        return cbgppeercapstable;
    }

    if(child_yang_name == "cbgpRouteTable")
    {
        if(cbgproutetable == nullptr)
        {
            cbgproutetable = std::make_shared<CISCOBGP4MIB::Cbgproutetable>();
        }
        return cbgproutetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbgpglobal != nullptr)
    {
        children["cbgpGlobal"] = cbgpglobal;
    }

    if(cbgppeer2addrfamilyprefixtable != nullptr)
    {
        children["cbgpPeer2AddrFamilyPrefixTable"] = cbgppeer2addrfamilyprefixtable;
    }

    if(cbgppeer2addrfamilytable != nullptr)
    {
        children["cbgpPeer2AddrFamilyTable"] = cbgppeer2addrfamilytable;
    }

    if(cbgppeer2capstable != nullptr)
    {
        children["cbgpPeer2CapsTable"] = cbgppeer2capstable;
    }

    if(cbgppeer2table != nullptr)
    {
        children["cbgpPeer2Table"] = cbgppeer2table;
    }

    if(cbgppeeraddrfamilyprefixtable != nullptr)
    {
        children["cbgpPeerAddrFamilyPrefixTable"] = cbgppeeraddrfamilyprefixtable;
    }

    if(cbgppeeraddrfamilytable != nullptr)
    {
        children["cbgpPeerAddrFamilyTable"] = cbgppeeraddrfamilytable;
    }

    if(cbgppeercapstable != nullptr)
    {
        children["cbgpPeerCapsTable"] = cbgppeercapstable;
    }

    if(cbgproutetable != nullptr)
    {
        children["cbgpRouteTable"] = cbgproutetable;
    }

    return children;
}

void CISCOBGP4MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOBGP4MIB::clone_ptr() const
{
    return std::make_shared<CISCOBGP4MIB>();
}

std::string CISCOBGP4MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOBGP4MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOBGP4MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOBGP4MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOBGP4MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpGlobal" || name == "cbgpPeer2AddrFamilyPrefixTable" || name == "cbgpPeer2AddrFamilyTable" || name == "cbgpPeer2CapsTable" || name == "cbgpPeer2Table" || name == "cbgpPeerAddrFamilyPrefixTable" || name == "cbgpPeerAddrFamilyTable" || name == "cbgpPeerCapsTable" || name == "cbgpRouteTable")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgpglobal::Cbgpglobal()
    :
    cbgplocalas{YType::uint32, "cbgpLocalAs"},
    cbgpnotifsenable{YType::bits, "cbgpNotifsEnable"}
{

    yang_name = "cbgpGlobal"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgpglobal::~Cbgpglobal()
{
}

bool CISCOBGP4MIB::Cbgpglobal::has_data() const
{
    return cbgplocalas.is_set
	|| cbgpnotifsenable.is_set;
}

bool CISCOBGP4MIB::Cbgpglobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgplocalas.yfilter)
	|| ydk::is_set(cbgpnotifsenable.yfilter);
}

std::string CISCOBGP4MIB::Cbgpglobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgpglobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpGlobal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgpglobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgplocalas.is_set || is_set(cbgplocalas.yfilter)) leaf_name_data.push_back(cbgplocalas.get_name_leafdata());
    if (cbgpnotifsenable.is_set || is_set(cbgpnotifsenable.yfilter)) leaf_name_data.push_back(cbgpnotifsenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgpglobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgpglobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGP4MIB::Cbgpglobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpLocalAs")
    {
        cbgplocalas = value;
        cbgplocalas.value_namespace = name_space;
        cbgplocalas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpNotifsEnable")
    {
        cbgpnotifsenable[value] = true;
    }
}

void CISCOBGP4MIB::Cbgpglobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpLocalAs")
    {
        cbgplocalas.yfilter = yfilter;
    }
    if(value_path == "cbgpNotifsEnable")
    {
        cbgpnotifsenable.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::Cbgpglobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpLocalAs" || name == "cbgpNotifsEnable")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixtable()
{

    yang_name = "cbgpPeer2AddrFamilyPrefixTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::~Cbgppeer2Addrfamilyprefixtable()
{
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::has_data() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyprefixentry.size(); index++)
    {
        if(cbgppeer2addrfamilyprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyprefixentry.size(); index++)
    {
        if(cbgppeer2addrfamilyprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyPrefixTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2AddrFamilyPrefixEntry")
    {
        for(auto const & c : cbgppeer2addrfamilyprefixentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry>();
        c->parent = this;
        cbgppeer2addrfamilyprefixentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeer2addrfamilyprefixentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2AddrFamilyPrefixEntry")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::Cbgppeer2Addrfamilyprefixentry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2addrfamilyafi{YType::enumeration, "cbgpPeer2AddrFamilyAfi"},
    cbgppeer2addrfamilysafi{YType::enumeration, "cbgpPeer2AddrFamilySafi"},
    cbgppeer2acceptedprefixes{YType::uint32, "cbgpPeer2AcceptedPrefixes"},
    cbgppeer2advertisedprefixes{YType::uint32, "cbgpPeer2AdvertisedPrefixes"},
    cbgppeer2deniedprefixes{YType::uint32, "cbgpPeer2DeniedPrefixes"},
    cbgppeer2prefixadminlimit{YType::uint32, "cbgpPeer2PrefixAdminLimit"},
    cbgppeer2prefixclearthreshold{YType::uint32, "cbgpPeer2PrefixClearThreshold"},
    cbgppeer2prefixthreshold{YType::uint32, "cbgpPeer2PrefixThreshold"},
    cbgppeer2suppressedprefixes{YType::uint32, "cbgpPeer2SuppressedPrefixes"},
    cbgppeer2withdrawnprefixes{YType::uint32, "cbgpPeer2WithdrawnPrefixes"}
{

    yang_name = "cbgpPeer2AddrFamilyPrefixEntry"; yang_parent_name = "cbgpPeer2AddrFamilyPrefixTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::~Cbgppeer2Addrfamilyprefixentry()
{
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::has_data() const
{
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2addrfamilyafi.is_set
	|| cbgppeer2addrfamilysafi.is_set
	|| cbgppeer2acceptedprefixes.is_set
	|| cbgppeer2advertisedprefixes.is_set
	|| cbgppeer2deniedprefixes.is_set
	|| cbgppeer2prefixadminlimit.is_set
	|| cbgppeer2prefixclearthreshold.is_set
	|| cbgppeer2prefixthreshold.is_set
	|| cbgppeer2suppressedprefixes.is_set
	|| cbgppeer2withdrawnprefixes.is_set;
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgppeer2type.yfilter)
	|| ydk::is_set(cbgppeer2remoteaddr.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilyafi.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilysafi.yfilter)
	|| ydk::is_set(cbgppeer2acceptedprefixes.yfilter)
	|| ydk::is_set(cbgppeer2advertisedprefixes.yfilter)
	|| ydk::is_set(cbgppeer2deniedprefixes.yfilter)
	|| ydk::is_set(cbgppeer2prefixadminlimit.yfilter)
	|| ydk::is_set(cbgppeer2prefixclearthreshold.yfilter)
	|| ydk::is_set(cbgppeer2prefixthreshold.yfilter)
	|| ydk::is_set(cbgppeer2suppressedprefixes.yfilter)
	|| ydk::is_set(cbgppeer2withdrawnprefixes.yfilter);
}

std::string CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2AddrFamilyPrefixTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyPrefixEntry" <<"[cbgpPeer2Type='" <<cbgppeer2type <<"']" <<"[cbgpPeer2RemoteAddr='" <<cbgppeer2remoteaddr <<"']" <<"[cbgpPeer2AddrFamilyAfi='" <<cbgppeer2addrfamilyafi <<"']" <<"[cbgpPeer2AddrFamilySafi='" <<cbgppeer2addrfamilysafi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.yfilter)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.yfilter)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2addrfamilyafi.is_set || is_set(cbgppeer2addrfamilyafi.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilyafi.get_name_leafdata());
    if (cbgppeer2addrfamilysafi.is_set || is_set(cbgppeer2addrfamilysafi.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilysafi.get_name_leafdata());
    if (cbgppeer2acceptedprefixes.is_set || is_set(cbgppeer2acceptedprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2acceptedprefixes.get_name_leafdata());
    if (cbgppeer2advertisedprefixes.is_set || is_set(cbgppeer2advertisedprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2advertisedprefixes.get_name_leafdata());
    if (cbgppeer2deniedprefixes.is_set || is_set(cbgppeer2deniedprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2deniedprefixes.get_name_leafdata());
    if (cbgppeer2prefixadminlimit.is_set || is_set(cbgppeer2prefixadminlimit.yfilter)) leaf_name_data.push_back(cbgppeer2prefixadminlimit.get_name_leafdata());
    if (cbgppeer2prefixclearthreshold.is_set || is_set(cbgppeer2prefixclearthreshold.yfilter)) leaf_name_data.push_back(cbgppeer2prefixclearthreshold.get_name_leafdata());
    if (cbgppeer2prefixthreshold.is_set || is_set(cbgppeer2prefixthreshold.yfilter)) leaf_name_data.push_back(cbgppeer2prefixthreshold.get_name_leafdata());
    if (cbgppeer2suppressedprefixes.is_set || is_set(cbgppeer2suppressedprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2suppressedprefixes.get_name_leafdata());
    if (cbgppeer2withdrawnprefixes.is_set || is_set(cbgppeer2withdrawnprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2withdrawnprefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
        cbgppeer2type.value_namespace = name_space;
        cbgppeer2type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
        cbgppeer2remoteaddr.value_namespace = name_space;
        cbgppeer2remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi = value;
        cbgppeer2addrfamilyafi.value_namespace = name_space;
        cbgppeer2addrfamilyafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi = value;
        cbgppeer2addrfamilysafi.value_namespace = name_space;
        cbgppeer2addrfamilysafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AcceptedPrefixes")
    {
        cbgppeer2acceptedprefixes = value;
        cbgppeer2acceptedprefixes.value_namespace = name_space;
        cbgppeer2acceptedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AdvertisedPrefixes")
    {
        cbgppeer2advertisedprefixes = value;
        cbgppeer2advertisedprefixes.value_namespace = name_space;
        cbgppeer2advertisedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2DeniedPrefixes")
    {
        cbgppeer2deniedprefixes = value;
        cbgppeer2deniedprefixes.value_namespace = name_space;
        cbgppeer2deniedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2PrefixAdminLimit")
    {
        cbgppeer2prefixadminlimit = value;
        cbgppeer2prefixadminlimit.value_namespace = name_space;
        cbgppeer2prefixadminlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2PrefixClearThreshold")
    {
        cbgppeer2prefixclearthreshold = value;
        cbgppeer2prefixclearthreshold.value_namespace = name_space;
        cbgppeer2prefixclearthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2PrefixThreshold")
    {
        cbgppeer2prefixthreshold = value;
        cbgppeer2prefixthreshold.value_namespace = name_space;
        cbgppeer2prefixthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2SuppressedPrefixes")
    {
        cbgppeer2suppressedprefixes = value;
        cbgppeer2suppressedprefixes.value_namespace = name_space;
        cbgppeer2suppressedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2WithdrawnPrefixes")
    {
        cbgppeer2withdrawnprefixes = value;
        cbgppeer2withdrawnprefixes.value_namespace = name_space;
        cbgppeer2withdrawnprefixes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AcceptedPrefixes")
    {
        cbgppeer2acceptedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AdvertisedPrefixes")
    {
        cbgppeer2advertisedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2DeniedPrefixes")
    {
        cbgppeer2deniedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2PrefixAdminLimit")
    {
        cbgppeer2prefixadminlimit.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2PrefixClearThreshold")
    {
        cbgppeer2prefixclearthreshold.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2PrefixThreshold")
    {
        cbgppeer2prefixthreshold.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2SuppressedPrefixes")
    {
        cbgppeer2suppressedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2WithdrawnPrefixes")
    {
        cbgppeer2withdrawnprefixes.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Type" || name == "cbgpPeer2RemoteAddr" || name == "cbgpPeer2AddrFamilyAfi" || name == "cbgpPeer2AddrFamilySafi" || name == "cbgpPeer2AcceptedPrefixes" || name == "cbgpPeer2AdvertisedPrefixes" || name == "cbgpPeer2DeniedPrefixes" || name == "cbgpPeer2PrefixAdminLimit" || name == "cbgpPeer2PrefixClearThreshold" || name == "cbgpPeer2PrefixThreshold" || name == "cbgpPeer2SuppressedPrefixes" || name == "cbgpPeer2WithdrawnPrefixes")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilytable()
{

    yang_name = "cbgpPeer2AddrFamilyTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeer2Addrfamilytable::~Cbgppeer2Addrfamilytable()
{
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilytable::has_data() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyentry.size(); index++)
    {
        if(cbgppeer2addrfamilyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilytable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyentry.size(); index++)
    {
        if(cbgppeer2addrfamilyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::Cbgppeer2Addrfamilytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeer2Addrfamilytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeer2Addrfamilytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeer2Addrfamilytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2AddrFamilyEntry")
    {
        for(auto const & c : cbgppeer2addrfamilyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry>();
        c->parent = this;
        cbgppeer2addrfamilyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeer2Addrfamilytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeer2addrfamilyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOBGP4MIB::Cbgppeer2Addrfamilytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::Cbgppeer2Addrfamilytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2AddrFamilyEntry")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::Cbgppeer2Addrfamilyentry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2addrfamilyafi{YType::enumeration, "cbgpPeer2AddrFamilyAfi"},
    cbgppeer2addrfamilysafi{YType::enumeration, "cbgpPeer2AddrFamilySafi"},
    cbgppeer2addrfamilyname{YType::str, "cbgpPeer2AddrFamilyName"}
{

    yang_name = "cbgpPeer2AddrFamilyEntry"; yang_parent_name = "cbgpPeer2AddrFamilyTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::~Cbgppeer2Addrfamilyentry()
{
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::has_data() const
{
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2addrfamilyafi.is_set
	|| cbgppeer2addrfamilysafi.is_set
	|| cbgppeer2addrfamilyname.is_set;
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgppeer2type.yfilter)
	|| ydk::is_set(cbgppeer2remoteaddr.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilyafi.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilysafi.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilyname.yfilter);
}

std::string CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2AddrFamilyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyEntry" <<"[cbgpPeer2Type='" <<cbgppeer2type <<"']" <<"[cbgpPeer2RemoteAddr='" <<cbgppeer2remoteaddr <<"']" <<"[cbgpPeer2AddrFamilyAfi='" <<cbgppeer2addrfamilyafi <<"']" <<"[cbgpPeer2AddrFamilySafi='" <<cbgppeer2addrfamilysafi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.yfilter)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.yfilter)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2addrfamilyafi.is_set || is_set(cbgppeer2addrfamilyafi.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilyafi.get_name_leafdata());
    if (cbgppeer2addrfamilysafi.is_set || is_set(cbgppeer2addrfamilysafi.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilysafi.get_name_leafdata());
    if (cbgppeer2addrfamilyname.is_set || is_set(cbgppeer2addrfamilyname.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilyname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
        cbgppeer2type.value_namespace = name_space;
        cbgppeer2type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
        cbgppeer2remoteaddr.value_namespace = name_space;
        cbgppeer2remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi = value;
        cbgppeer2addrfamilyafi.value_namespace = name_space;
        cbgppeer2addrfamilyafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi = value;
        cbgppeer2addrfamilysafi.value_namespace = name_space;
        cbgppeer2addrfamilysafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilyName")
    {
        cbgppeer2addrfamilyname = value;
        cbgppeer2addrfamilyname.value_namespace = name_space;
        cbgppeer2addrfamilyname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilyName")
    {
        cbgppeer2addrfamilyname.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Type" || name == "cbgpPeer2RemoteAddr" || name == "cbgpPeer2AddrFamilyAfi" || name == "cbgpPeer2AddrFamilySafi" || name == "cbgpPeer2AddrFamilyName")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capstable()
{

    yang_name = "cbgpPeer2CapsTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeer2Capstable::~Cbgppeer2Capstable()
{
}

bool CISCOBGP4MIB::Cbgppeer2Capstable::has_data() const
{
    for (std::size_t index=0; index<cbgppeer2capsentry.size(); index++)
    {
        if(cbgppeer2capsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::Cbgppeer2Capstable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2capsentry.size(); index++)
    {
        if(cbgppeer2capsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::Cbgppeer2Capstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeer2Capstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2CapsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeer2Capstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeer2Capstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2CapsEntry")
    {
        for(auto const & c : cbgppeer2capsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry>();
        c->parent = this;
        cbgppeer2capsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeer2Capstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeer2capsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOBGP4MIB::Cbgppeer2Capstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::Cbgppeer2Capstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::Cbgppeer2Capstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2CapsEntry")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capsentry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2capcode{YType::enumeration, "cbgpPeer2CapCode"},
    cbgppeer2capindex{YType::uint32, "cbgpPeer2CapIndex"},
    cbgppeer2capvalue{YType::str, "cbgpPeer2CapValue"}
{

    yang_name = "cbgpPeer2CapsEntry"; yang_parent_name = "cbgpPeer2CapsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::~Cbgppeer2Capsentry()
{
}

bool CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::has_data() const
{
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2capcode.is_set
	|| cbgppeer2capindex.is_set
	|| cbgppeer2capvalue.is_set;
}

bool CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgppeer2type.yfilter)
	|| ydk::is_set(cbgppeer2remoteaddr.yfilter)
	|| ydk::is_set(cbgppeer2capcode.yfilter)
	|| ydk::is_set(cbgppeer2capindex.yfilter)
	|| ydk::is_set(cbgppeer2capvalue.yfilter);
}

std::string CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2CapsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2CapsEntry" <<"[cbgpPeer2Type='" <<cbgppeer2type <<"']" <<"[cbgpPeer2RemoteAddr='" <<cbgppeer2remoteaddr <<"']" <<"[cbgpPeer2CapCode='" <<cbgppeer2capcode <<"']" <<"[cbgpPeer2CapIndex='" <<cbgppeer2capindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.yfilter)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.yfilter)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2capcode.is_set || is_set(cbgppeer2capcode.yfilter)) leaf_name_data.push_back(cbgppeer2capcode.get_name_leafdata());
    if (cbgppeer2capindex.is_set || is_set(cbgppeer2capindex.yfilter)) leaf_name_data.push_back(cbgppeer2capindex.get_name_leafdata());
    if (cbgppeer2capvalue.is_set || is_set(cbgppeer2capvalue.yfilter)) leaf_name_data.push_back(cbgppeer2capvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
        cbgppeer2type.value_namespace = name_space;
        cbgppeer2type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
        cbgppeer2remoteaddr.value_namespace = name_space;
        cbgppeer2remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2CapCode")
    {
        cbgppeer2capcode = value;
        cbgppeer2capcode.value_namespace = name_space;
        cbgppeer2capcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2CapIndex")
    {
        cbgppeer2capindex = value;
        cbgppeer2capindex.value_namespace = name_space;
        cbgppeer2capindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2CapValue")
    {
        cbgppeer2capvalue = value;
        cbgppeer2capvalue.value_namespace = name_space;
        cbgppeer2capvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2CapCode")
    {
        cbgppeer2capcode.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2CapIndex")
    {
        cbgppeer2capindex.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2CapValue")
    {
        cbgppeer2capvalue.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Type" || name == "cbgpPeer2RemoteAddr" || name == "cbgpPeer2CapCode" || name == "cbgpPeer2CapIndex" || name == "cbgpPeer2CapValue")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Table()
{

    yang_name = "cbgpPeer2Table"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeer2Table::~Cbgppeer2Table()
{
}

bool CISCOBGP4MIB::Cbgppeer2Table::has_data() const
{
    for (std::size_t index=0; index<cbgppeer2entry.size(); index++)
    {
        if(cbgppeer2entry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::Cbgppeer2Table::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2entry.size(); index++)
    {
        if(cbgppeer2entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::Cbgppeer2Table::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeer2Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2Table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeer2Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeer2Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2Entry")
    {
        for(auto const & c : cbgppeer2entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry>();
        c->parent = this;
        cbgppeer2entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeer2Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeer2entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOBGP4MIB::Cbgppeer2Table::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::Cbgppeer2Table::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::Cbgppeer2Table::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Entry")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Entry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2adminstatus{YType::enumeration, "cbgpPeer2AdminStatus"},
    cbgppeer2connectretryinterval{YType::int32, "cbgpPeer2ConnectRetryInterval"},
    cbgppeer2fsmestablishedtime{YType::uint32, "cbgpPeer2FsmEstablishedTime"},
    cbgppeer2fsmestablishedtransitions{YType::uint32, "cbgpPeer2FsmEstablishedTransitions"},
    cbgppeer2holdtime{YType::int32, "cbgpPeer2HoldTime"},
    cbgppeer2holdtimeconfigured{YType::int32, "cbgpPeer2HoldTimeConfigured"},
    cbgppeer2intotalmessages{YType::uint32, "cbgpPeer2InTotalMessages"},
    cbgppeer2inupdateelapsedtime{YType::uint32, "cbgpPeer2InUpdateElapsedTime"},
    cbgppeer2inupdates{YType::uint32, "cbgpPeer2InUpdates"},
    cbgppeer2keepalive{YType::int32, "cbgpPeer2KeepAlive"},
    cbgppeer2keepaliveconfigured{YType::int32, "cbgpPeer2KeepAliveConfigured"},
    cbgppeer2lasterror{YType::str, "cbgpPeer2LastError"},
    cbgppeer2lasterrortxt{YType::str, "cbgpPeer2LastErrorTxt"},
    cbgppeer2localaddr{YType::str, "cbgpPeer2LocalAddr"},
    cbgppeer2localas{YType::uint32, "cbgpPeer2LocalAs"},
    cbgppeer2localidentifier{YType::str, "cbgpPeer2LocalIdentifier"},
    cbgppeer2localport{YType::uint16, "cbgpPeer2LocalPort"},
    cbgppeer2minasoriginationinterval{YType::int32, "cbgpPeer2MinASOriginationInterval"},
    cbgppeer2minrouteadvertisementinterval{YType::int32, "cbgpPeer2MinRouteAdvertisementInterval"},
    cbgppeer2negotiatedversion{YType::int32, "cbgpPeer2NegotiatedVersion"},
    cbgppeer2outtotalmessages{YType::uint32, "cbgpPeer2OutTotalMessages"},
    cbgppeer2outupdates{YType::uint32, "cbgpPeer2OutUpdates"},
    cbgppeer2prevstate{YType::enumeration, "cbgpPeer2PrevState"},
    cbgppeer2remoteas{YType::uint32, "cbgpPeer2RemoteAs"},
    cbgppeer2remoteidentifier{YType::str, "cbgpPeer2RemoteIdentifier"},
    cbgppeer2remoteport{YType::uint16, "cbgpPeer2RemotePort"},
    cbgppeer2state{YType::enumeration, "cbgpPeer2State"}
{

    yang_name = "cbgpPeer2Entry"; yang_parent_name = "cbgpPeer2Table"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::~Cbgppeer2Entry()
{
}

bool CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::has_data() const
{
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2adminstatus.is_set
	|| cbgppeer2connectretryinterval.is_set
	|| cbgppeer2fsmestablishedtime.is_set
	|| cbgppeer2fsmestablishedtransitions.is_set
	|| cbgppeer2holdtime.is_set
	|| cbgppeer2holdtimeconfigured.is_set
	|| cbgppeer2intotalmessages.is_set
	|| cbgppeer2inupdateelapsedtime.is_set
	|| cbgppeer2inupdates.is_set
	|| cbgppeer2keepalive.is_set
	|| cbgppeer2keepaliveconfigured.is_set
	|| cbgppeer2lasterror.is_set
	|| cbgppeer2lasterrortxt.is_set
	|| cbgppeer2localaddr.is_set
	|| cbgppeer2localas.is_set
	|| cbgppeer2localidentifier.is_set
	|| cbgppeer2localport.is_set
	|| cbgppeer2minasoriginationinterval.is_set
	|| cbgppeer2minrouteadvertisementinterval.is_set
	|| cbgppeer2negotiatedversion.is_set
	|| cbgppeer2outtotalmessages.is_set
	|| cbgppeer2outupdates.is_set
	|| cbgppeer2prevstate.is_set
	|| cbgppeer2remoteas.is_set
	|| cbgppeer2remoteidentifier.is_set
	|| cbgppeer2remoteport.is_set
	|| cbgppeer2state.is_set;
}

bool CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgppeer2type.yfilter)
	|| ydk::is_set(cbgppeer2remoteaddr.yfilter)
	|| ydk::is_set(cbgppeer2adminstatus.yfilter)
	|| ydk::is_set(cbgppeer2connectretryinterval.yfilter)
	|| ydk::is_set(cbgppeer2fsmestablishedtime.yfilter)
	|| ydk::is_set(cbgppeer2fsmestablishedtransitions.yfilter)
	|| ydk::is_set(cbgppeer2holdtime.yfilter)
	|| ydk::is_set(cbgppeer2holdtimeconfigured.yfilter)
	|| ydk::is_set(cbgppeer2intotalmessages.yfilter)
	|| ydk::is_set(cbgppeer2inupdateelapsedtime.yfilter)
	|| ydk::is_set(cbgppeer2inupdates.yfilter)
	|| ydk::is_set(cbgppeer2keepalive.yfilter)
	|| ydk::is_set(cbgppeer2keepaliveconfigured.yfilter)
	|| ydk::is_set(cbgppeer2lasterror.yfilter)
	|| ydk::is_set(cbgppeer2lasterrortxt.yfilter)
	|| ydk::is_set(cbgppeer2localaddr.yfilter)
	|| ydk::is_set(cbgppeer2localas.yfilter)
	|| ydk::is_set(cbgppeer2localidentifier.yfilter)
	|| ydk::is_set(cbgppeer2localport.yfilter)
	|| ydk::is_set(cbgppeer2minasoriginationinterval.yfilter)
	|| ydk::is_set(cbgppeer2minrouteadvertisementinterval.yfilter)
	|| ydk::is_set(cbgppeer2negotiatedversion.yfilter)
	|| ydk::is_set(cbgppeer2outtotalmessages.yfilter)
	|| ydk::is_set(cbgppeer2outupdates.yfilter)
	|| ydk::is_set(cbgppeer2prevstate.yfilter)
	|| ydk::is_set(cbgppeer2remoteas.yfilter)
	|| ydk::is_set(cbgppeer2remoteidentifier.yfilter)
	|| ydk::is_set(cbgppeer2remoteport.yfilter)
	|| ydk::is_set(cbgppeer2state.yfilter);
}

std::string CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2Table/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2Entry" <<"[cbgpPeer2Type='" <<cbgppeer2type <<"']" <<"[cbgpPeer2RemoteAddr='" <<cbgppeer2remoteaddr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.yfilter)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.yfilter)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2adminstatus.is_set || is_set(cbgppeer2adminstatus.yfilter)) leaf_name_data.push_back(cbgppeer2adminstatus.get_name_leafdata());
    if (cbgppeer2connectretryinterval.is_set || is_set(cbgppeer2connectretryinterval.yfilter)) leaf_name_data.push_back(cbgppeer2connectretryinterval.get_name_leafdata());
    if (cbgppeer2fsmestablishedtime.is_set || is_set(cbgppeer2fsmestablishedtime.yfilter)) leaf_name_data.push_back(cbgppeer2fsmestablishedtime.get_name_leafdata());
    if (cbgppeer2fsmestablishedtransitions.is_set || is_set(cbgppeer2fsmestablishedtransitions.yfilter)) leaf_name_data.push_back(cbgppeer2fsmestablishedtransitions.get_name_leafdata());
    if (cbgppeer2holdtime.is_set || is_set(cbgppeer2holdtime.yfilter)) leaf_name_data.push_back(cbgppeer2holdtime.get_name_leafdata());
    if (cbgppeer2holdtimeconfigured.is_set || is_set(cbgppeer2holdtimeconfigured.yfilter)) leaf_name_data.push_back(cbgppeer2holdtimeconfigured.get_name_leafdata());
    if (cbgppeer2intotalmessages.is_set || is_set(cbgppeer2intotalmessages.yfilter)) leaf_name_data.push_back(cbgppeer2intotalmessages.get_name_leafdata());
    if (cbgppeer2inupdateelapsedtime.is_set || is_set(cbgppeer2inupdateelapsedtime.yfilter)) leaf_name_data.push_back(cbgppeer2inupdateelapsedtime.get_name_leafdata());
    if (cbgppeer2inupdates.is_set || is_set(cbgppeer2inupdates.yfilter)) leaf_name_data.push_back(cbgppeer2inupdates.get_name_leafdata());
    if (cbgppeer2keepalive.is_set || is_set(cbgppeer2keepalive.yfilter)) leaf_name_data.push_back(cbgppeer2keepalive.get_name_leafdata());
    if (cbgppeer2keepaliveconfigured.is_set || is_set(cbgppeer2keepaliveconfigured.yfilter)) leaf_name_data.push_back(cbgppeer2keepaliveconfigured.get_name_leafdata());
    if (cbgppeer2lasterror.is_set || is_set(cbgppeer2lasterror.yfilter)) leaf_name_data.push_back(cbgppeer2lasterror.get_name_leafdata());
    if (cbgppeer2lasterrortxt.is_set || is_set(cbgppeer2lasterrortxt.yfilter)) leaf_name_data.push_back(cbgppeer2lasterrortxt.get_name_leafdata());
    if (cbgppeer2localaddr.is_set || is_set(cbgppeer2localaddr.yfilter)) leaf_name_data.push_back(cbgppeer2localaddr.get_name_leafdata());
    if (cbgppeer2localas.is_set || is_set(cbgppeer2localas.yfilter)) leaf_name_data.push_back(cbgppeer2localas.get_name_leafdata());
    if (cbgppeer2localidentifier.is_set || is_set(cbgppeer2localidentifier.yfilter)) leaf_name_data.push_back(cbgppeer2localidentifier.get_name_leafdata());
    if (cbgppeer2localport.is_set || is_set(cbgppeer2localport.yfilter)) leaf_name_data.push_back(cbgppeer2localport.get_name_leafdata());
    if (cbgppeer2minasoriginationinterval.is_set || is_set(cbgppeer2minasoriginationinterval.yfilter)) leaf_name_data.push_back(cbgppeer2minasoriginationinterval.get_name_leafdata());
    if (cbgppeer2minrouteadvertisementinterval.is_set || is_set(cbgppeer2minrouteadvertisementinterval.yfilter)) leaf_name_data.push_back(cbgppeer2minrouteadvertisementinterval.get_name_leafdata());
    if (cbgppeer2negotiatedversion.is_set || is_set(cbgppeer2negotiatedversion.yfilter)) leaf_name_data.push_back(cbgppeer2negotiatedversion.get_name_leafdata());
    if (cbgppeer2outtotalmessages.is_set || is_set(cbgppeer2outtotalmessages.yfilter)) leaf_name_data.push_back(cbgppeer2outtotalmessages.get_name_leafdata());
    if (cbgppeer2outupdates.is_set || is_set(cbgppeer2outupdates.yfilter)) leaf_name_data.push_back(cbgppeer2outupdates.get_name_leafdata());
    if (cbgppeer2prevstate.is_set || is_set(cbgppeer2prevstate.yfilter)) leaf_name_data.push_back(cbgppeer2prevstate.get_name_leafdata());
    if (cbgppeer2remoteas.is_set || is_set(cbgppeer2remoteas.yfilter)) leaf_name_data.push_back(cbgppeer2remoteas.get_name_leafdata());
    if (cbgppeer2remoteidentifier.is_set || is_set(cbgppeer2remoteidentifier.yfilter)) leaf_name_data.push_back(cbgppeer2remoteidentifier.get_name_leafdata());
    if (cbgppeer2remoteport.is_set || is_set(cbgppeer2remoteport.yfilter)) leaf_name_data.push_back(cbgppeer2remoteport.get_name_leafdata());
    if (cbgppeer2state.is_set || is_set(cbgppeer2state.yfilter)) leaf_name_data.push_back(cbgppeer2state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
        cbgppeer2type.value_namespace = name_space;
        cbgppeer2type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
        cbgppeer2remoteaddr.value_namespace = name_space;
        cbgppeer2remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AdminStatus")
    {
        cbgppeer2adminstatus = value;
        cbgppeer2adminstatus.value_namespace = name_space;
        cbgppeer2adminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2ConnectRetryInterval")
    {
        cbgppeer2connectretryinterval = value;
        cbgppeer2connectretryinterval.value_namespace = name_space;
        cbgppeer2connectretryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTime")
    {
        cbgppeer2fsmestablishedtime = value;
        cbgppeer2fsmestablishedtime.value_namespace = name_space;
        cbgppeer2fsmestablishedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTransitions")
    {
        cbgppeer2fsmestablishedtransitions = value;
        cbgppeer2fsmestablishedtransitions.value_namespace = name_space;
        cbgppeer2fsmestablishedtransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2HoldTime")
    {
        cbgppeer2holdtime = value;
        cbgppeer2holdtime.value_namespace = name_space;
        cbgppeer2holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2HoldTimeConfigured")
    {
        cbgppeer2holdtimeconfigured = value;
        cbgppeer2holdtimeconfigured.value_namespace = name_space;
        cbgppeer2holdtimeconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2InTotalMessages")
    {
        cbgppeer2intotalmessages = value;
        cbgppeer2intotalmessages.value_namespace = name_space;
        cbgppeer2intotalmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2InUpdateElapsedTime")
    {
        cbgppeer2inupdateelapsedtime = value;
        cbgppeer2inupdateelapsedtime.value_namespace = name_space;
        cbgppeer2inupdateelapsedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2InUpdates")
    {
        cbgppeer2inupdates = value;
        cbgppeer2inupdates.value_namespace = name_space;
        cbgppeer2inupdates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2KeepAlive")
    {
        cbgppeer2keepalive = value;
        cbgppeer2keepalive.value_namespace = name_space;
        cbgppeer2keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2KeepAliveConfigured")
    {
        cbgppeer2keepaliveconfigured = value;
        cbgppeer2keepaliveconfigured.value_namespace = name_space;
        cbgppeer2keepaliveconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LastError")
    {
        cbgppeer2lasterror = value;
        cbgppeer2lasterror.value_namespace = name_space;
        cbgppeer2lasterror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LastErrorTxt")
    {
        cbgppeer2lasterrortxt = value;
        cbgppeer2lasterrortxt.value_namespace = name_space;
        cbgppeer2lasterrortxt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LocalAddr")
    {
        cbgppeer2localaddr = value;
        cbgppeer2localaddr.value_namespace = name_space;
        cbgppeer2localaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LocalAs")
    {
        cbgppeer2localas = value;
        cbgppeer2localas.value_namespace = name_space;
        cbgppeer2localas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LocalIdentifier")
    {
        cbgppeer2localidentifier = value;
        cbgppeer2localidentifier.value_namespace = name_space;
        cbgppeer2localidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LocalPort")
    {
        cbgppeer2localport = value;
        cbgppeer2localport.value_namespace = name_space;
        cbgppeer2localport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2MinASOriginationInterval")
    {
        cbgppeer2minasoriginationinterval = value;
        cbgppeer2minasoriginationinterval.value_namespace = name_space;
        cbgppeer2minasoriginationinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2MinRouteAdvertisementInterval")
    {
        cbgppeer2minrouteadvertisementinterval = value;
        cbgppeer2minrouteadvertisementinterval.value_namespace = name_space;
        cbgppeer2minrouteadvertisementinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2NegotiatedVersion")
    {
        cbgppeer2negotiatedversion = value;
        cbgppeer2negotiatedversion.value_namespace = name_space;
        cbgppeer2negotiatedversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2OutTotalMessages")
    {
        cbgppeer2outtotalmessages = value;
        cbgppeer2outtotalmessages.value_namespace = name_space;
        cbgppeer2outtotalmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2OutUpdates")
    {
        cbgppeer2outupdates = value;
        cbgppeer2outupdates.value_namespace = name_space;
        cbgppeer2outupdates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2PrevState")
    {
        cbgppeer2prevstate = value;
        cbgppeer2prevstate.value_namespace = name_space;
        cbgppeer2prevstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAs")
    {
        cbgppeer2remoteas = value;
        cbgppeer2remoteas.value_namespace = name_space;
        cbgppeer2remoteas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteIdentifier")
    {
        cbgppeer2remoteidentifier = value;
        cbgppeer2remoteidentifier.value_namespace = name_space;
        cbgppeer2remoteidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemotePort")
    {
        cbgppeer2remoteport = value;
        cbgppeer2remoteport.value_namespace = name_space;
        cbgppeer2remoteport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2State")
    {
        cbgppeer2state = value;
        cbgppeer2state.value_namespace = name_space;
        cbgppeer2state.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AdminStatus")
    {
        cbgppeer2adminstatus.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2ConnectRetryInterval")
    {
        cbgppeer2connectretryinterval.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTime")
    {
        cbgppeer2fsmestablishedtime.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTransitions")
    {
        cbgppeer2fsmestablishedtransitions.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2HoldTime")
    {
        cbgppeer2holdtime.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2HoldTimeConfigured")
    {
        cbgppeer2holdtimeconfigured.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2InTotalMessages")
    {
        cbgppeer2intotalmessages.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2InUpdateElapsedTime")
    {
        cbgppeer2inupdateelapsedtime.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2InUpdates")
    {
        cbgppeer2inupdates.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2KeepAlive")
    {
        cbgppeer2keepalive.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2KeepAliveConfigured")
    {
        cbgppeer2keepaliveconfigured.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LastError")
    {
        cbgppeer2lasterror.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LastErrorTxt")
    {
        cbgppeer2lasterrortxt.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LocalAddr")
    {
        cbgppeer2localaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LocalAs")
    {
        cbgppeer2localas.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LocalIdentifier")
    {
        cbgppeer2localidentifier.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LocalPort")
    {
        cbgppeer2localport.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2MinASOriginationInterval")
    {
        cbgppeer2minasoriginationinterval.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2MinRouteAdvertisementInterval")
    {
        cbgppeer2minrouteadvertisementinterval.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2NegotiatedVersion")
    {
        cbgppeer2negotiatedversion.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2OutTotalMessages")
    {
        cbgppeer2outtotalmessages.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2OutUpdates")
    {
        cbgppeer2outupdates.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2PrevState")
    {
        cbgppeer2prevstate.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAs")
    {
        cbgppeer2remoteas.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteIdentifier")
    {
        cbgppeer2remoteidentifier.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemotePort")
    {
        cbgppeer2remoteport.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2State")
    {
        cbgppeer2state.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Type" || name == "cbgpPeer2RemoteAddr" || name == "cbgpPeer2AdminStatus" || name == "cbgpPeer2ConnectRetryInterval" || name == "cbgpPeer2FsmEstablishedTime" || name == "cbgpPeer2FsmEstablishedTransitions" || name == "cbgpPeer2HoldTime" || name == "cbgpPeer2HoldTimeConfigured" || name == "cbgpPeer2InTotalMessages" || name == "cbgpPeer2InUpdateElapsedTime" || name == "cbgpPeer2InUpdates" || name == "cbgpPeer2KeepAlive" || name == "cbgpPeer2KeepAliveConfigured" || name == "cbgpPeer2LastError" || name == "cbgpPeer2LastErrorTxt" || name == "cbgpPeer2LocalAddr" || name == "cbgpPeer2LocalAs" || name == "cbgpPeer2LocalIdentifier" || name == "cbgpPeer2LocalPort" || name == "cbgpPeer2MinASOriginationInterval" || name == "cbgpPeer2MinRouteAdvertisementInterval" || name == "cbgpPeer2NegotiatedVersion" || name == "cbgpPeer2OutTotalMessages" || name == "cbgpPeer2OutUpdates" || name == "cbgpPeer2PrevState" || name == "cbgpPeer2RemoteAs" || name == "cbgpPeer2RemoteIdentifier" || name == "cbgpPeer2RemotePort" || name == "cbgpPeer2State")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixtable()
{

    yang_name = "cbgpPeerAddrFamilyPrefixTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::~Cbgppeeraddrfamilyprefixtable()
{
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::has_data() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyprefixentry.size(); index++)
    {
        if(cbgppeeraddrfamilyprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyprefixentry.size(); index++)
    {
        if(cbgppeeraddrfamilyprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyPrefixTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeerAddrFamilyPrefixEntry")
    {
        for(auto const & c : cbgppeeraddrfamilyprefixentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry>();
        c->parent = this;
        cbgppeeraddrfamilyprefixentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeeraddrfamilyprefixentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeerAddrFamilyPrefixEntry")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::Cbgppeeraddrfamilyprefixentry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    cbgppeeraddrfamilyafi{YType::enumeration, "cbgpPeerAddrFamilyAfi"},
    cbgppeeraddrfamilysafi{YType::enumeration, "cbgpPeerAddrFamilySafi"},
    cbgppeeracceptedprefixes{YType::uint32, "cbgpPeerAcceptedPrefixes"},
    cbgppeeradvertisedprefixes{YType::uint32, "cbgpPeerAdvertisedPrefixes"},
    cbgppeerdeniedprefixes{YType::uint32, "cbgpPeerDeniedPrefixes"},
    cbgppeerprefixadminlimit{YType::uint32, "cbgpPeerPrefixAdminLimit"},
    cbgppeerprefixclearthreshold{YType::uint32, "cbgpPeerPrefixClearThreshold"},
    cbgppeerprefixthreshold{YType::uint32, "cbgpPeerPrefixThreshold"},
    cbgppeersuppressedprefixes{YType::uint32, "cbgpPeerSuppressedPrefixes"},
    cbgppeerwithdrawnprefixes{YType::uint32, "cbgpPeerWithdrawnPrefixes"}
{

    yang_name = "cbgpPeerAddrFamilyPrefixEntry"; yang_parent_name = "cbgpPeerAddrFamilyPrefixTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::~Cbgppeeraddrfamilyprefixentry()
{
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::has_data() const
{
    return bgppeerremoteaddr.is_set
	|| cbgppeeraddrfamilyafi.is_set
	|| cbgppeeraddrfamilysafi.is_set
	|| cbgppeeracceptedprefixes.is_set
	|| cbgppeeradvertisedprefixes.is_set
	|| cbgppeerdeniedprefixes.is_set
	|| cbgppeerprefixadminlimit.is_set
	|| cbgppeerprefixclearthreshold.is_set
	|| cbgppeerprefixthreshold.is_set
	|| cbgppeersuppressedprefixes.is_set
	|| cbgppeerwithdrawnprefixes.is_set;
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgppeerremoteaddr.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilyafi.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilysafi.yfilter)
	|| ydk::is_set(cbgppeeracceptedprefixes.yfilter)
	|| ydk::is_set(cbgppeeradvertisedprefixes.yfilter)
	|| ydk::is_set(cbgppeerdeniedprefixes.yfilter)
	|| ydk::is_set(cbgppeerprefixadminlimit.yfilter)
	|| ydk::is_set(cbgppeerprefixclearthreshold.yfilter)
	|| ydk::is_set(cbgppeerprefixthreshold.yfilter)
	|| ydk::is_set(cbgppeersuppressedprefixes.yfilter)
	|| ydk::is_set(cbgppeerwithdrawnprefixes.yfilter);
}

std::string CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeerAddrFamilyPrefixTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyPrefixEntry" <<"[bgpPeerRemoteAddr='" <<bgppeerremoteaddr <<"']" <<"[cbgpPeerAddrFamilyAfi='" <<cbgppeeraddrfamilyafi <<"']" <<"[cbgpPeerAddrFamilySafi='" <<cbgppeeraddrfamilysafi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.yfilter)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (cbgppeeraddrfamilyafi.is_set || is_set(cbgppeeraddrfamilyafi.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilyafi.get_name_leafdata());
    if (cbgppeeraddrfamilysafi.is_set || is_set(cbgppeeraddrfamilysafi.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilysafi.get_name_leafdata());
    if (cbgppeeracceptedprefixes.is_set || is_set(cbgppeeracceptedprefixes.yfilter)) leaf_name_data.push_back(cbgppeeracceptedprefixes.get_name_leafdata());
    if (cbgppeeradvertisedprefixes.is_set || is_set(cbgppeeradvertisedprefixes.yfilter)) leaf_name_data.push_back(cbgppeeradvertisedprefixes.get_name_leafdata());
    if (cbgppeerdeniedprefixes.is_set || is_set(cbgppeerdeniedprefixes.yfilter)) leaf_name_data.push_back(cbgppeerdeniedprefixes.get_name_leafdata());
    if (cbgppeerprefixadminlimit.is_set || is_set(cbgppeerprefixadminlimit.yfilter)) leaf_name_data.push_back(cbgppeerprefixadminlimit.get_name_leafdata());
    if (cbgppeerprefixclearthreshold.is_set || is_set(cbgppeerprefixclearthreshold.yfilter)) leaf_name_data.push_back(cbgppeerprefixclearthreshold.get_name_leafdata());
    if (cbgppeerprefixthreshold.is_set || is_set(cbgppeerprefixthreshold.yfilter)) leaf_name_data.push_back(cbgppeerprefixthreshold.get_name_leafdata());
    if (cbgppeersuppressedprefixes.is_set || is_set(cbgppeersuppressedprefixes.yfilter)) leaf_name_data.push_back(cbgppeersuppressedprefixes.get_name_leafdata());
    if (cbgppeerwithdrawnprefixes.is_set || is_set(cbgppeerwithdrawnprefixes.yfilter)) leaf_name_data.push_back(cbgppeerwithdrawnprefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
        bgppeerremoteaddr.value_namespace = name_space;
        bgppeerremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi = value;
        cbgppeeraddrfamilyafi.value_namespace = name_space;
        cbgppeeraddrfamilyafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi = value;
        cbgppeeraddrfamilysafi.value_namespace = name_space;
        cbgppeeraddrfamilysafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAcceptedPrefixes")
    {
        cbgppeeracceptedprefixes = value;
        cbgppeeracceptedprefixes.value_namespace = name_space;
        cbgppeeracceptedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAdvertisedPrefixes")
    {
        cbgppeeradvertisedprefixes = value;
        cbgppeeradvertisedprefixes.value_namespace = name_space;
        cbgppeeradvertisedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerDeniedPrefixes")
    {
        cbgppeerdeniedprefixes = value;
        cbgppeerdeniedprefixes.value_namespace = name_space;
        cbgppeerdeniedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerPrefixAdminLimit")
    {
        cbgppeerprefixadminlimit = value;
        cbgppeerprefixadminlimit.value_namespace = name_space;
        cbgppeerprefixadminlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerPrefixClearThreshold")
    {
        cbgppeerprefixclearthreshold = value;
        cbgppeerprefixclearthreshold.value_namespace = name_space;
        cbgppeerprefixclearthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerPrefixThreshold")
    {
        cbgppeerprefixthreshold = value;
        cbgppeerprefixthreshold.value_namespace = name_space;
        cbgppeerprefixthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerSuppressedPrefixes")
    {
        cbgppeersuppressedprefixes = value;
        cbgppeersuppressedprefixes.value_namespace = name_space;
        cbgppeersuppressedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerWithdrawnPrefixes")
    {
        cbgppeerwithdrawnprefixes = value;
        cbgppeerwithdrawnprefixes.value_namespace = name_space;
        cbgppeerwithdrawnprefixes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAcceptedPrefixes")
    {
        cbgppeeracceptedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAdvertisedPrefixes")
    {
        cbgppeeradvertisedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerDeniedPrefixes")
    {
        cbgppeerdeniedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixAdminLimit")
    {
        cbgppeerprefixadminlimit.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixClearThreshold")
    {
        cbgppeerprefixclearthreshold.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixThreshold")
    {
        cbgppeerprefixthreshold.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerSuppressedPrefixes")
    {
        cbgppeersuppressedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerWithdrawnPrefixes")
    {
        cbgppeerwithdrawnprefixes.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPeerRemoteAddr" || name == "cbgpPeerAddrFamilyAfi" || name == "cbgpPeerAddrFamilySafi" || name == "cbgpPeerAcceptedPrefixes" || name == "cbgpPeerAdvertisedPrefixes" || name == "cbgpPeerDeniedPrefixes" || name == "cbgpPeerPrefixAdminLimit" || name == "cbgpPeerPrefixClearThreshold" || name == "cbgpPeerPrefixThreshold" || name == "cbgpPeerSuppressedPrefixes" || name == "cbgpPeerWithdrawnPrefixes")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilytable()
{

    yang_name = "cbgpPeerAddrFamilyTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeeraddrfamilytable::~Cbgppeeraddrfamilytable()
{
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilytable::has_data() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyentry.size(); index++)
    {
        if(cbgppeeraddrfamilyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilytable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyentry.size(); index++)
    {
        if(cbgppeeraddrfamilyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::Cbgppeeraddrfamilytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeeraddrfamilytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeeraddrfamilytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeeraddrfamilytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeerAddrFamilyEntry")
    {
        for(auto const & c : cbgppeeraddrfamilyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry>();
        c->parent = this;
        cbgppeeraddrfamilyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeeraddrfamilytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeeraddrfamilyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOBGP4MIB::Cbgppeeraddrfamilytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::Cbgppeeraddrfamilytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeerAddrFamilyEntry")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::Cbgppeeraddrfamilyentry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    cbgppeeraddrfamilyafi{YType::enumeration, "cbgpPeerAddrFamilyAfi"},
    cbgppeeraddrfamilysafi{YType::enumeration, "cbgpPeerAddrFamilySafi"},
    cbgppeeraddrfamilyname{YType::str, "cbgpPeerAddrFamilyName"}
{

    yang_name = "cbgpPeerAddrFamilyEntry"; yang_parent_name = "cbgpPeerAddrFamilyTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::~Cbgppeeraddrfamilyentry()
{
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::has_data() const
{
    return bgppeerremoteaddr.is_set
	|| cbgppeeraddrfamilyafi.is_set
	|| cbgppeeraddrfamilysafi.is_set
	|| cbgppeeraddrfamilyname.is_set;
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgppeerremoteaddr.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilyafi.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilysafi.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilyname.yfilter);
}

std::string CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeerAddrFamilyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyEntry" <<"[bgpPeerRemoteAddr='" <<bgppeerremoteaddr <<"']" <<"[cbgpPeerAddrFamilyAfi='" <<cbgppeeraddrfamilyafi <<"']" <<"[cbgpPeerAddrFamilySafi='" <<cbgppeeraddrfamilysafi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.yfilter)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (cbgppeeraddrfamilyafi.is_set || is_set(cbgppeeraddrfamilyafi.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilyafi.get_name_leafdata());
    if (cbgppeeraddrfamilysafi.is_set || is_set(cbgppeeraddrfamilysafi.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilysafi.get_name_leafdata());
    if (cbgppeeraddrfamilyname.is_set || is_set(cbgppeeraddrfamilyname.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilyname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
        bgppeerremoteaddr.value_namespace = name_space;
        bgppeerremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi = value;
        cbgppeeraddrfamilyafi.value_namespace = name_space;
        cbgppeeraddrfamilyafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi = value;
        cbgppeeraddrfamilysafi.value_namespace = name_space;
        cbgppeeraddrfamilysafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilyName")
    {
        cbgppeeraddrfamilyname = value;
        cbgppeeraddrfamilyname.value_namespace = name_space;
        cbgppeeraddrfamilyname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilyName")
    {
        cbgppeeraddrfamilyname.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPeerRemoteAddr" || name == "cbgpPeerAddrFamilyAfi" || name == "cbgpPeerAddrFamilySafi" || name == "cbgpPeerAddrFamilyName")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapstable()
{

    yang_name = "cbgpPeerCapsTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeercapstable::~Cbgppeercapstable()
{
}

bool CISCOBGP4MIB::Cbgppeercapstable::has_data() const
{
    for (std::size_t index=0; index<cbgppeercapsentry.size(); index++)
    {
        if(cbgppeercapsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::Cbgppeercapstable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeercapsentry.size(); index++)
    {
        if(cbgppeercapsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::Cbgppeercapstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeercapstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerCapsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeercapstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeercapstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeerCapsEntry")
    {
        for(auto const & c : cbgppeercapsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry>();
        c->parent = this;
        cbgppeercapsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeercapstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeercapsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOBGP4MIB::Cbgppeercapstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::Cbgppeercapstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::Cbgppeercapstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeerCapsEntry")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::Cbgppeercapsentry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    cbgppeercapcode{YType::enumeration, "cbgpPeerCapCode"},
    cbgppeercapindex{YType::uint32, "cbgpPeerCapIndex"},
    cbgppeercapvalue{YType::str, "cbgpPeerCapValue"}
{

    yang_name = "cbgpPeerCapsEntry"; yang_parent_name = "cbgpPeerCapsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::~Cbgppeercapsentry()
{
}

bool CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::has_data() const
{
    return bgppeerremoteaddr.is_set
	|| cbgppeercapcode.is_set
	|| cbgppeercapindex.is_set
	|| cbgppeercapvalue.is_set;
}

bool CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgppeerremoteaddr.yfilter)
	|| ydk::is_set(cbgppeercapcode.yfilter)
	|| ydk::is_set(cbgppeercapindex.yfilter)
	|| ydk::is_set(cbgppeercapvalue.yfilter);
}

std::string CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeerCapsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerCapsEntry" <<"[bgpPeerRemoteAddr='" <<bgppeerremoteaddr <<"']" <<"[cbgpPeerCapCode='" <<cbgppeercapcode <<"']" <<"[cbgpPeerCapIndex='" <<cbgppeercapindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.yfilter)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (cbgppeercapcode.is_set || is_set(cbgppeercapcode.yfilter)) leaf_name_data.push_back(cbgppeercapcode.get_name_leafdata());
    if (cbgppeercapindex.is_set || is_set(cbgppeercapindex.yfilter)) leaf_name_data.push_back(cbgppeercapindex.get_name_leafdata());
    if (cbgppeercapvalue.is_set || is_set(cbgppeercapvalue.yfilter)) leaf_name_data.push_back(cbgppeercapvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
        bgppeerremoteaddr.value_namespace = name_space;
        bgppeerremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerCapCode")
    {
        cbgppeercapcode = value;
        cbgppeercapcode.value_namespace = name_space;
        cbgppeercapcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerCapIndex")
    {
        cbgppeercapindex = value;
        cbgppeercapindex.value_namespace = name_space;
        cbgppeercapindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerCapValue")
    {
        cbgppeercapvalue = value;
        cbgppeercapvalue.value_namespace = name_space;
        cbgppeercapvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerCapCode")
    {
        cbgppeercapcode.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerCapIndex")
    {
        cbgppeercapindex.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerCapValue")
    {
        cbgppeercapvalue.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPeerRemoteAddr" || name == "cbgpPeerCapCode" || name == "cbgpPeerCapIndex" || name == "cbgpPeerCapValue")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgproutetable::Cbgproutetable()
{

    yang_name = "cbgpRouteTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgproutetable::~Cbgproutetable()
{
}

bool CISCOBGP4MIB::Cbgproutetable::has_data() const
{
    for (std::size_t index=0; index<cbgprouteentry.size(); index++)
    {
        if(cbgprouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::Cbgproutetable::has_operation() const
{
    for (std::size_t index=0; index<cbgprouteentry.size(); index++)
    {
        if(cbgprouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::Cbgproutetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgproutetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpRouteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgproutetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgproutetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpRouteEntry")
    {
        for(auto const & c : cbgprouteentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry>();
        c->parent = this;
        cbgprouteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgproutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgprouteentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOBGP4MIB::Cbgproutetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::Cbgproutetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::Cbgproutetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpRouteEntry")
        return true;
    return false;
}

CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::Cbgprouteentry()
    :
    cbgprouteafi{YType::enumeration, "cbgpRouteAfi"},
    cbgproutesafi{YType::enumeration, "cbgpRouteSafi"},
    cbgproutepeertype{YType::enumeration, "cbgpRoutePeerType"},
    cbgproutepeer{YType::str, "cbgpRoutePeer"},
    cbgprouteaddrprefix{YType::str, "cbgpRouteAddrPrefix"},
    cbgprouteaddrprefixlen{YType::uint32, "cbgpRouteAddrPrefixLen"},
    cbgprouteaggregatoraddr{YType::str, "cbgpRouteAggregatorAddr"},
    cbgprouteaggregatoraddrtype{YType::enumeration, "cbgpRouteAggregatorAddrType"},
    cbgprouteaggregatoras{YType::uint32, "cbgpRouteAggregatorAS"},
    cbgprouteaspathsegment{YType::str, "cbgpRouteASPathSegment"},
    cbgprouteatomicaggregate{YType::enumeration, "cbgpRouteAtomicAggregate"},
    cbgproutebest{YType::boolean, "cbgpRouteBest"},
    cbgproutelocalpref{YType::uint32, "cbgpRouteLocalPref"},
    cbgproutelocalprefpresent{YType::boolean, "cbgpRouteLocalPrefPresent"},
    cbgproutemedpresent{YType::boolean, "cbgpRouteMedPresent"},
    cbgproutemultiexitdisc{YType::uint32, "cbgpRouteMultiExitDisc"},
    cbgproutenexthop{YType::str, "cbgpRouteNextHop"},
    cbgprouteorigin{YType::enumeration, "cbgpRouteOrigin"},
    cbgprouteunknownattr{YType::str, "cbgpRouteUnknownAttr"}
{

    yang_name = "cbgpRouteEntry"; yang_parent_name = "cbgpRouteTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::~Cbgprouteentry()
{
}

bool CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::has_data() const
{
    return cbgprouteafi.is_set
	|| cbgproutesafi.is_set
	|| cbgproutepeertype.is_set
	|| cbgproutepeer.is_set
	|| cbgprouteaddrprefix.is_set
	|| cbgprouteaddrprefixlen.is_set
	|| cbgprouteaggregatoraddr.is_set
	|| cbgprouteaggregatoraddrtype.is_set
	|| cbgprouteaggregatoras.is_set
	|| cbgprouteaspathsegment.is_set
	|| cbgprouteatomicaggregate.is_set
	|| cbgproutebest.is_set
	|| cbgproutelocalpref.is_set
	|| cbgproutelocalprefpresent.is_set
	|| cbgproutemedpresent.is_set
	|| cbgproutemultiexitdisc.is_set
	|| cbgproutenexthop.is_set
	|| cbgprouteorigin.is_set
	|| cbgprouteunknownattr.is_set;
}

bool CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgprouteafi.yfilter)
	|| ydk::is_set(cbgproutesafi.yfilter)
	|| ydk::is_set(cbgproutepeertype.yfilter)
	|| ydk::is_set(cbgproutepeer.yfilter)
	|| ydk::is_set(cbgprouteaddrprefix.yfilter)
	|| ydk::is_set(cbgprouteaddrprefixlen.yfilter)
	|| ydk::is_set(cbgprouteaggregatoraddr.yfilter)
	|| ydk::is_set(cbgprouteaggregatoraddrtype.yfilter)
	|| ydk::is_set(cbgprouteaggregatoras.yfilter)
	|| ydk::is_set(cbgprouteaspathsegment.yfilter)
	|| ydk::is_set(cbgprouteatomicaggregate.yfilter)
	|| ydk::is_set(cbgproutebest.yfilter)
	|| ydk::is_set(cbgproutelocalpref.yfilter)
	|| ydk::is_set(cbgproutelocalprefpresent.yfilter)
	|| ydk::is_set(cbgproutemedpresent.yfilter)
	|| ydk::is_set(cbgproutemultiexitdisc.yfilter)
	|| ydk::is_set(cbgproutenexthop.yfilter)
	|| ydk::is_set(cbgprouteorigin.yfilter)
	|| ydk::is_set(cbgprouteunknownattr.yfilter);
}

std::string CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpRouteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpRouteEntry" <<"[cbgpRouteAfi='" <<cbgprouteafi <<"']" <<"[cbgpRouteSafi='" <<cbgproutesafi <<"']" <<"[cbgpRoutePeerType='" <<cbgproutepeertype <<"']" <<"[cbgpRoutePeer='" <<cbgproutepeer <<"']" <<"[cbgpRouteAddrPrefix='" <<cbgprouteaddrprefix <<"']" <<"[cbgpRouteAddrPrefixLen='" <<cbgprouteaddrprefixlen <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgprouteafi.is_set || is_set(cbgprouteafi.yfilter)) leaf_name_data.push_back(cbgprouteafi.get_name_leafdata());
    if (cbgproutesafi.is_set || is_set(cbgproutesafi.yfilter)) leaf_name_data.push_back(cbgproutesafi.get_name_leafdata());
    if (cbgproutepeertype.is_set || is_set(cbgproutepeertype.yfilter)) leaf_name_data.push_back(cbgproutepeertype.get_name_leafdata());
    if (cbgproutepeer.is_set || is_set(cbgproutepeer.yfilter)) leaf_name_data.push_back(cbgproutepeer.get_name_leafdata());
    if (cbgprouteaddrprefix.is_set || is_set(cbgprouteaddrprefix.yfilter)) leaf_name_data.push_back(cbgprouteaddrprefix.get_name_leafdata());
    if (cbgprouteaddrprefixlen.is_set || is_set(cbgprouteaddrprefixlen.yfilter)) leaf_name_data.push_back(cbgprouteaddrprefixlen.get_name_leafdata());
    if (cbgprouteaggregatoraddr.is_set || is_set(cbgprouteaggregatoraddr.yfilter)) leaf_name_data.push_back(cbgprouteaggregatoraddr.get_name_leafdata());
    if (cbgprouteaggregatoraddrtype.is_set || is_set(cbgprouteaggregatoraddrtype.yfilter)) leaf_name_data.push_back(cbgprouteaggregatoraddrtype.get_name_leafdata());
    if (cbgprouteaggregatoras.is_set || is_set(cbgprouteaggregatoras.yfilter)) leaf_name_data.push_back(cbgprouteaggregatoras.get_name_leafdata());
    if (cbgprouteaspathsegment.is_set || is_set(cbgprouteaspathsegment.yfilter)) leaf_name_data.push_back(cbgprouteaspathsegment.get_name_leafdata());
    if (cbgprouteatomicaggregate.is_set || is_set(cbgprouteatomicaggregate.yfilter)) leaf_name_data.push_back(cbgprouteatomicaggregate.get_name_leafdata());
    if (cbgproutebest.is_set || is_set(cbgproutebest.yfilter)) leaf_name_data.push_back(cbgproutebest.get_name_leafdata());
    if (cbgproutelocalpref.is_set || is_set(cbgproutelocalpref.yfilter)) leaf_name_data.push_back(cbgproutelocalpref.get_name_leafdata());
    if (cbgproutelocalprefpresent.is_set || is_set(cbgproutelocalprefpresent.yfilter)) leaf_name_data.push_back(cbgproutelocalprefpresent.get_name_leafdata());
    if (cbgproutemedpresent.is_set || is_set(cbgproutemedpresent.yfilter)) leaf_name_data.push_back(cbgproutemedpresent.get_name_leafdata());
    if (cbgproutemultiexitdisc.is_set || is_set(cbgproutemultiexitdisc.yfilter)) leaf_name_data.push_back(cbgproutemultiexitdisc.get_name_leafdata());
    if (cbgproutenexthop.is_set || is_set(cbgproutenexthop.yfilter)) leaf_name_data.push_back(cbgproutenexthop.get_name_leafdata());
    if (cbgprouteorigin.is_set || is_set(cbgprouteorigin.yfilter)) leaf_name_data.push_back(cbgprouteorigin.get_name_leafdata());
    if (cbgprouteunknownattr.is_set || is_set(cbgprouteunknownattr.yfilter)) leaf_name_data.push_back(cbgprouteunknownattr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpRouteAfi")
    {
        cbgprouteafi = value;
        cbgprouteafi.value_namespace = name_space;
        cbgprouteafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteSafi")
    {
        cbgproutesafi = value;
        cbgproutesafi.value_namespace = name_space;
        cbgproutesafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRoutePeerType")
    {
        cbgproutepeertype = value;
        cbgproutepeertype.value_namespace = name_space;
        cbgproutepeertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRoutePeer")
    {
        cbgproutepeer = value;
        cbgproutepeer.value_namespace = name_space;
        cbgproutepeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAddrPrefix")
    {
        cbgprouteaddrprefix = value;
        cbgprouteaddrprefix.value_namespace = name_space;
        cbgprouteaddrprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAddrPrefixLen")
    {
        cbgprouteaddrprefixlen = value;
        cbgprouteaddrprefixlen.value_namespace = name_space;
        cbgprouteaddrprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAggregatorAddr")
    {
        cbgprouteaggregatoraddr = value;
        cbgprouteaggregatoraddr.value_namespace = name_space;
        cbgprouteaggregatoraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAggregatorAddrType")
    {
        cbgprouteaggregatoraddrtype = value;
        cbgprouteaggregatoraddrtype.value_namespace = name_space;
        cbgprouteaggregatoraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAggregatorAS")
    {
        cbgprouteaggregatoras = value;
        cbgprouteaggregatoras.value_namespace = name_space;
        cbgprouteaggregatoras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteASPathSegment")
    {
        cbgprouteaspathsegment = value;
        cbgprouteaspathsegment.value_namespace = name_space;
        cbgprouteaspathsegment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAtomicAggregate")
    {
        cbgprouteatomicaggregate = value;
        cbgprouteatomicaggregate.value_namespace = name_space;
        cbgprouteatomicaggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteBest")
    {
        cbgproutebest = value;
        cbgproutebest.value_namespace = name_space;
        cbgproutebest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteLocalPref")
    {
        cbgproutelocalpref = value;
        cbgproutelocalpref.value_namespace = name_space;
        cbgproutelocalpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteLocalPrefPresent")
    {
        cbgproutelocalprefpresent = value;
        cbgproutelocalprefpresent.value_namespace = name_space;
        cbgproutelocalprefpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteMedPresent")
    {
        cbgproutemedpresent = value;
        cbgproutemedpresent.value_namespace = name_space;
        cbgproutemedpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteMultiExitDisc")
    {
        cbgproutemultiexitdisc = value;
        cbgproutemultiexitdisc.value_namespace = name_space;
        cbgproutemultiexitdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteNextHop")
    {
        cbgproutenexthop = value;
        cbgproutenexthop.value_namespace = name_space;
        cbgproutenexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteOrigin")
    {
        cbgprouteorigin = value;
        cbgprouteorigin.value_namespace = name_space;
        cbgprouteorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteUnknownAttr")
    {
        cbgprouteunknownattr = value;
        cbgprouteunknownattr.value_namespace = name_space;
        cbgprouteunknownattr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpRouteAfi")
    {
        cbgprouteafi.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteSafi")
    {
        cbgproutesafi.yfilter = yfilter;
    }
    if(value_path == "cbgpRoutePeerType")
    {
        cbgproutepeertype.yfilter = yfilter;
    }
    if(value_path == "cbgpRoutePeer")
    {
        cbgproutepeer.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAddrPrefix")
    {
        cbgprouteaddrprefix.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAddrPrefixLen")
    {
        cbgprouteaddrprefixlen.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAggregatorAddr")
    {
        cbgprouteaggregatoraddr.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAggregatorAddrType")
    {
        cbgprouteaggregatoraddrtype.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAggregatorAS")
    {
        cbgprouteaggregatoras.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteASPathSegment")
    {
        cbgprouteaspathsegment.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAtomicAggregate")
    {
        cbgprouteatomicaggregate.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteBest")
    {
        cbgproutebest.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteLocalPref")
    {
        cbgproutelocalpref.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteLocalPrefPresent")
    {
        cbgproutelocalprefpresent.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteMedPresent")
    {
        cbgproutemedpresent.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteMultiExitDisc")
    {
        cbgproutemultiexitdisc.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteNextHop")
    {
        cbgproutenexthop.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteOrigin")
    {
        cbgprouteorigin.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteUnknownAttr")
    {
        cbgprouteunknownattr.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpRouteAfi" || name == "cbgpRouteSafi" || name == "cbgpRoutePeerType" || name == "cbgpRoutePeer" || name == "cbgpRouteAddrPrefix" || name == "cbgpRouteAddrPrefixLen" || name == "cbgpRouteAggregatorAddr" || name == "cbgpRouteAggregatorAddrType" || name == "cbgpRouteAggregatorAS" || name == "cbgpRouteASPathSegment" || name == "cbgpRouteAtomicAggregate" || name == "cbgpRouteBest" || name == "cbgpRouteLocalPref" || name == "cbgpRouteLocalPrefPresent" || name == "cbgpRouteMedPresent" || name == "cbgpRouteMultiExitDisc" || name == "cbgpRouteNextHop" || name == "cbgpRouteOrigin" || name == "cbgpRouteUnknownAttr")
        return true;
    return false;
}

const Enum::YLeaf CbgpSafi::unicast {1, "unicast"};
const Enum::YLeaf CbgpSafi::multicast {2, "multicast"};
const Enum::YLeaf CbgpSafi::unicastAndMulticast {3, "unicastAndMulticast"};
const Enum::YLeaf CbgpSafi::vpn {128, "vpn"};

const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capcode::multiProtocol {1, "multiProtocol"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capcode::routeRefresh {2, "routeRefresh"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capcode::gracefulRestart {64, "gracefulRestart"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capcode::fourByteAs {65, "fourByteAs"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capcode::addPath {69, "addPath"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capcode::routeRefreshOld {128, "routeRefreshOld"};

const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2State::idle {1, "idle"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2State::connect {2, "connect"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2State::active {3, "active"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2State::opensent {4, "opensent"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2State::openconfirm {5, "openconfirm"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2State::established {6, "established"};

const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Adminstatus::stop {1, "stop"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Adminstatus::start {2, "start"};

const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Prevstate::none {0, "none"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Prevstate::idle {1, "idle"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Prevstate::connect {2, "connect"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Prevstate::active {3, "active"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Prevstate::opensent {4, "opensent"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Prevstate::openconfirm {5, "openconfirm"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Prevstate::established {6, "established"};

const Enum::YLeaf CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::Cbgppeercapcode::multiProtocol {1, "multiProtocol"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::Cbgppeercapcode::routeRefresh {2, "routeRefresh"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::Cbgppeercapcode::gracefulRestart {64, "gracefulRestart"};
const Enum::YLeaf CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::Cbgppeercapcode::routeRefreshOld {128, "routeRefreshOld"};

const Enum::YLeaf CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::Cbgprouteorigin::igp {1, "igp"};
const Enum::YLeaf CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::Cbgprouteorigin::egp {2, "egp"};
const Enum::YLeaf CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::Cbgprouteorigin::incomplete {3, "incomplete"};

const Enum::YLeaf CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::Cbgprouteatomicaggregate::lessSpecificRouteNotSelected {1, "lessSpecificRouteNotSelected"};
const Enum::YLeaf CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::Cbgprouteatomicaggregate::lessSpecificRouteSelected {2, "lessSpecificRouteSelected"};


}
}

