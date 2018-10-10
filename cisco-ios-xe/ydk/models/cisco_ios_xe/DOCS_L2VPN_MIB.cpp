
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DOCS_L2VPN_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DOCS_L2VPN_MIB {

DOCSL2VPNMIB::DOCSL2VPNMIB()
    :
    docsl2vpnidtoindextable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnIdToIndexTable>())
    , docsl2vpnindextoidtable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnIndexToIdTable>())
    , docsl2vpncmtable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnCmTable>())
    , docsl2vpnvpncmtable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnVpnCmTable>())
    , docsl2vpnvpncmstatstable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable>())
    , docsl2vpnportstatustable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnPortStatusTable>())
    , docsl2vpnsfstatustable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnSfStatusTable>())
    , docsl2vpnpktclasstable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnPktClassTable>())
    , docsl2vpncmnsitable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnCmNsiTable>())
    , docsl2vpncmvpncpetable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable>())
    , docsl2vpnvpncmcpetable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable>())
    , docsl2vpndot1qtpfdbexttable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable>())
    , docsl2vpndot1qtpgroupexttable(std::make_shared<DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable>())
{
    docsl2vpnidtoindextable->parent = this;
    docsl2vpnindextoidtable->parent = this;
    docsl2vpncmtable->parent = this;
    docsl2vpnvpncmtable->parent = this;
    docsl2vpnvpncmstatstable->parent = this;
    docsl2vpnportstatustable->parent = this;
    docsl2vpnsfstatustable->parent = this;
    docsl2vpnpktclasstable->parent = this;
    docsl2vpncmnsitable->parent = this;
    docsl2vpncmvpncpetable->parent = this;
    docsl2vpnvpncmcpetable->parent = this;
    docsl2vpndot1qtpfdbexttable->parent = this;
    docsl2vpndot1qtpgroupexttable->parent = this;

    yang_name = "DOCS-L2VPN-MIB"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DOCSL2VPNMIB::~DOCSL2VPNMIB()
{
}

bool DOCSL2VPNMIB::has_data() const
{
    if (is_presence_container) return true;
    return (docsl2vpnidtoindextable !=  nullptr && docsl2vpnidtoindextable->has_data())
	|| (docsl2vpnindextoidtable !=  nullptr && docsl2vpnindextoidtable->has_data())
	|| (docsl2vpncmtable !=  nullptr && docsl2vpncmtable->has_data())
	|| (docsl2vpnvpncmtable !=  nullptr && docsl2vpnvpncmtable->has_data())
	|| (docsl2vpnvpncmstatstable !=  nullptr && docsl2vpnvpncmstatstable->has_data())
	|| (docsl2vpnportstatustable !=  nullptr && docsl2vpnportstatustable->has_data())
	|| (docsl2vpnsfstatustable !=  nullptr && docsl2vpnsfstatustable->has_data())
	|| (docsl2vpnpktclasstable !=  nullptr && docsl2vpnpktclasstable->has_data())
	|| (docsl2vpncmnsitable !=  nullptr && docsl2vpncmnsitable->has_data())
	|| (docsl2vpncmvpncpetable !=  nullptr && docsl2vpncmvpncpetable->has_data())
	|| (docsl2vpnvpncmcpetable !=  nullptr && docsl2vpnvpncmcpetable->has_data())
	|| (docsl2vpndot1qtpfdbexttable !=  nullptr && docsl2vpndot1qtpfdbexttable->has_data())
	|| (docsl2vpndot1qtpgroupexttable !=  nullptr && docsl2vpndot1qtpgroupexttable->has_data());
}

bool DOCSL2VPNMIB::has_operation() const
{
    return is_set(yfilter)
	|| (docsl2vpnidtoindextable !=  nullptr && docsl2vpnidtoindextable->has_operation())
	|| (docsl2vpnindextoidtable !=  nullptr && docsl2vpnindextoidtable->has_operation())
	|| (docsl2vpncmtable !=  nullptr && docsl2vpncmtable->has_operation())
	|| (docsl2vpnvpncmtable !=  nullptr && docsl2vpnvpncmtable->has_operation())
	|| (docsl2vpnvpncmstatstable !=  nullptr && docsl2vpnvpncmstatstable->has_operation())
	|| (docsl2vpnportstatustable !=  nullptr && docsl2vpnportstatustable->has_operation())
	|| (docsl2vpnsfstatustable !=  nullptr && docsl2vpnsfstatustable->has_operation())
	|| (docsl2vpnpktclasstable !=  nullptr && docsl2vpnpktclasstable->has_operation())
	|| (docsl2vpncmnsitable !=  nullptr && docsl2vpncmnsitable->has_operation())
	|| (docsl2vpncmvpncpetable !=  nullptr && docsl2vpncmvpncpetable->has_operation())
	|| (docsl2vpnvpncmcpetable !=  nullptr && docsl2vpnvpncmcpetable->has_operation())
	|| (docsl2vpndot1qtpfdbexttable !=  nullptr && docsl2vpndot1qtpfdbexttable->has_operation())
	|| (docsl2vpndot1qtpgroupexttable !=  nullptr && docsl2vpndot1qtpgroupexttable->has_operation());
}

std::string DOCSL2VPNMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnIdToIndexTable")
    {
        if(docsl2vpnidtoindextable == nullptr)
        {
            docsl2vpnidtoindextable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnIdToIndexTable>();
        }
        return docsl2vpnidtoindextable;
    }

    if(child_yang_name == "docsL2vpnIndexToIdTable")
    {
        if(docsl2vpnindextoidtable == nullptr)
        {
            docsl2vpnindextoidtable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnIndexToIdTable>();
        }
        return docsl2vpnindextoidtable;
    }

    if(child_yang_name == "docsL2vpnCmTable")
    {
        if(docsl2vpncmtable == nullptr)
        {
            docsl2vpncmtable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnCmTable>();
        }
        return docsl2vpncmtable;
    }

    if(child_yang_name == "docsL2vpnVpnCmTable")
    {
        if(docsl2vpnvpncmtable == nullptr)
        {
            docsl2vpnvpncmtable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnVpnCmTable>();
        }
        return docsl2vpnvpncmtable;
    }

    if(child_yang_name == "docsL2vpnVpnCmStatsTable")
    {
        if(docsl2vpnvpncmstatstable == nullptr)
        {
            docsl2vpnvpncmstatstable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable>();
        }
        return docsl2vpnvpncmstatstable;
    }

    if(child_yang_name == "docsL2vpnPortStatusTable")
    {
        if(docsl2vpnportstatustable == nullptr)
        {
            docsl2vpnportstatustable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnPortStatusTable>();
        }
        return docsl2vpnportstatustable;
    }

    if(child_yang_name == "docsL2vpnSfStatusTable")
    {
        if(docsl2vpnsfstatustable == nullptr)
        {
            docsl2vpnsfstatustable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnSfStatusTable>();
        }
        return docsl2vpnsfstatustable;
    }

    if(child_yang_name == "docsL2vpnPktClassTable")
    {
        if(docsl2vpnpktclasstable == nullptr)
        {
            docsl2vpnpktclasstable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnPktClassTable>();
        }
        return docsl2vpnpktclasstable;
    }

    if(child_yang_name == "docsL2vpnCmNsiTable")
    {
        if(docsl2vpncmnsitable == nullptr)
        {
            docsl2vpncmnsitable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnCmNsiTable>();
        }
        return docsl2vpncmnsitable;
    }

    if(child_yang_name == "docsL2vpnCmVpnCpeTable")
    {
        if(docsl2vpncmvpncpetable == nullptr)
        {
            docsl2vpncmvpncpetable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable>();
        }
        return docsl2vpncmvpncpetable;
    }

    if(child_yang_name == "docsL2vpnVpnCmCpeTable")
    {
        if(docsl2vpnvpncmcpetable == nullptr)
        {
            docsl2vpnvpncmcpetable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable>();
        }
        return docsl2vpnvpncmcpetable;
    }

    if(child_yang_name == "docsL2vpnDot1qTpFdbExtTable")
    {
        if(docsl2vpndot1qtpfdbexttable == nullptr)
        {
            docsl2vpndot1qtpfdbexttable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable>();
        }
        return docsl2vpndot1qtpfdbexttable;
    }

    if(child_yang_name == "docsL2vpnDot1qTpGroupExtTable")
    {
        if(docsl2vpndot1qtpgroupexttable == nullptr)
        {
            docsl2vpndot1qtpgroupexttable = std::make_shared<DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable>();
        }
        return docsl2vpndot1qtpgroupexttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(docsl2vpnidtoindextable != nullptr)
    {
        children["docsL2vpnIdToIndexTable"] = docsl2vpnidtoindextable;
    }

    if(docsl2vpnindextoidtable != nullptr)
    {
        children["docsL2vpnIndexToIdTable"] = docsl2vpnindextoidtable;
    }

    if(docsl2vpncmtable != nullptr)
    {
        children["docsL2vpnCmTable"] = docsl2vpncmtable;
    }

    if(docsl2vpnvpncmtable != nullptr)
    {
        children["docsL2vpnVpnCmTable"] = docsl2vpnvpncmtable;
    }

    if(docsl2vpnvpncmstatstable != nullptr)
    {
        children["docsL2vpnVpnCmStatsTable"] = docsl2vpnvpncmstatstable;
    }

    if(docsl2vpnportstatustable != nullptr)
    {
        children["docsL2vpnPortStatusTable"] = docsl2vpnportstatustable;
    }

    if(docsl2vpnsfstatustable != nullptr)
    {
        children["docsL2vpnSfStatusTable"] = docsl2vpnsfstatustable;
    }

    if(docsl2vpnpktclasstable != nullptr)
    {
        children["docsL2vpnPktClassTable"] = docsl2vpnpktclasstable;
    }

    if(docsl2vpncmnsitable != nullptr)
    {
        children["docsL2vpnCmNsiTable"] = docsl2vpncmnsitable;
    }

    if(docsl2vpncmvpncpetable != nullptr)
    {
        children["docsL2vpnCmVpnCpeTable"] = docsl2vpncmvpncpetable;
    }

    if(docsl2vpnvpncmcpetable != nullptr)
    {
        children["docsL2vpnVpnCmCpeTable"] = docsl2vpnvpncmcpetable;
    }

    if(docsl2vpndot1qtpfdbexttable != nullptr)
    {
        children["docsL2vpnDot1qTpFdbExtTable"] = docsl2vpndot1qtpfdbexttable;
    }

    if(docsl2vpndot1qtpgroupexttable != nullptr)
    {
        children["docsL2vpnDot1qTpGroupExtTable"] = docsl2vpndot1qtpgroupexttable;
    }

    return children;
}

void DOCSL2VPNMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DOCSL2VPNMIB::clone_ptr() const
{
    return std::make_shared<DOCSL2VPNMIB>();
}

std::string DOCSL2VPNMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DOCSL2VPNMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DOCSL2VPNMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DOCSL2VPNMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DOCSL2VPNMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnIdToIndexTable" || name == "docsL2vpnIndexToIdTable" || name == "docsL2vpnCmTable" || name == "docsL2vpnVpnCmTable" || name == "docsL2vpnVpnCmStatsTable" || name == "docsL2vpnPortStatusTable" || name == "docsL2vpnSfStatusTable" || name == "docsL2vpnPktClassTable" || name == "docsL2vpnCmNsiTable" || name == "docsL2vpnCmVpnCpeTable" || name == "docsL2vpnVpnCmCpeTable" || name == "docsL2vpnDot1qTpFdbExtTable" || name == "docsL2vpnDot1qTpGroupExtTable")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexTable()
    :
    docsl2vpnidtoindexentry(this, {"docsl2vpnid"})
{

    yang_name = "docsL2vpnIdToIndexTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::~DocsL2vpnIdToIndexTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpnidtoindexentry.len(); index++)
    {
        if(docsl2vpnidtoindexentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpnidtoindexentry.len(); index++)
    {
        if(docsl2vpnidtoindexentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnIdToIndexTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnIdToIndexEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry>();
        c->parent = this;
        docsl2vpnidtoindexentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpnidtoindexentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnIdToIndexEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::DocsL2vpnIdToIndexEntry()
    :
    docsl2vpnid{YType::str, "docsL2vpnId"},
    docsl2vpnidtoindexidx{YType::uint32, "docsL2vpnIdToIndexIdx"}
{

    yang_name = "docsL2vpnIdToIndexEntry"; yang_parent_name = "docsL2vpnIdToIndexTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::~DocsL2vpnIdToIndexEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsl2vpnid.is_set
	|| docsl2vpnidtoindexidx.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsl2vpnid.yfilter)
	|| ydk::is_set(docsl2vpnidtoindexidx.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnIdToIndexTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnIdToIndexEntry";
    ADD_KEY_TOKEN(docsl2vpnid, "docsL2vpnId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsl2vpnid.is_set || is_set(docsl2vpnid.yfilter)) leaf_name_data.push_back(docsl2vpnid.get_name_leafdata());
    if (docsl2vpnidtoindexidx.is_set || is_set(docsl2vpnidtoindexidx.yfilter)) leaf_name_data.push_back(docsl2vpnidtoindexidx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsL2vpnId")
    {
        docsl2vpnid = value;
        docsl2vpnid.value_namespace = name_space;
        docsl2vpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnIdToIndexIdx")
    {
        docsl2vpnidtoindexidx = value;
        docsl2vpnidtoindexidx.value_namespace = name_space;
        docsl2vpnidtoindexidx.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsL2vpnId")
    {
        docsl2vpnid.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnIdToIndexIdx")
    {
        docsl2vpnidtoindexidx.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnId" || name == "docsL2vpnIdToIndexIdx")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdTable()
    :
    docsl2vpnindextoidentry(this, {"docsl2vpnidx"})
{

    yang_name = "docsL2vpnIndexToIdTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::~DocsL2vpnIndexToIdTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpnindextoidentry.len(); index++)
    {
        if(docsl2vpnindextoidentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpnindextoidentry.len(); index++)
    {
        if(docsl2vpnindextoidentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnIndexToIdTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnIndexToIdEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry>();
        c->parent = this;
        docsl2vpnindextoidentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpnindextoidentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnIndexToIdEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::DocsL2vpnIndexToIdEntry()
    :
    docsl2vpnidx{YType::uint32, "docsL2vpnIdx"},
    docsl2vpnindextoidid{YType::str, "docsL2vpnIndexToIdId"}
{

    yang_name = "docsL2vpnIndexToIdEntry"; yang_parent_name = "docsL2vpnIndexToIdTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::~DocsL2vpnIndexToIdEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsl2vpnidx.is_set
	|| docsl2vpnindextoidid.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsl2vpnidx.yfilter)
	|| ydk::is_set(docsl2vpnindextoidid.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnIndexToIdTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnIndexToIdEntry";
    ADD_KEY_TOKEN(docsl2vpnidx, "docsL2vpnIdx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsl2vpnidx.is_set || is_set(docsl2vpnidx.yfilter)) leaf_name_data.push_back(docsl2vpnidx.get_name_leafdata());
    if (docsl2vpnindextoidid.is_set || is_set(docsl2vpnindextoidid.yfilter)) leaf_name_data.push_back(docsl2vpnindextoidid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx = value;
        docsl2vpnidx.value_namespace = name_space;
        docsl2vpnidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnIndexToIdId")
    {
        docsl2vpnindextoidid = value;
        docsl2vpnindextoidid.value_namespace = name_space;
        docsl2vpnindextoidid.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnIndexToIdId")
    {
        docsl2vpnindextoidid.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnIdx" || name == "docsL2vpnIndexToIdId")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmTable()
    :
    docsl2vpncmentry(this, {"docsifcmtscmstatusindex"})
{

    yang_name = "docsL2vpnCmTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnCmTable::~DocsL2vpnCmTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnCmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpncmentry.len(); index++)
    {
        if(docsl2vpncmentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnCmTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpncmentry.len(); index++)
    {
        if(docsl2vpncmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnCmTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnCmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnCmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnCmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnCmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnCmEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry>();
        c->parent = this;
        docsl2vpncmentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnCmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpncmentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnCmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnCmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnCmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnCmEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::DocsL2vpnCmEntry()
    :
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    docsl2vpncmcompliantcapability{YType::boolean, "docsL2vpnCmCompliantCapability"},
    docsl2vpncmdutfilteringcapability{YType::boolean, "docsL2vpnCmDutFilteringCapability"},
    docsl2vpncmdutcmim{YType::str, "docsL2vpnCmDutCMIM"},
    docsl2vpncmdhcpsnooping{YType::bits, "docsL2vpnCmDhcpSnooping"}
{

    yang_name = "docsL2vpnCmEntry"; yang_parent_name = "docsL2vpnCmTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::~DocsL2vpnCmEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtscmstatusindex.is_set
	|| docsl2vpncmcompliantcapability.is_set
	|| docsl2vpncmdutfilteringcapability.is_set
	|| docsl2vpncmdutcmim.is_set
	|| docsl2vpncmdhcpsnooping.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(docsl2vpncmcompliantcapability.yfilter)
	|| ydk::is_set(docsl2vpncmdutfilteringcapability.yfilter)
	|| ydk::is_set(docsl2vpncmdutcmim.yfilter)
	|| ydk::is_set(docsl2vpncmdhcpsnooping.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnCmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnCmEntry";
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (docsl2vpncmcompliantcapability.is_set || is_set(docsl2vpncmcompliantcapability.yfilter)) leaf_name_data.push_back(docsl2vpncmcompliantcapability.get_name_leafdata());
    if (docsl2vpncmdutfilteringcapability.is_set || is_set(docsl2vpncmdutfilteringcapability.yfilter)) leaf_name_data.push_back(docsl2vpncmdutfilteringcapability.get_name_leafdata());
    if (docsl2vpncmdutcmim.is_set || is_set(docsl2vpncmdutcmim.yfilter)) leaf_name_data.push_back(docsl2vpncmdutcmim.get_name_leafdata());
    if (docsl2vpncmdhcpsnooping.is_set || is_set(docsl2vpncmdhcpsnooping.yfilter)) leaf_name_data.push_back(docsl2vpncmdhcpsnooping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmCompliantCapability")
    {
        docsl2vpncmcompliantcapability = value;
        docsl2vpncmcompliantcapability.value_namespace = name_space;
        docsl2vpncmcompliantcapability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmDutFilteringCapability")
    {
        docsl2vpncmdutfilteringcapability = value;
        docsl2vpncmdutfilteringcapability.value_namespace = name_space;
        docsl2vpncmdutfilteringcapability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmDutCMIM")
    {
        docsl2vpncmdutcmim = value;
        docsl2vpncmdutcmim.value_namespace = name_space;
        docsl2vpncmdutcmim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmDhcpSnooping")
    {
        docsl2vpncmdhcpsnooping[value] = true;
    }
}

void DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmCompliantCapability")
    {
        docsl2vpncmcompliantcapability.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmDutFilteringCapability")
    {
        docsl2vpncmdutfilteringcapability.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmDutCMIM")
    {
        docsl2vpncmdutcmim.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmDhcpSnooping")
    {
        docsl2vpncmdhcpsnooping.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmStatusIndex" || name == "docsL2vpnCmCompliantCapability" || name == "docsL2vpnCmDutFilteringCapability" || name == "docsL2vpnCmDutCMIM" || name == "docsL2vpnCmDhcpSnooping")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmTable()
    :
    docsl2vpnvpncmentry(this, {"docsl2vpnidx", "docsifcmtscmstatusindex"})
{

    yang_name = "docsL2vpnVpnCmTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnVpnCmTable::~DocsL2vpnVpnCmTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpnvpncmentry.len(); index++)
    {
        if(docsl2vpnvpncmentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpnvpncmentry.len(); index++)
    {
        if(docsl2vpnvpncmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnVpnCmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnVpnCmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnVpnCmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnVpnCmEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry>();
        c->parent = this;
        docsl2vpnvpncmentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnVpnCmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpnvpncmentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnVpnCmEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::DocsL2vpnVpnCmEntry()
    :
    docsl2vpnidx{YType::str, "docsL2vpnIdx"},
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    docsl2vpnvpncmcmim{YType::bits, "docsL2vpnVpnCmCMIM"},
    docsl2vpnvpncmindividualsaid{YType::int32, "docsL2vpnVpnCmIndividualSAId"},
    docsl2vpnvpncmvendorspecific{YType::str, "docsL2vpnVpnCmVendorSpecific"}
{

    yang_name = "docsL2vpnVpnCmEntry"; yang_parent_name = "docsL2vpnVpnCmTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::~DocsL2vpnVpnCmEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsl2vpnidx.is_set
	|| docsifcmtscmstatusindex.is_set
	|| docsl2vpnvpncmcmim.is_set
	|| docsl2vpnvpncmindividualsaid.is_set
	|| docsl2vpnvpncmvendorspecific.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsl2vpnidx.yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(docsl2vpnvpncmcmim.yfilter)
	|| ydk::is_set(docsl2vpnvpncmindividualsaid.yfilter)
	|| ydk::is_set(docsl2vpnvpncmvendorspecific.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnVpnCmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnVpnCmEntry";
    ADD_KEY_TOKEN(docsl2vpnidx, "docsL2vpnIdx");
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsl2vpnidx.is_set || is_set(docsl2vpnidx.yfilter)) leaf_name_data.push_back(docsl2vpnidx.get_name_leafdata());
    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (docsl2vpnvpncmcmim.is_set || is_set(docsl2vpnvpncmcmim.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmcmim.get_name_leafdata());
    if (docsl2vpnvpncmindividualsaid.is_set || is_set(docsl2vpnvpncmindividualsaid.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmindividualsaid.get_name_leafdata());
    if (docsl2vpnvpncmvendorspecific.is_set || is_set(docsl2vpnvpncmvendorspecific.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmvendorspecific.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx = value;
        docsl2vpnidx.value_namespace = name_space;
        docsl2vpnidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnVpnCmCMIM")
    {
        docsl2vpnvpncmcmim[value] = true;
    }
    if(value_path == "docsL2vpnVpnCmIndividualSAId")
    {
        docsl2vpnvpncmindividualsaid = value;
        docsl2vpnvpncmindividualsaid.value_namespace = name_space;
        docsl2vpnvpncmindividualsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnVpnCmVendorSpecific")
    {
        docsl2vpnvpncmvendorspecific = value;
        docsl2vpnvpncmvendorspecific.value_namespace = name_space;
        docsl2vpnvpncmvendorspecific.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmCMIM")
    {
        docsl2vpnvpncmcmim.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmIndividualSAId")
    {
        docsl2vpnvpncmindividualsaid.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmVendorSpecific")
    {
        docsl2vpnvpncmvendorspecific.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnIdx" || name == "docsIfCmtsCmStatusIndex" || name == "docsL2vpnVpnCmCMIM" || name == "docsL2vpnVpnCmIndividualSAId" || name == "docsL2vpnVpnCmVendorSpecific")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsTable()
    :
    docsl2vpnvpncmstatsentry(this, {"docsl2vpnidx", "docsifcmtscmstatusindex"})
{

    yang_name = "docsL2vpnVpnCmStatsTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::~DocsL2vpnVpnCmStatsTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpnvpncmstatsentry.len(); index++)
    {
        if(docsl2vpnvpncmstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpnvpncmstatsentry.len(); index++)
    {
        if(docsl2vpnvpncmstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnVpnCmStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnVpnCmStatsEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry>();
        c->parent = this;
        docsl2vpnvpncmstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpnvpncmstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnVpnCmStatsEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::DocsL2vpnVpnCmStatsEntry()
    :
    docsl2vpnidx{YType::str, "docsL2vpnIdx"},
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    docsl2vpnvpncmstatsupstreampkts{YType::uint32, "docsL2vpnVpnCmStatsUpstreamPkts"},
    docsl2vpnvpncmstatsupstreambytes{YType::uint32, "docsL2vpnVpnCmStatsUpstreamBytes"},
    docsl2vpnvpncmstatsupstreamdiscards{YType::uint32, "docsL2vpnVpnCmStatsUpstreamDiscards"},
    docsl2vpnvpncmstatsdownstreampkts{YType::uint32, "docsL2vpnVpnCmStatsDownstreamPkts"},
    docsl2vpnvpncmstatsdownstreambytes{YType::uint32, "docsL2vpnVpnCmStatsDownstreamBytes"},
    docsl2vpnvpncmstatsdownstreamdiscards{YType::uint32, "docsL2vpnVpnCmStatsDownstreamDiscards"}
{

    yang_name = "docsL2vpnVpnCmStatsEntry"; yang_parent_name = "docsL2vpnVpnCmStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::~DocsL2vpnVpnCmStatsEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsl2vpnidx.is_set
	|| docsifcmtscmstatusindex.is_set
	|| docsl2vpnvpncmstatsupstreampkts.is_set
	|| docsl2vpnvpncmstatsupstreambytes.is_set
	|| docsl2vpnvpncmstatsupstreamdiscards.is_set
	|| docsl2vpnvpncmstatsdownstreampkts.is_set
	|| docsl2vpnvpncmstatsdownstreambytes.is_set
	|| docsl2vpnvpncmstatsdownstreamdiscards.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsl2vpnidx.yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(docsl2vpnvpncmstatsupstreampkts.yfilter)
	|| ydk::is_set(docsl2vpnvpncmstatsupstreambytes.yfilter)
	|| ydk::is_set(docsl2vpnvpncmstatsupstreamdiscards.yfilter)
	|| ydk::is_set(docsl2vpnvpncmstatsdownstreampkts.yfilter)
	|| ydk::is_set(docsl2vpnvpncmstatsdownstreambytes.yfilter)
	|| ydk::is_set(docsl2vpnvpncmstatsdownstreamdiscards.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnVpnCmStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnVpnCmStatsEntry";
    ADD_KEY_TOKEN(docsl2vpnidx, "docsL2vpnIdx");
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsl2vpnidx.is_set || is_set(docsl2vpnidx.yfilter)) leaf_name_data.push_back(docsl2vpnidx.get_name_leafdata());
    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (docsl2vpnvpncmstatsupstreampkts.is_set || is_set(docsl2vpnvpncmstatsupstreampkts.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmstatsupstreampkts.get_name_leafdata());
    if (docsl2vpnvpncmstatsupstreambytes.is_set || is_set(docsl2vpnvpncmstatsupstreambytes.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmstatsupstreambytes.get_name_leafdata());
    if (docsl2vpnvpncmstatsupstreamdiscards.is_set || is_set(docsl2vpnvpncmstatsupstreamdiscards.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmstatsupstreamdiscards.get_name_leafdata());
    if (docsl2vpnvpncmstatsdownstreampkts.is_set || is_set(docsl2vpnvpncmstatsdownstreampkts.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmstatsdownstreampkts.get_name_leafdata());
    if (docsl2vpnvpncmstatsdownstreambytes.is_set || is_set(docsl2vpnvpncmstatsdownstreambytes.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmstatsdownstreambytes.get_name_leafdata());
    if (docsl2vpnvpncmstatsdownstreamdiscards.is_set || is_set(docsl2vpnvpncmstatsdownstreamdiscards.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmstatsdownstreamdiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx = value;
        docsl2vpnidx.value_namespace = name_space;
        docsl2vpnidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnVpnCmStatsUpstreamPkts")
    {
        docsl2vpnvpncmstatsupstreampkts = value;
        docsl2vpnvpncmstatsupstreampkts.value_namespace = name_space;
        docsl2vpnvpncmstatsupstreampkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnVpnCmStatsUpstreamBytes")
    {
        docsl2vpnvpncmstatsupstreambytes = value;
        docsl2vpnvpncmstatsupstreambytes.value_namespace = name_space;
        docsl2vpnvpncmstatsupstreambytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnVpnCmStatsUpstreamDiscards")
    {
        docsl2vpnvpncmstatsupstreamdiscards = value;
        docsl2vpnvpncmstatsupstreamdiscards.value_namespace = name_space;
        docsl2vpnvpncmstatsupstreamdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnVpnCmStatsDownstreamPkts")
    {
        docsl2vpnvpncmstatsdownstreampkts = value;
        docsl2vpnvpncmstatsdownstreampkts.value_namespace = name_space;
        docsl2vpnvpncmstatsdownstreampkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnVpnCmStatsDownstreamBytes")
    {
        docsl2vpnvpncmstatsdownstreambytes = value;
        docsl2vpnvpncmstatsdownstreambytes.value_namespace = name_space;
        docsl2vpnvpncmstatsdownstreambytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnVpnCmStatsDownstreamDiscards")
    {
        docsl2vpnvpncmstatsdownstreamdiscards = value;
        docsl2vpnvpncmstatsdownstreamdiscards.value_namespace = name_space;
        docsl2vpnvpncmstatsdownstreamdiscards.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmStatsUpstreamPkts")
    {
        docsl2vpnvpncmstatsupstreampkts.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmStatsUpstreamBytes")
    {
        docsl2vpnvpncmstatsupstreambytes.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmStatsUpstreamDiscards")
    {
        docsl2vpnvpncmstatsupstreamdiscards.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmStatsDownstreamPkts")
    {
        docsl2vpnvpncmstatsdownstreampkts.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmStatsDownstreamBytes")
    {
        docsl2vpnvpncmstatsdownstreambytes.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmStatsDownstreamDiscards")
    {
        docsl2vpnvpncmstatsdownstreamdiscards.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnIdx" || name == "docsIfCmtsCmStatusIndex" || name == "docsL2vpnVpnCmStatsUpstreamPkts" || name == "docsL2vpnVpnCmStatsUpstreamBytes" || name == "docsL2vpnVpnCmStatsUpstreamDiscards" || name == "docsL2vpnVpnCmStatsDownstreamPkts" || name == "docsL2vpnVpnCmStatsDownstreamBytes" || name == "docsL2vpnVpnCmStatsDownstreamDiscards")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusTable()
    :
    docsl2vpnportstatusentry(this, {"dot1dbaseport", "docsl2vpnidx"})
{

    yang_name = "docsL2vpnPortStatusTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnPortStatusTable::~DocsL2vpnPortStatusTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnPortStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpnportstatusentry.len(); index++)
    {
        if(docsl2vpnportstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnPortStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpnportstatusentry.len(); index++)
    {
        if(docsl2vpnportstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnPortStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnPortStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnPortStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnPortStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnPortStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnPortStatusEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry>();
        c->parent = this;
        docsl2vpnportstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnPortStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpnportstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnPortStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnPortStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnPortStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnPortStatusEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::DocsL2vpnPortStatusEntry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    docsl2vpnidx{YType::str, "docsL2vpnIdx"},
    docsl2vpnportstatusgroupsaid{YType::int32, "docsL2vpnPortStatusGroupSAId"}
{

    yang_name = "docsL2vpnPortStatusEntry"; yang_parent_name = "docsL2vpnPortStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::~DocsL2vpnPortStatusEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dbaseport.is_set
	|| docsl2vpnidx.is_set
	|| docsl2vpnportstatusgroupsaid.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(docsl2vpnidx.yfilter)
	|| ydk::is_set(docsl2vpnportstatusgroupsaid.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnPortStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnPortStatusEntry";
    ADD_KEY_TOKEN(dot1dbaseport, "dot1dBasePort");
    ADD_KEY_TOKEN(docsl2vpnidx, "docsL2vpnIdx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (docsl2vpnidx.is_set || is_set(docsl2vpnidx.yfilter)) leaf_name_data.push_back(docsl2vpnidx.get_name_leafdata());
    if (docsl2vpnportstatusgroupsaid.is_set || is_set(docsl2vpnportstatusgroupsaid.yfilter)) leaf_name_data.push_back(docsl2vpnportstatusgroupsaid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
        dot1dbaseport.value_namespace = name_space;
        dot1dbaseport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx = value;
        docsl2vpnidx.value_namespace = name_space;
        docsl2vpnidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnPortStatusGroupSAId")
    {
        docsl2vpnportstatusgroupsaid = value;
        docsl2vpnportstatusgroupsaid.value_namespace = name_space;
        docsl2vpnportstatusgroupsaid.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnPortStatusGroupSAId")
    {
        docsl2vpnportstatusgroupsaid.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "docsL2vpnIdx" || name == "docsL2vpnPortStatusGroupSAId")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusTable()
    :
    docsl2vpnsfstatusentry(this, {"ifindex", "docsqosserviceflowid"})
{

    yang_name = "docsL2vpnSfStatusTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnSfStatusTable::~DocsL2vpnSfStatusTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnSfStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpnsfstatusentry.len(); index++)
    {
        if(docsl2vpnsfstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnSfStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpnsfstatusentry.len(); index++)
    {
        if(docsl2vpnsfstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnSfStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnSfStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnSfStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnSfStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnSfStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnSfStatusEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry>();
        c->parent = this;
        docsl2vpnsfstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnSfStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpnsfstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnSfStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnSfStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnSfStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnSfStatusEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::DocsL2vpnSfStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsqosserviceflowid{YType::str, "docsQosServiceFlowId"},
    docsl2vpnsfstatusl2vpnid{YType::str, "docsL2vpnSfStatusL2vpnId"},
    docsl2vpnsfstatusingressuserpriority{YType::uint32, "docsL2vpnSfStatusIngressUserPriority"},
    docsl2vpnsfstatusvendorspecific{YType::str, "docsL2vpnSfStatusVendorSpecific"}
{

    yang_name = "docsL2vpnSfStatusEntry"; yang_parent_name = "docsL2vpnSfStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::~DocsL2vpnSfStatusEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsqosserviceflowid.is_set
	|| docsl2vpnsfstatusl2vpnid.is_set
	|| docsl2vpnsfstatusingressuserpriority.is_set
	|| docsl2vpnsfstatusvendorspecific.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsqosserviceflowid.yfilter)
	|| ydk::is_set(docsl2vpnsfstatusl2vpnid.yfilter)
	|| ydk::is_set(docsl2vpnsfstatusingressuserpriority.yfilter)
	|| ydk::is_set(docsl2vpnsfstatusvendorspecific.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnSfStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnSfStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsqosserviceflowid, "docsQosServiceFlowId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsqosserviceflowid.is_set || is_set(docsqosserviceflowid.yfilter)) leaf_name_data.push_back(docsqosserviceflowid.get_name_leafdata());
    if (docsl2vpnsfstatusl2vpnid.is_set || is_set(docsl2vpnsfstatusl2vpnid.yfilter)) leaf_name_data.push_back(docsl2vpnsfstatusl2vpnid.get_name_leafdata());
    if (docsl2vpnsfstatusingressuserpriority.is_set || is_set(docsl2vpnsfstatusingressuserpriority.yfilter)) leaf_name_data.push_back(docsl2vpnsfstatusingressuserpriority.get_name_leafdata());
    if (docsl2vpnsfstatusvendorspecific.is_set || is_set(docsl2vpnsfstatusvendorspecific.yfilter)) leaf_name_data.push_back(docsl2vpnsfstatusvendorspecific.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid = value;
        docsqosserviceflowid.value_namespace = name_space;
        docsqosserviceflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnSfStatusL2vpnId")
    {
        docsl2vpnsfstatusl2vpnid = value;
        docsl2vpnsfstatusl2vpnid.value_namespace = name_space;
        docsl2vpnsfstatusl2vpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnSfStatusIngressUserPriority")
    {
        docsl2vpnsfstatusingressuserpriority = value;
        docsl2vpnsfstatusingressuserpriority.value_namespace = name_space;
        docsl2vpnsfstatusingressuserpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnSfStatusVendorSpecific")
    {
        docsl2vpnsfstatusvendorspecific = value;
        docsl2vpnsfstatusvendorspecific.value_namespace = name_space;
        docsl2vpnsfstatusvendorspecific.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnSfStatusL2vpnId")
    {
        docsl2vpnsfstatusl2vpnid.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnSfStatusIngressUserPriority")
    {
        docsl2vpnsfstatusingressuserpriority.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnSfStatusVendorSpecific")
    {
        docsl2vpnsfstatusvendorspecific.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsQosServiceFlowId" || name == "docsL2vpnSfStatusL2vpnId" || name == "docsL2vpnSfStatusIngressUserPriority" || name == "docsL2vpnSfStatusVendorSpecific")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassTable()
    :
    docsl2vpnpktclassentry(this, {"ifindex", "docsqosserviceflowid", "docsqospktclassid"})
{

    yang_name = "docsL2vpnPktClassTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnPktClassTable::~DocsL2vpnPktClassTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnPktClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpnpktclassentry.len(); index++)
    {
        if(docsl2vpnpktclassentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnPktClassTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpnpktclassentry.len(); index++)
    {
        if(docsl2vpnpktclassentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnPktClassTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnPktClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnPktClassTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnPktClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnPktClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnPktClassEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry>();
        c->parent = this;
        docsl2vpnpktclassentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnPktClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpnpktclassentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnPktClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnPktClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnPktClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnPktClassEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::DocsL2vpnPktClassEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsqosserviceflowid{YType::str, "docsQosServiceFlowId"},
    docsqospktclassid{YType::str, "docsQosPktClassId"},
    docsl2vpnpktclassl2vpnid{YType::str, "docsL2vpnPktClassL2vpnId"},
    docsl2vpnpktclassuserprirangelow{YType::uint32, "docsL2vpnPktClassUserPriRangeLow"},
    docsl2vpnpktclassuserprirangehigh{YType::uint32, "docsL2vpnPktClassUserPriRangeHigh"},
    docsl2vpnpktclasscmim{YType::bits, "docsL2vpnPktClassCMIM"},
    docsl2vpnpktclassvendorspecific{YType::str, "docsL2vpnPktClassVendorSpecific"}
{

    yang_name = "docsL2vpnPktClassEntry"; yang_parent_name = "docsL2vpnPktClassTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::~DocsL2vpnPktClassEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsqosserviceflowid.is_set
	|| docsqospktclassid.is_set
	|| docsl2vpnpktclassl2vpnid.is_set
	|| docsl2vpnpktclassuserprirangelow.is_set
	|| docsl2vpnpktclassuserprirangehigh.is_set
	|| docsl2vpnpktclasscmim.is_set
	|| docsl2vpnpktclassvendorspecific.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsqosserviceflowid.yfilter)
	|| ydk::is_set(docsqospktclassid.yfilter)
	|| ydk::is_set(docsl2vpnpktclassl2vpnid.yfilter)
	|| ydk::is_set(docsl2vpnpktclassuserprirangelow.yfilter)
	|| ydk::is_set(docsl2vpnpktclassuserprirangehigh.yfilter)
	|| ydk::is_set(docsl2vpnpktclasscmim.yfilter)
	|| ydk::is_set(docsl2vpnpktclassvendorspecific.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnPktClassTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnPktClassEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsqosserviceflowid, "docsQosServiceFlowId");
    ADD_KEY_TOKEN(docsqospktclassid, "docsQosPktClassId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsqosserviceflowid.is_set || is_set(docsqosserviceflowid.yfilter)) leaf_name_data.push_back(docsqosserviceflowid.get_name_leafdata());
    if (docsqospktclassid.is_set || is_set(docsqospktclassid.yfilter)) leaf_name_data.push_back(docsqospktclassid.get_name_leafdata());
    if (docsl2vpnpktclassl2vpnid.is_set || is_set(docsl2vpnpktclassl2vpnid.yfilter)) leaf_name_data.push_back(docsl2vpnpktclassl2vpnid.get_name_leafdata());
    if (docsl2vpnpktclassuserprirangelow.is_set || is_set(docsl2vpnpktclassuserprirangelow.yfilter)) leaf_name_data.push_back(docsl2vpnpktclassuserprirangelow.get_name_leafdata());
    if (docsl2vpnpktclassuserprirangehigh.is_set || is_set(docsl2vpnpktclassuserprirangehigh.yfilter)) leaf_name_data.push_back(docsl2vpnpktclassuserprirangehigh.get_name_leafdata());
    if (docsl2vpnpktclasscmim.is_set || is_set(docsl2vpnpktclasscmim.yfilter)) leaf_name_data.push_back(docsl2vpnpktclasscmim.get_name_leafdata());
    if (docsl2vpnpktclassvendorspecific.is_set || is_set(docsl2vpnpktclassvendorspecific.yfilter)) leaf_name_data.push_back(docsl2vpnpktclassvendorspecific.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid = value;
        docsqosserviceflowid.value_namespace = name_space;
        docsqosserviceflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassId")
    {
        docsqospktclassid = value;
        docsqospktclassid.value_namespace = name_space;
        docsqospktclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnPktClassL2vpnId")
    {
        docsl2vpnpktclassl2vpnid = value;
        docsl2vpnpktclassl2vpnid.value_namespace = name_space;
        docsl2vpnpktclassl2vpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnPktClassUserPriRangeLow")
    {
        docsl2vpnpktclassuserprirangelow = value;
        docsl2vpnpktclassuserprirangelow.value_namespace = name_space;
        docsl2vpnpktclassuserprirangelow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnPktClassUserPriRangeHigh")
    {
        docsl2vpnpktclassuserprirangehigh = value;
        docsl2vpnpktclassuserprirangehigh.value_namespace = name_space;
        docsl2vpnpktclassuserprirangehigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnPktClassCMIM")
    {
        docsl2vpnpktclasscmim[value] = true;
    }
    if(value_path == "docsL2vpnPktClassVendorSpecific")
    {
        docsl2vpnpktclassvendorspecific = value;
        docsl2vpnpktclassvendorspecific.value_namespace = name_space;
        docsl2vpnpktclassvendorspecific.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassId")
    {
        docsqospktclassid.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnPktClassL2vpnId")
    {
        docsl2vpnpktclassl2vpnid.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnPktClassUserPriRangeLow")
    {
        docsl2vpnpktclassuserprirangelow.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnPktClassUserPriRangeHigh")
    {
        docsl2vpnpktclassuserprirangehigh.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnPktClassCMIM")
    {
        docsl2vpnpktclasscmim.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnPktClassVendorSpecific")
    {
        docsl2vpnpktclassvendorspecific.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsQosServiceFlowId" || name == "docsQosPktClassId" || name == "docsL2vpnPktClassL2vpnId" || name == "docsL2vpnPktClassUserPriRangeLow" || name == "docsL2vpnPktClassUserPriRangeHigh" || name == "docsL2vpnPktClassCMIM" || name == "docsL2vpnPktClassVendorSpecific")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiTable()
    :
    docsl2vpncmnsientry(this, {"docsl2vpnidx", "docsifcmtscmstatusindex"})
{

    yang_name = "docsL2vpnCmNsiTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnCmNsiTable::~DocsL2vpnCmNsiTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnCmNsiTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpncmnsientry.len(); index++)
    {
        if(docsl2vpncmnsientry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnCmNsiTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpncmnsientry.len(); index++)
    {
        if(docsl2vpncmnsientry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnCmNsiTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnCmNsiTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnCmNsiTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnCmNsiTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnCmNsiTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnCmNsiEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry>();
        c->parent = this;
        docsl2vpncmnsientry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnCmNsiTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpncmnsientry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnCmNsiTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnCmNsiTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnCmNsiTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnCmNsiEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::DocsL2vpnCmNsiEntry()
    :
    docsl2vpnidx{YType::str, "docsL2vpnIdx"},
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    docsl2vpncmnsiencapsubtype{YType::enumeration, "docsL2vpnCmNsiEncapSubtype"},
    docsl2vpncmnsiencapvalue{YType::str, "docsL2vpnCmNsiEncapValue"},
    docsl2vpncmnsiagi{YType::str, "docsL2vpnCmNsiAGI"},
    docsl2vpncmnsisaii{YType::str, "docsL2vpnCmNsiSAII"},
    docsl2vpncmnsitaii{YType::str, "docsL2vpnCmNsiTAII"}
{

    yang_name = "docsL2vpnCmNsiEntry"; yang_parent_name = "docsL2vpnCmNsiTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::~DocsL2vpnCmNsiEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsl2vpnidx.is_set
	|| docsifcmtscmstatusindex.is_set
	|| docsl2vpncmnsiencapsubtype.is_set
	|| docsl2vpncmnsiencapvalue.is_set
	|| docsl2vpncmnsiagi.is_set
	|| docsl2vpncmnsisaii.is_set
	|| docsl2vpncmnsitaii.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsl2vpnidx.yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(docsl2vpncmnsiencapsubtype.yfilter)
	|| ydk::is_set(docsl2vpncmnsiencapvalue.yfilter)
	|| ydk::is_set(docsl2vpncmnsiagi.yfilter)
	|| ydk::is_set(docsl2vpncmnsisaii.yfilter)
	|| ydk::is_set(docsl2vpncmnsitaii.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnCmNsiTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnCmNsiEntry";
    ADD_KEY_TOKEN(docsl2vpnidx, "docsL2vpnIdx");
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsl2vpnidx.is_set || is_set(docsl2vpnidx.yfilter)) leaf_name_data.push_back(docsl2vpnidx.get_name_leafdata());
    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (docsl2vpncmnsiencapsubtype.is_set || is_set(docsl2vpncmnsiencapsubtype.yfilter)) leaf_name_data.push_back(docsl2vpncmnsiencapsubtype.get_name_leafdata());
    if (docsl2vpncmnsiencapvalue.is_set || is_set(docsl2vpncmnsiencapvalue.yfilter)) leaf_name_data.push_back(docsl2vpncmnsiencapvalue.get_name_leafdata());
    if (docsl2vpncmnsiagi.is_set || is_set(docsl2vpncmnsiagi.yfilter)) leaf_name_data.push_back(docsl2vpncmnsiagi.get_name_leafdata());
    if (docsl2vpncmnsisaii.is_set || is_set(docsl2vpncmnsisaii.yfilter)) leaf_name_data.push_back(docsl2vpncmnsisaii.get_name_leafdata());
    if (docsl2vpncmnsitaii.is_set || is_set(docsl2vpncmnsitaii.yfilter)) leaf_name_data.push_back(docsl2vpncmnsitaii.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx = value;
        docsl2vpnidx.value_namespace = name_space;
        docsl2vpnidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmNsiEncapSubtype")
    {
        docsl2vpncmnsiencapsubtype = value;
        docsl2vpncmnsiencapsubtype.value_namespace = name_space;
        docsl2vpncmnsiencapsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmNsiEncapValue")
    {
        docsl2vpncmnsiencapvalue = value;
        docsl2vpncmnsiencapvalue.value_namespace = name_space;
        docsl2vpncmnsiencapvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmNsiAGI")
    {
        docsl2vpncmnsiagi = value;
        docsl2vpncmnsiagi.value_namespace = name_space;
        docsl2vpncmnsiagi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmNsiSAII")
    {
        docsl2vpncmnsisaii = value;
        docsl2vpncmnsisaii.value_namespace = name_space;
        docsl2vpncmnsisaii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmNsiTAII")
    {
        docsl2vpncmnsitaii = value;
        docsl2vpncmnsitaii.value_namespace = name_space;
        docsl2vpncmnsitaii.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmNsiEncapSubtype")
    {
        docsl2vpncmnsiencapsubtype.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmNsiEncapValue")
    {
        docsl2vpncmnsiencapvalue.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmNsiAGI")
    {
        docsl2vpncmnsiagi.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmNsiSAII")
    {
        docsl2vpncmnsisaii.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmNsiTAII")
    {
        docsl2vpncmnsitaii.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnIdx" || name == "docsIfCmtsCmStatusIndex" || name == "docsL2vpnCmNsiEncapSubtype" || name == "docsL2vpnCmNsiEncapValue" || name == "docsL2vpnCmNsiAGI" || name == "docsL2vpnCmNsiSAII" || name == "docsL2vpnCmNsiTAII")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeTable()
    :
    docsl2vpncmvpncpeentry(this, {"docsifcmtscmstatusindex", "docsl2vpnidx", "docsl2vpncmvpncpemacaddress"})
{

    yang_name = "docsL2vpnCmVpnCpeTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::~DocsL2vpnCmVpnCpeTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpncmvpncpeentry.len(); index++)
    {
        if(docsl2vpncmvpncpeentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpncmvpncpeentry.len(); index++)
    {
        if(docsl2vpncmvpncpeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnCmVpnCpeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnCmVpnCpeEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry>();
        c->parent = this;
        docsl2vpncmvpncpeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpncmvpncpeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnCmVpnCpeEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::DocsL2vpnCmVpnCpeEntry()
    :
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    docsl2vpnidx{YType::str, "docsL2vpnIdx"},
    docsl2vpncmvpncpemacaddress{YType::str, "docsL2vpnCmVpnCpeMacAddress"}
{

    yang_name = "docsL2vpnCmVpnCpeEntry"; yang_parent_name = "docsL2vpnCmVpnCpeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::~DocsL2vpnCmVpnCpeEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtscmstatusindex.is_set
	|| docsl2vpnidx.is_set
	|| docsl2vpncmvpncpemacaddress.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(docsl2vpnidx.yfilter)
	|| ydk::is_set(docsl2vpncmvpncpemacaddress.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnCmVpnCpeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnCmVpnCpeEntry";
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    ADD_KEY_TOKEN(docsl2vpnidx, "docsL2vpnIdx");
    ADD_KEY_TOKEN(docsl2vpncmvpncpemacaddress, "docsL2vpnCmVpnCpeMacAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (docsl2vpnidx.is_set || is_set(docsl2vpnidx.yfilter)) leaf_name_data.push_back(docsl2vpnidx.get_name_leafdata());
    if (docsl2vpncmvpncpemacaddress.is_set || is_set(docsl2vpncmvpncpemacaddress.yfilter)) leaf_name_data.push_back(docsl2vpncmvpncpemacaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx = value;
        docsl2vpnidx.value_namespace = name_space;
        docsl2vpnidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnCmVpnCpeMacAddress")
    {
        docsl2vpncmvpncpemacaddress = value;
        docsl2vpncmvpncpemacaddress.value_namespace = name_space;
        docsl2vpncmvpncpemacaddress.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnCmVpnCpeMacAddress")
    {
        docsl2vpncmvpncpemacaddress.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmStatusIndex" || name == "docsL2vpnIdx" || name == "docsL2vpnCmVpnCpeMacAddress")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeTable()
    :
    docsl2vpnvpncmcpeentry(this, {"docsl2vpnidx", "docsifcmtscmstatusindex", "docsl2vpnvpncmcpemacaddress"})
{

    yang_name = "docsL2vpnVpnCmCpeTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::~DocsL2vpnVpnCmCpeTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpnvpncmcpeentry.len(); index++)
    {
        if(docsl2vpnvpncmcpeentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpnvpncmcpeentry.len(); index++)
    {
        if(docsl2vpnvpncmcpeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnVpnCmCpeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnVpnCmCpeEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry>();
        c->parent = this;
        docsl2vpnvpncmcpeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpnvpncmcpeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnVpnCmCpeEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::DocsL2vpnVpnCmCpeEntry()
    :
    docsl2vpnidx{YType::str, "docsL2vpnIdx"},
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    docsl2vpnvpncmcpemacaddress{YType::str, "docsL2vpnVpnCmCpeMacAddress"}
{

    yang_name = "docsL2vpnVpnCmCpeEntry"; yang_parent_name = "docsL2vpnVpnCmCpeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::~DocsL2vpnVpnCmCpeEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsl2vpnidx.is_set
	|| docsifcmtscmstatusindex.is_set
	|| docsl2vpnvpncmcpemacaddress.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsl2vpnidx.yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(docsl2vpnvpncmcpemacaddress.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnVpnCmCpeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnVpnCmCpeEntry";
    ADD_KEY_TOKEN(docsl2vpnidx, "docsL2vpnIdx");
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    ADD_KEY_TOKEN(docsl2vpnvpncmcpemacaddress, "docsL2vpnVpnCmCpeMacAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsl2vpnidx.is_set || is_set(docsl2vpnidx.yfilter)) leaf_name_data.push_back(docsl2vpnidx.get_name_leafdata());
    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (docsl2vpnvpncmcpemacaddress.is_set || is_set(docsl2vpnvpncmcpemacaddress.yfilter)) leaf_name_data.push_back(docsl2vpnvpncmcpemacaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx = value;
        docsl2vpnidx.value_namespace = name_space;
        docsl2vpnidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnVpnCmCpeMacAddress")
    {
        docsl2vpnvpncmcpemacaddress = value;
        docsl2vpnvpncmcpemacaddress.value_namespace = name_space;
        docsl2vpnvpncmcpemacaddress.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsL2vpnIdx")
    {
        docsl2vpnidx.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnVpnCmCpeMacAddress")
    {
        docsl2vpnvpncmcpemacaddress.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnIdx" || name == "docsIfCmtsCmStatusIndex" || name == "docsL2vpnVpnCmCpeMacAddress")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtTable()
    :
    docsl2vpndot1qtpfdbextentry(this, {"dot1qfdbid", "dot1qtpfdbaddress"})
{

    yang_name = "docsL2vpnDot1qTpFdbExtTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::~DocsL2vpnDot1qTpFdbExtTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpndot1qtpfdbextentry.len(); index++)
    {
        if(docsl2vpndot1qtpfdbextentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpndot1qtpfdbextentry.len(); index++)
    {
        if(docsl2vpndot1qtpfdbextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnDot1qTpFdbExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnDot1qTpFdbExtEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry>();
        c->parent = this;
        docsl2vpndot1qtpfdbextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpndot1qtpfdbextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnDot1qTpFdbExtEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::DocsL2vpnDot1qTpFdbExtEntry()
    :
    dot1qfdbid{YType::str, "dot1qFdbId"},
    dot1qtpfdbaddress{YType::str, "dot1qTpFdbAddress"},
    docsl2vpndot1qtpfdbexttransmitpkts{YType::uint32, "docsL2vpnDot1qTpFdbExtTransmitPkts"},
    docsl2vpndot1qtpfdbextreceivepkts{YType::uint32, "docsL2vpnDot1qTpFdbExtReceivePkts"}
{

    yang_name = "docsL2vpnDot1qTpFdbExtEntry"; yang_parent_name = "docsL2vpnDot1qTpFdbExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::~DocsL2vpnDot1qTpFdbExtEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qfdbid.is_set
	|| dot1qtpfdbaddress.is_set
	|| docsl2vpndot1qtpfdbexttransmitpkts.is_set
	|| docsl2vpndot1qtpfdbextreceivepkts.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qfdbid.yfilter)
	|| ydk::is_set(dot1qtpfdbaddress.yfilter)
	|| ydk::is_set(docsl2vpndot1qtpfdbexttransmitpkts.yfilter)
	|| ydk::is_set(docsl2vpndot1qtpfdbextreceivepkts.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnDot1qTpFdbExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnDot1qTpFdbExtEntry";
    ADD_KEY_TOKEN(dot1qfdbid, "dot1qFdbId");
    ADD_KEY_TOKEN(dot1qtpfdbaddress, "dot1qTpFdbAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qfdbid.is_set || is_set(dot1qfdbid.yfilter)) leaf_name_data.push_back(dot1qfdbid.get_name_leafdata());
    if (dot1qtpfdbaddress.is_set || is_set(dot1qtpfdbaddress.yfilter)) leaf_name_data.push_back(dot1qtpfdbaddress.get_name_leafdata());
    if (docsl2vpndot1qtpfdbexttransmitpkts.is_set || is_set(docsl2vpndot1qtpfdbexttransmitpkts.yfilter)) leaf_name_data.push_back(docsl2vpndot1qtpfdbexttransmitpkts.get_name_leafdata());
    if (docsl2vpndot1qtpfdbextreceivepkts.is_set || is_set(docsl2vpndot1qtpfdbextreceivepkts.yfilter)) leaf_name_data.push_back(docsl2vpndot1qtpfdbextreceivepkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qFdbId")
    {
        dot1qfdbid = value;
        dot1qfdbid.value_namespace = name_space;
        dot1qfdbid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpFdbAddress")
    {
        dot1qtpfdbaddress = value;
        dot1qtpfdbaddress.value_namespace = name_space;
        dot1qtpfdbaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnDot1qTpFdbExtTransmitPkts")
    {
        docsl2vpndot1qtpfdbexttransmitpkts = value;
        docsl2vpndot1qtpfdbexttransmitpkts.value_namespace = name_space;
        docsl2vpndot1qtpfdbexttransmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnDot1qTpFdbExtReceivePkts")
    {
        docsl2vpndot1qtpfdbextreceivepkts = value;
        docsl2vpndot1qtpfdbextreceivepkts.value_namespace = name_space;
        docsl2vpndot1qtpfdbextreceivepkts.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qFdbId")
    {
        dot1qfdbid.yfilter = yfilter;
    }
    if(value_path == "dot1qTpFdbAddress")
    {
        dot1qtpfdbaddress.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnDot1qTpFdbExtTransmitPkts")
    {
        docsl2vpndot1qtpfdbexttransmitpkts.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnDot1qTpFdbExtReceivePkts")
    {
        docsl2vpndot1qtpfdbextreceivepkts.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qFdbId" || name == "dot1qTpFdbAddress" || name == "docsL2vpnDot1qTpFdbExtTransmitPkts" || name == "docsL2vpnDot1qTpFdbExtReceivePkts")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtTable()
    :
    docsl2vpndot1qtpgroupextentry(this, {"dot1qvlanindex", "dot1qtpgroupaddress"})
{

    yang_name = "docsL2vpnDot1qTpGroupExtTable"; yang_parent_name = "DOCS-L2VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::~DocsL2vpnDot1qTpGroupExtTable()
{
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsl2vpndot1qtpgroupextentry.len(); index++)
    {
        if(docsl2vpndot1qtpgroupextentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::has_operation() const
{
    for (std::size_t index=0; index<docsl2vpndot1qtpgroupextentry.len(); index++)
    {
        if(docsl2vpndot1qtpgroupextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnDot1qTpGroupExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsL2vpnDot1qTpGroupExtEntry")
    {
        auto c = std::make_shared<DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry>();
        c->parent = this;
        docsl2vpndot1qtpgroupextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsl2vpndot1qtpgroupextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsL2vpnDot1qTpGroupExtEntry")
        return true;
    return false;
}

DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::DocsL2vpnDot1qTpGroupExtEntry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qtpgroupaddress{YType::str, "dot1qTpGroupAddress"},
    docsl2vpndot1qtpgroupexttransmitpkts{YType::uint32, "docsL2vpnDot1qTpGroupExtTransmitPkts"},
    docsl2vpndot1qtpgroupextreceivepkts{YType::uint32, "docsL2vpnDot1qTpGroupExtReceivePkts"}
{

    yang_name = "docsL2vpnDot1qTpGroupExtEntry"; yang_parent_name = "docsL2vpnDot1qTpGroupExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::~DocsL2vpnDot1qTpGroupExtEntry()
{
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qvlanindex.is_set
	|| dot1qtpgroupaddress.is_set
	|| docsl2vpndot1qtpgroupexttransmitpkts.is_set
	|| docsl2vpndot1qtpgroupextreceivepkts.is_set;
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qtpgroupaddress.yfilter)
	|| ydk::is_set(docsl2vpndot1qtpgroupexttransmitpkts.yfilter)
	|| ydk::is_set(docsl2vpndot1qtpgroupextreceivepkts.yfilter);
}

std::string DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-L2VPN-MIB:DOCS-L2VPN-MIB/docsL2vpnDot1qTpGroupExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsL2vpnDot1qTpGroupExtEntry";
    ADD_KEY_TOKEN(dot1qvlanindex, "dot1qVlanIndex");
    ADD_KEY_TOKEN(dot1qtpgroupaddress, "dot1qTpGroupAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qtpgroupaddress.is_set || is_set(dot1qtpgroupaddress.yfilter)) leaf_name_data.push_back(dot1qtpgroupaddress.get_name_leafdata());
    if (docsl2vpndot1qtpgroupexttransmitpkts.is_set || is_set(docsl2vpndot1qtpgroupexttransmitpkts.yfilter)) leaf_name_data.push_back(docsl2vpndot1qtpgroupexttransmitpkts.get_name_leafdata());
    if (docsl2vpndot1qtpgroupextreceivepkts.is_set || is_set(docsl2vpndot1qtpgroupextreceivepkts.yfilter)) leaf_name_data.push_back(docsl2vpndot1qtpgroupextreceivepkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpGroupAddress")
    {
        dot1qtpgroupaddress = value;
        dot1qtpgroupaddress.value_namespace = name_space;
        dot1qtpgroupaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnDot1qTpGroupExtTransmitPkts")
    {
        docsl2vpndot1qtpgroupexttransmitpkts = value;
        docsl2vpndot1qtpgroupexttransmitpkts.value_namespace = name_space;
        docsl2vpndot1qtpgroupexttransmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsL2vpnDot1qTpGroupExtReceivePkts")
    {
        docsl2vpndot1qtpgroupextreceivepkts = value;
        docsl2vpndot1qtpgroupextreceivepkts.value_namespace = name_space;
        docsl2vpndot1qtpgroupextreceivepkts.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qTpGroupAddress")
    {
        dot1qtpgroupaddress.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnDot1qTpGroupExtTransmitPkts")
    {
        docsl2vpndot1qtpgroupexttransmitpkts.yfilter = yfilter;
    }
    if(value_path == "docsL2vpnDot1qTpGroupExtReceivePkts")
    {
        docsl2vpndot1qtpgroupextreceivepkts.yfilter = yfilter;
    }
}

bool DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qTpGroupAddress" || name == "docsL2vpnDot1qTpGroupExtTransmitPkts" || name == "docsL2vpnDot1qTpGroupExtReceivePkts")
        return true;
    return false;
}

const Enum::YLeaf DocsNsiEncapSubtype::other {1, "other"};
const Enum::YLeaf DocsNsiEncapSubtype::ieee8021q {2, "ieee8021q"};
const Enum::YLeaf DocsNsiEncapSubtype::ieee8021ad {3, "ieee8021ad"};
const Enum::YLeaf DocsNsiEncapSubtype::mpls {4, "mpls"};
const Enum::YLeaf DocsNsiEncapSubtype::l2tpv3 {5, "l2tpv3"};


}
}

