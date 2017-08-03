
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_4.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_oper {

MplsLdp::Global::Active::BindingsSummaryAll::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Active::BindingsSummaryAll::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::BindingsSummaryAll::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::BindingsSummaryAll::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::BindingsSummaryAll::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::BindingsSummaryAll::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/bindings-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::BindingsSummaryAll::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::BindingsSummaryAll::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::BindingsSummaryAll::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::BindingsSummaryAll::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::BindingsSummaryAll::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::BindingsSummaryAll::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"}
{
    yang_name = "bind-af"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Active::BindingsSummaryAll::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Active::BindingsSummaryAll::BindAf::has_data() const
{
    return address_family.is_set
	|| binding_local.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set;
}

bool MplsLdp::Global::Active::BindingsSummaryAll::BindAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(binding_local.yfilter)
	|| ydk::is_set(binding_remote.yfilter)
	|| ydk::is_set(binding_total.yfilter)
	|| ydk::is_set(last_lib_update.yfilter)
	|| ydk::is_set(lib_minimum_revision_sent_all.yfilter);
}

std::string MplsLdp::Global::Active::BindingsSummaryAll::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::BindingsSummaryAll::BindAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/bindings-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.yfilter)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.yfilter)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.yfilter)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.yfilter)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.yfilter)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::BindingsSummaryAll::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::BindingsSummaryAll::BindAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::BindingsSummaryAll::BindAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
        binding_local.value_namespace = name_space;
        binding_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
        binding_remote.value_namespace = name_space;
        binding_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
        binding_total.value_namespace = name_space;
        binding_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
        last_lib_update.value_namespace = name_space;
        last_lib_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
        lib_minimum_revision_sent_all.value_namespace = name_space;
        lib_minimum_revision_sent_all.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::BindingsSummaryAll::BindAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "binding-local")
    {
        binding_local.yfilter = yfilter;
    }
    if(value_path == "binding-remote")
    {
        binding_remote.yfilter = yfilter;
    }
    if(value_path == "binding-total")
    {
        binding_total.yfilter = yfilter;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update.yfilter = yfilter;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::BindingsSummaryAll::BindAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "binding-local" || name == "binding-remote" || name == "binding-total" || name == "last-lib-update" || name == "lib-minimum-revision-sent-all")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntries()
{
    yang_name = "ato-mdb-table-entries"; yang_parent_name = "active";
}

MplsLdp::Global::Active::AtoMdbTableEntries::~AtoMdbTableEntries()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::has_data() const
{
    for (std::size_t index=0; index<ato_mdb_table_entry.size(); index++)
    {
        if(ato_mdb_table_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::has_operation() const
{
    for (std::size_t index=0; index<ato_mdb_table_entry.size(); index++)
    {
        if(ato_mdb_table_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ato-mdb-table-entries";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ato-mdb-table-entry")
    {
        for(auto const & c : ato_mdb_table_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry>();
        c->parent = this;
        ato_mdb_table_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ato_mdb_table_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::AtoMdbTableEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ato-mdb-table-entry")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::AtoMdbTableEntry()
    :
    agi{YType::int32, "agi"},
    agi_type{YType::int32, "agi-type"},
    fe_ctype{YType::int32, "fe-ctype"},
    mapping_tlv_count{YType::uint32, "mapping-tlv-count"},
    notification_tlv_count{YType::uint32, "notification-tlv-count"},
    peer_id{YType::str, "peer-id"},
    peer_id_xr{YType::str, "peer-id-xr"},
    pw_id{YType::int32, "pw-id"},
    saii_ac_id{YType::int32, "saii-ac-id"},
    saii_global_id{YType::int32, "saii-global-id"},
    saii_local_id{YType::str, "saii-local-id"},
    saii_prefix{YType::str, "saii-prefix"},
    saii_type{YType::int32, "saii-type"},
    taii_ac_id{YType::int32, "taii-ac-id"},
    taii_global_id{YType::int32, "taii-global-id"},
    taii_local_id{YType::str, "taii-local-id"},
    taii_prefix{YType::str, "taii-prefix"},
    taii_type{YType::int32, "taii-type"}
    	,
    fec_info(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo>())
{
    fec_info->parent = this;

    yang_name = "ato-mdb-table-entry"; yang_parent_name = "ato-mdb-table-entries";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::~AtoMdbTableEntry()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::has_data() const
{
    return agi.is_set
	|| agi_type.is_set
	|| fe_ctype.is_set
	|| mapping_tlv_count.is_set
	|| notification_tlv_count.is_set
	|| peer_id.is_set
	|| peer_id_xr.is_set
	|| pw_id.is_set
	|| saii_ac_id.is_set
	|| saii_global_id.is_set
	|| saii_local_id.is_set
	|| saii_prefix.is_set
	|| saii_type.is_set
	|| taii_ac_id.is_set
	|| taii_global_id.is_set
	|| taii_local_id.is_set
	|| taii_prefix.is_set
	|| taii_type.is_set
	|| (fec_info !=  nullptr && fec_info->has_data());
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agi.yfilter)
	|| ydk::is_set(agi_type.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(mapping_tlv_count.yfilter)
	|| ydk::is_set(notification_tlv_count.yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(peer_id_xr.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(saii_ac_id.yfilter)
	|| ydk::is_set(saii_global_id.yfilter)
	|| ydk::is_set(saii_local_id.yfilter)
	|| ydk::is_set(saii_prefix.yfilter)
	|| ydk::is_set(saii_type.yfilter)
	|| ydk::is_set(taii_ac_id.yfilter)
	|| ydk::is_set(taii_global_id.yfilter)
	|| ydk::is_set(taii_local_id.yfilter)
	|| ydk::is_set(taii_prefix.yfilter)
	|| ydk::is_set(taii_type.yfilter)
	|| (fec_info !=  nullptr && fec_info->has_operation());
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ato-mdb-table-entry";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agi.is_set || is_set(agi.yfilter)) leaf_name_data.push_back(agi.get_name_leafdata());
    if (agi_type.is_set || is_set(agi_type.yfilter)) leaf_name_data.push_back(agi_type.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (mapping_tlv_count.is_set || is_set(mapping_tlv_count.yfilter)) leaf_name_data.push_back(mapping_tlv_count.get_name_leafdata());
    if (notification_tlv_count.is_set || is_set(notification_tlv_count.yfilter)) leaf_name_data.push_back(notification_tlv_count.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (peer_id_xr.is_set || is_set(peer_id_xr.yfilter)) leaf_name_data.push_back(peer_id_xr.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (saii_ac_id.is_set || is_set(saii_ac_id.yfilter)) leaf_name_data.push_back(saii_ac_id.get_name_leafdata());
    if (saii_global_id.is_set || is_set(saii_global_id.yfilter)) leaf_name_data.push_back(saii_global_id.get_name_leafdata());
    if (saii_local_id.is_set || is_set(saii_local_id.yfilter)) leaf_name_data.push_back(saii_local_id.get_name_leafdata());
    if (saii_prefix.is_set || is_set(saii_prefix.yfilter)) leaf_name_data.push_back(saii_prefix.get_name_leafdata());
    if (saii_type.is_set || is_set(saii_type.yfilter)) leaf_name_data.push_back(saii_type.get_name_leafdata());
    if (taii_ac_id.is_set || is_set(taii_ac_id.yfilter)) leaf_name_data.push_back(taii_ac_id.get_name_leafdata());
    if (taii_global_id.is_set || is_set(taii_global_id.yfilter)) leaf_name_data.push_back(taii_global_id.get_name_leafdata());
    if (taii_local_id.is_set || is_set(taii_local_id.yfilter)) leaf_name_data.push_back(taii_local_id.get_name_leafdata());
    if (taii_prefix.is_set || is_set(taii_prefix.yfilter)) leaf_name_data.push_back(taii_prefix.get_name_leafdata());
    if (taii_type.is_set || is_set(taii_type.yfilter)) leaf_name_data.push_back(taii_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-info")
    {
        if(fec_info == nullptr)
        {
            fec_info = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo>();
        }
        return fec_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_info != nullptr)
    {
        children["fec-info"] = fec_info;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agi")
    {
        agi = value;
        agi.value_namespace = name_space;
        agi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agi-type")
    {
        agi_type = value;
        agi_type.value_namespace = name_space;
        agi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-tlv-count")
    {
        mapping_tlv_count = value;
        mapping_tlv_count.value_namespace = name_space;
        mapping_tlv_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-tlv-count")
    {
        notification_tlv_count = value;
        notification_tlv_count.value_namespace = name_space;
        notification_tlv_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id-xr")
    {
        peer_id_xr = value;
        peer_id_xr.value_namespace = name_space;
        peer_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saii-ac-id")
    {
        saii_ac_id = value;
        saii_ac_id.value_namespace = name_space;
        saii_ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saii-global-id")
    {
        saii_global_id = value;
        saii_global_id.value_namespace = name_space;
        saii_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saii-local-id")
    {
        saii_local_id = value;
        saii_local_id.value_namespace = name_space;
        saii_local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saii-prefix")
    {
        saii_prefix = value;
        saii_prefix.value_namespace = name_space;
        saii_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saii-type")
    {
        saii_type = value;
        saii_type.value_namespace = name_space;
        saii_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "taii-ac-id")
    {
        taii_ac_id = value;
        taii_ac_id.value_namespace = name_space;
        taii_ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "taii-global-id")
    {
        taii_global_id = value;
        taii_global_id.value_namespace = name_space;
        taii_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "taii-local-id")
    {
        taii_local_id = value;
        taii_local_id.value_namespace = name_space;
        taii_local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "taii-prefix")
    {
        taii_prefix = value;
        taii_prefix.value_namespace = name_space;
        taii_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "taii-type")
    {
        taii_type = value;
        taii_type.value_namespace = name_space;
        taii_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agi")
    {
        agi.yfilter = yfilter;
    }
    if(value_path == "agi-type")
    {
        agi_type.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "mapping-tlv-count")
    {
        mapping_tlv_count.yfilter = yfilter;
    }
    if(value_path == "notification-tlv-count")
    {
        notification_tlv_count.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "peer-id-xr")
    {
        peer_id_xr.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "saii-ac-id")
    {
        saii_ac_id.yfilter = yfilter;
    }
    if(value_path == "saii-global-id")
    {
        saii_global_id.yfilter = yfilter;
    }
    if(value_path == "saii-local-id")
    {
        saii_local_id.yfilter = yfilter;
    }
    if(value_path == "saii-prefix")
    {
        saii_prefix.yfilter = yfilter;
    }
    if(value_path == "saii-type")
    {
        saii_type.yfilter = yfilter;
    }
    if(value_path == "taii-ac-id")
    {
        taii_ac_id.yfilter = yfilter;
    }
    if(value_path == "taii-global-id")
    {
        taii_global_id.yfilter = yfilter;
    }
    if(value_path == "taii-local-id")
    {
        taii_local_id.yfilter = yfilter;
    }
    if(value_path == "taii-prefix")
    {
        taii_prefix.yfilter = yfilter;
    }
    if(value_path == "taii-type")
    {
        taii_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-info" || name == "agi" || name == "agi-type" || name == "fe-ctype" || name == "mapping-tlv-count" || name == "notification-tlv-count" || name == "peer-id" || name == "peer-id-xr" || name == "pw-id" || name == "saii-ac-id" || name == "saii-global-id" || name == "saii-local-id" || name == "saii-prefix" || name == "saii-type" || name == "taii-ac-id" || name == "taii-global-id" || name == "taii-local-id" || name == "taii-prefix" || name == "taii-type")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::FecInfo()
    :
    fe_ctype{YType::enumeration, "fe-ctype"}
    	,
    fec128(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128>())
	,fec129(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129>())
	,fec130(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130>())
{
    fec128->parent = this;

    fec129->parent = this;

    fec130->parent = this;

    yang_name = "fec-info"; yang_parent_name = "ato-mdb-table-entry";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::~FecInfo()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::has_data() const
{
    return fe_ctype.is_set
	|| (fec128 !=  nullptr && fec128->has_data())
	|| (fec129 !=  nullptr && fec129->has_data())
	|| (fec130 !=  nullptr && fec130->has_data());
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| (fec128 !=  nullptr && fec128->has_operation())
	|| (fec129 !=  nullptr && fec129->has_operation())
	|| (fec130 !=  nullptr && fec130->has_operation());
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec128")
    {
        if(fec128 == nullptr)
        {
            fec128 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128>();
        }
        return fec128;
    }

    if(child_yang_name == "fec129")
    {
        if(fec129 == nullptr)
        {
            fec129 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129>();
        }
        return fec129;
    }

    if(child_yang_name == "fec130")
    {
        if(fec130 == nullptr)
        {
            fec130 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130>();
        }
        return fec130;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec128 != nullptr)
    {
        children["fec128"] = fec128;
    }

    if(fec129 != nullptr)
    {
        children["fec129"] = fec129;
    }

    if(fec130 != nullptr)
    {
        children["fec130"] = fec130;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec128" || name == "fec129" || name == "fec130" || name == "fe-ctype")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::Fec128()
    :
    pseudowire_id{YType::uint32, "pseudowire-id"}
{
    yang_name = "fec128"; yang_parent_name = "fec-info";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::~Fec128()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::has_data() const
{
    return pseudowire_id.is_set;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_id.yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec128";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-id")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Fec129()
    :
    agi(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi>())
	,saii(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii>())
	,taii(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii>())
{
    agi->parent = this;

    saii->parent = this;

    taii->parent = this;

    yang_name = "fec129"; yang_parent_name = "fec-info";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::~Fec129()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::has_data() const
{
    return (agi !=  nullptr && agi->has_data())
	|| (saii !=  nullptr && saii->has_data())
	|| (taii !=  nullptr && taii->has_data());
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::has_operation() const
{
    return is_set(yfilter)
	|| (agi !=  nullptr && agi->has_operation())
	|| (saii !=  nullptr && saii->has_operation())
	|| (taii !=  nullptr && taii->has_operation());
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec129";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agi")
    {
        if(agi == nullptr)
        {
            agi = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi>();
        }
        return agi;
    }

    if(child_yang_name == "saii")
    {
        if(saii == nullptr)
        {
            saii = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii>();
        }
        return saii;
    }

    if(child_yang_name == "taii")
    {
        if(taii == nullptr)
        {
            taii = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii>();
        }
        return taii;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(agi != nullptr)
    {
        children["agi"] = agi;
    }

    if(saii != nullptr)
    {
        children["saii"] = saii;
    }

    if(taii != nullptr)
    {
        children["taii"] = taii;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agi" || name == "saii" || name == "taii")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi()
    :
    agi_type{YType::enumeration, "agi-type"}
    	,
    agi1(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1>())
{
    agi1->parent = this;

    yang_name = "agi"; yang_parent_name = "fec129";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::~Agi()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::has_data() const
{
    return agi_type.is_set
	|| (agi1 !=  nullptr && agi1->has_data());
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agi_type.yfilter)
	|| (agi1 !=  nullptr && agi1->has_operation());
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agi";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agi_type.is_set || is_set(agi_type.yfilter)) leaf_name_data.push_back(agi_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agi1")
    {
        if(agi1 == nullptr)
        {
            agi1 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1>();
        }
        return agi1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(agi1 != nullptr)
    {
        children["agi1"] = agi1;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agi-type")
    {
        agi_type = value;
        agi_type.value_namespace = name_space;
        agi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agi-type")
    {
        agi_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agi1" || name == "agi-type")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::Agi1()
    :
    rd{YType::uint64, "rd"}
{
    yang_name = "agi1"; yang_parent_name = "agi";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::~Agi1()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::has_data() const
{
    return rd.is_set;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agi1";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/agi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Saii()
    :
    aii_type{YType::enumeration, "aii-type"}
    	,
    aii1(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1>())
	,aii2(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2>())
{
    aii1->parent = this;

    aii2->parent = this;

    yang_name = "saii"; yang_parent_name = "fec129";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::~Saii()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::has_data() const
{
    return aii_type.is_set
	|| (aii1 !=  nullptr && aii1->has_data())
	|| (aii2 !=  nullptr && aii2->has_data());
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aii_type.yfilter)
	|| (aii1 !=  nullptr && aii1->has_operation())
	|| (aii2 !=  nullptr && aii2->has_operation());
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saii";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aii_type.is_set || is_set(aii_type.yfilter)) leaf_name_data.push_back(aii_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aii1")
    {
        if(aii1 == nullptr)
        {
            aii1 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1>();
        }
        return aii1;
    }

    if(child_yang_name == "aii2")
    {
        if(aii2 == nullptr)
        {
            aii2 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2>();
        }
        return aii2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aii1 != nullptr)
    {
        children["aii1"] = aii1;
    }

    if(aii2 != nullptr)
    {
        children["aii2"] = aii2;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aii-type")
    {
        aii_type = value;
        aii_type.value_namespace = name_space;
        aii_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aii-type")
    {
        aii_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aii1" || name == "aii2" || name == "aii-type")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::Aii1()
    :
    local_id{YType::str, "local-id"}
{
    yang_name = "aii1"; yang_parent_name = "saii";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::~Aii1()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::has_data() const
{
    return local_id.is_set;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii1";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/saii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::Aii2()
    :
    ac_id{YType::uint32, "ac-id"},
    gobal_id{YType::uint32, "gobal-id"},
    prefix{YType::uint32, "prefix"}
{
    yang_name = "aii2"; yang_parent_name = "saii";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::~Aii2()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::has_data() const
{
    return ac_id.is_set
	|| gobal_id.is_set
	|| prefix.is_set;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(gobal_id.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii2";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/saii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (gobal_id.is_set || is_set(gobal_id.yfilter)) leaf_name_data.push_back(gobal_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gobal-id")
    {
        gobal_id = value;
        gobal_id.value_namespace = name_space;
        gobal_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "gobal-id")
    {
        gobal_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-id" || name == "gobal-id" || name == "prefix")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Taii()
    :
    aii_type{YType::enumeration, "aii-type"}
    	,
    aii1(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1>())
	,aii2(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2>())
{
    aii1->parent = this;

    aii2->parent = this;

    yang_name = "taii"; yang_parent_name = "fec129";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::~Taii()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::has_data() const
{
    return aii_type.is_set
	|| (aii1 !=  nullptr && aii1->has_data())
	|| (aii2 !=  nullptr && aii2->has_data());
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aii_type.yfilter)
	|| (aii1 !=  nullptr && aii1->has_operation())
	|| (aii2 !=  nullptr && aii2->has_operation());
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taii";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aii_type.is_set || is_set(aii_type.yfilter)) leaf_name_data.push_back(aii_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aii1")
    {
        if(aii1 == nullptr)
        {
            aii1 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1>();
        }
        return aii1;
    }

    if(child_yang_name == "aii2")
    {
        if(aii2 == nullptr)
        {
            aii2 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2>();
        }
        return aii2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aii1 != nullptr)
    {
        children["aii1"] = aii1;
    }

    if(aii2 != nullptr)
    {
        children["aii2"] = aii2;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aii-type")
    {
        aii_type = value;
        aii_type.value_namespace = name_space;
        aii_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aii-type")
    {
        aii_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aii1" || name == "aii2" || name == "aii-type")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::Aii1()
    :
    local_id{YType::str, "local-id"}
{
    yang_name = "aii1"; yang_parent_name = "taii";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::~Aii1()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::has_data() const
{
    return local_id.is_set;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii1";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/taii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::Aii2()
    :
    ac_id{YType::uint32, "ac-id"},
    gobal_id{YType::uint32, "gobal-id"},
    prefix{YType::uint32, "prefix"}
{
    yang_name = "aii2"; yang_parent_name = "taii";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::~Aii2()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::has_data() const
{
    return ac_id.is_set
	|| gobal_id.is_set
	|| prefix.is_set;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(gobal_id.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii2";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/taii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (gobal_id.is_set || is_set(gobal_id.yfilter)) leaf_name_data.push_back(gobal_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gobal-id")
    {
        gobal_id = value;
        gobal_id.value_namespace = name_space;
        gobal_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "gobal-id")
    {
        gobal_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-id" || name == "gobal-id" || name == "prefix")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Fec130()
    :
    agi(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi>())
	,saii(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii>())
{
    agi->parent = this;

    saii->parent = this;

    yang_name = "fec130"; yang_parent_name = "fec-info";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::~Fec130()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::has_data() const
{
    return (agi !=  nullptr && agi->has_data())
	|| (saii !=  nullptr && saii->has_data());
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::has_operation() const
{
    return is_set(yfilter)
	|| (agi !=  nullptr && agi->has_operation())
	|| (saii !=  nullptr && saii->has_operation());
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec130";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agi")
    {
        if(agi == nullptr)
        {
            agi = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi>();
        }
        return agi;
    }

    if(child_yang_name == "saii")
    {
        if(saii == nullptr)
        {
            saii = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii>();
        }
        return saii;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(agi != nullptr)
    {
        children["agi"] = agi;
    }

    if(saii != nullptr)
    {
        children["saii"] = saii;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agi" || name == "saii")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi()
    :
    agi_type{YType::enumeration, "agi-type"}
    	,
    agi1(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1>())
{
    agi1->parent = this;

    yang_name = "agi"; yang_parent_name = "fec130";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::~Agi()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::has_data() const
{
    return agi_type.is_set
	|| (agi1 !=  nullptr && agi1->has_data());
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agi_type.yfilter)
	|| (agi1 !=  nullptr && agi1->has_operation());
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agi";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agi_type.is_set || is_set(agi_type.yfilter)) leaf_name_data.push_back(agi_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agi1")
    {
        if(agi1 == nullptr)
        {
            agi1 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1>();
        }
        return agi1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(agi1 != nullptr)
    {
        children["agi1"] = agi1;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agi-type")
    {
        agi_type = value;
        agi_type.value_namespace = name_space;
        agi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agi-type")
    {
        agi_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agi1" || name == "agi-type")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::Agi1()
    :
    rd{YType::uint64, "rd"}
{
    yang_name = "agi1"; yang_parent_name = "agi";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::~Agi1()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::has_data() const
{
    return rd.is_set;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agi1";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/agi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Saii()
    :
    aii_type{YType::enumeration, "aii-type"}
    	,
    aii1(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1>())
	,aii2(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2>())
{
    aii1->parent = this;

    aii2->parent = this;

    yang_name = "saii"; yang_parent_name = "fec130";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::~Saii()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::has_data() const
{
    return aii_type.is_set
	|| (aii1 !=  nullptr && aii1->has_data())
	|| (aii2 !=  nullptr && aii2->has_data());
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aii_type.yfilter)
	|| (aii1 !=  nullptr && aii1->has_operation())
	|| (aii2 !=  nullptr && aii2->has_operation());
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saii";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aii_type.is_set || is_set(aii_type.yfilter)) leaf_name_data.push_back(aii_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aii1")
    {
        if(aii1 == nullptr)
        {
            aii1 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1>();
        }
        return aii1;
    }

    if(child_yang_name == "aii2")
    {
        if(aii2 == nullptr)
        {
            aii2 = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2>();
        }
        return aii2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aii1 != nullptr)
    {
        children["aii1"] = aii1;
    }

    if(aii2 != nullptr)
    {
        children["aii2"] = aii2;
    }

    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aii-type")
    {
        aii_type = value;
        aii_type.value_namespace = name_space;
        aii_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aii-type")
    {
        aii_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aii1" || name == "aii2" || name == "aii-type")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::Aii1()
    :
    local_id{YType::str, "local-id"}
{
    yang_name = "aii1"; yang_parent_name = "saii";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::~Aii1()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::has_data() const
{
    return local_id.is_set;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii1";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/saii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id")
        return true;
    return false;
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::Aii2()
    :
    ac_id{YType::uint32, "ac-id"},
    gobal_id{YType::uint32, "gobal-id"},
    prefix{YType::uint32, "prefix"}
{
    yang_name = "aii2"; yang_parent_name = "saii";
}

MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::~Aii2()
{
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::has_data() const
{
    return ac_id.is_set
	|| gobal_id.is_set
	|| prefix.is_set;
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(gobal_id.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii2";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/saii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (gobal_id.is_set || is_set(gobal_id.yfilter)) leaf_name_data.push_back(gobal_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gobal-id")
    {
        gobal_id = value;
        gobal_id.value_namespace = name_space;
        gobal_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "gobal-id")
    {
        gobal_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-id" || name == "gobal-id" || name == "prefix")
        return true;
    return false;
}

MplsLdp::Global::Active::NsrSummaryAll::NsrSummaryAll()
    :
    sessions(std::make_shared<MplsLdp::Global::Active::NsrSummaryAll::Sessions>())
	,vrf(std::make_shared<MplsLdp::Global::Active::NsrSummaryAll::Vrf>())
{
    sessions->parent = this;

    vrf->parent = this;

    yang_name = "nsr-summary-all"; yang_parent_name = "active";
}

MplsLdp::Global::Active::NsrSummaryAll::~NsrSummaryAll()
{
}

bool MplsLdp::Global::Active::NsrSummaryAll::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::NsrSummaryAll::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::NsrSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-summary-all";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::NsrSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::NsrSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<MplsLdp::Global::Active::NsrSummaryAll::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::NsrSummaryAll::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::NsrSummaryAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::NsrSummaryAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::NsrSummaryAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::NsrSummaryAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "vrf")
        return true;
    return false;
}

MplsLdp::Global::Active::NsrSummaryAll::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "nsr-summary-all";
}

MplsLdp::Global::Active::NsrSummaryAll::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::NsrSummaryAll::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::NsrSummaryAll::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::NsrSummaryAll::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::NsrSummaryAll::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/nsr-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::NsrSummaryAll::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::NsrSummaryAll::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::NsrSummaryAll::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::NsrSummaryAll::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::NsrSummaryAll::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::NsrSummaryAll::Sessions::Sessions()
    :
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    total{YType::uint32, "total"}
{
    yang_name = "sessions"; yang_parent_name = "nsr-summary-all";
}

MplsLdp::Global::Active::NsrSummaryAll::Sessions::~Sessions()
{
}

bool MplsLdp::Global::Active::NsrSummaryAll::Sessions::has_data() const
{
    return nsr_eligible.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_none.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set
	|| nsr_state_wait.is_set
	|| total.is_set;
}

bool MplsLdp::Global::Active::NsrSummaryAll::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_eligible.yfilter)
	|| ydk::is_set(nsr_state_app_wait.yfilter)
	|| ydk::is_set(nsr_state_none.yfilter)
	|| ydk::is_set(nsr_state_operational.yfilter)
	|| ydk::is_set(nsr_state_prepare.yfilter)
	|| ydk::is_set(nsr_state_ready.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase1.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase2.yfilter)
	|| ydk::is_set(nsr_state_wait.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string MplsLdp::Global::Active::NsrSummaryAll::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::NsrSummaryAll::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/nsr-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_eligible.is_set || is_set(nsr_eligible.yfilter)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.yfilter)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.yfilter)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.yfilter)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.yfilter)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.yfilter)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.yfilter)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::NsrSummaryAll::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::NsrSummaryAll::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::NsrSummaryAll::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
        nsr_eligible.value_namespace = name_space;
        nsr_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
        nsr_state_app_wait.value_namespace = name_space;
        nsr_state_app_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
        nsr_state_none.value_namespace = name_space;
        nsr_state_none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
        nsr_state_operational.value_namespace = name_space;
        nsr_state_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
        nsr_state_prepare.value_namespace = name_space;
        nsr_state_prepare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
        nsr_state_ready.value_namespace = name_space;
        nsr_state_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
        nsr_state_tcp_phase1.value_namespace = name_space;
        nsr_state_tcp_phase1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
        nsr_state_tcp_phase2.value_namespace = name_space;
        nsr_state_tcp_phase2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
        nsr_state_wait.value_namespace = name_space;
        nsr_state_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::NsrSummaryAll::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible.yfilter = yfilter;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait.yfilter = yfilter;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none.yfilter = yfilter;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational.yfilter = yfilter;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare.yfilter = yfilter;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2.yfilter = yfilter;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::NsrSummaryAll::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-eligible" || name == "nsr-state-app-wait" || name == "nsr-state-none" || name == "nsr-state-operational" || name == "nsr-state-prepare" || name == "nsr-state-ready" || name == "nsr-state-tcp-phase1" || name == "nsr-state-tcp-phase2" || name == "nsr-state-wait" || name == "total")
        return true;
    return false;
}

MplsLdp::Global::Active::Summary::Summary()
    :
    is_bound_with_atom{YType::boolean, "is-bound-with-atom"},
    is_bound_with_interface_manager{YType::boolean, "is-bound-with-interface-manager"},
    is_bound_with_ip_arm{YType::boolean, "is-bound-with-ip-arm"},
    is_bound_with_ipv4_rib{YType::boolean, "is-bound-with-ipv4-rib"},
    is_bound_with_ipv6_rib{YType::boolean, "is-bound-with-ipv6-rib"},
    is_bound_with_lsd{YType::boolean, "is-bound-with-lsd"},
    is_bound_with_nsr_mate{YType::boolean, "is-bound-with-nsr-mate"},
    is_bound_with_rsi{YType::boolean, "is-bound-with-rsi"},
    is_bound_with_sysdb{YType::boolean, "is-bound-with-sysdb"},
    is_mldp_registered{YType::boolean, "is-mldp-registered"},
    is_nsr_configured{YType::boolean, "is-nsr-configured"},
    is_registered_with_interface_manager{YType::boolean, "is-registered-with-interface-manager"},
    is_registered_with_ipv4_rib{YType::boolean, "is-registered-with-ipv4-rib"},
    is_registered_with_ipv6_rib{YType::boolean, "is-registered-with-ipv6-rib"},
    is_registered_with_lsd{YType::boolean, "is-registered-with-lsd"},
    is_registered_with_sysdb{YType::boolean, "is-registered-with-sysdb"},
    number_of_autocfg_interfaces{YType::uint32, "number-of-autocfg-interfaces"},
    number_of_fwd_ref_interfaces{YType::uint32, "number-of-fwd-ref-interfaces"},
    number_of_interfaces{YType::uint32, "number-of-interfaces"},
    number_of_ipv4rib_tables{YType::uint32, "number-of-ipv4rib-tables"},
    number_of_ipv6rib_tables{YType::uint32, "number-of-ipv6rib-tables"},
    number_of_registered_ipv4rib_tables{YType::uint32, "number-of-registered-ipv4rib-tables"},
    number_of_registered_ipv6rib_tables{YType::uint32, "number-of-registered-ipv6rib-tables"},
    number_of_vrf{YType::uint32, "number-of-vrf"},
    number_of_vrf_oper{YType::uint32, "number-of-vrf-oper"}
    	,
    common(std::make_shared<MplsLdp::Global::Active::Summary::Common>())
{
    common->parent = this;

    yang_name = "summary"; yang_parent_name = "active";
}

MplsLdp::Global::Active::Summary::~Summary()
{
}

bool MplsLdp::Global::Active::Summary::has_data() const
{
    return is_bound_with_atom.is_set
	|| is_bound_with_interface_manager.is_set
	|| is_bound_with_ip_arm.is_set
	|| is_bound_with_ipv4_rib.is_set
	|| is_bound_with_ipv6_rib.is_set
	|| is_bound_with_lsd.is_set
	|| is_bound_with_nsr_mate.is_set
	|| is_bound_with_rsi.is_set
	|| is_bound_with_sysdb.is_set
	|| is_mldp_registered.is_set
	|| is_nsr_configured.is_set
	|| is_registered_with_interface_manager.is_set
	|| is_registered_with_ipv4_rib.is_set
	|| is_registered_with_ipv6_rib.is_set
	|| is_registered_with_lsd.is_set
	|| is_registered_with_sysdb.is_set
	|| number_of_autocfg_interfaces.is_set
	|| number_of_fwd_ref_interfaces.is_set
	|| number_of_interfaces.is_set
	|| number_of_ipv4rib_tables.is_set
	|| number_of_ipv6rib_tables.is_set
	|| number_of_registered_ipv4rib_tables.is_set
	|| number_of_registered_ipv6rib_tables.is_set
	|| number_of_vrf.is_set
	|| number_of_vrf_oper.is_set
	|| (common !=  nullptr && common->has_data());
}

bool MplsLdp::Global::Active::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bound_with_atom.yfilter)
	|| ydk::is_set(is_bound_with_interface_manager.yfilter)
	|| ydk::is_set(is_bound_with_ip_arm.yfilter)
	|| ydk::is_set(is_bound_with_ipv4_rib.yfilter)
	|| ydk::is_set(is_bound_with_ipv6_rib.yfilter)
	|| ydk::is_set(is_bound_with_lsd.yfilter)
	|| ydk::is_set(is_bound_with_nsr_mate.yfilter)
	|| ydk::is_set(is_bound_with_rsi.yfilter)
	|| ydk::is_set(is_bound_with_sysdb.yfilter)
	|| ydk::is_set(is_mldp_registered.yfilter)
	|| ydk::is_set(is_nsr_configured.yfilter)
	|| ydk::is_set(is_registered_with_interface_manager.yfilter)
	|| ydk::is_set(is_registered_with_ipv4_rib.yfilter)
	|| ydk::is_set(is_registered_with_ipv6_rib.yfilter)
	|| ydk::is_set(is_registered_with_lsd.yfilter)
	|| ydk::is_set(is_registered_with_sysdb.yfilter)
	|| ydk::is_set(number_of_autocfg_interfaces.yfilter)
	|| ydk::is_set(number_of_fwd_ref_interfaces.yfilter)
	|| ydk::is_set(number_of_interfaces.yfilter)
	|| ydk::is_set(number_of_ipv4rib_tables.yfilter)
	|| ydk::is_set(number_of_ipv6rib_tables.yfilter)
	|| ydk::is_set(number_of_registered_ipv4rib_tables.yfilter)
	|| ydk::is_set(number_of_registered_ipv6rib_tables.yfilter)
	|| ydk::is_set(number_of_vrf.yfilter)
	|| ydk::is_set(number_of_vrf_oper.yfilter)
	|| (common !=  nullptr && common->has_operation());
}

std::string MplsLdp::Global::Active::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bound_with_atom.is_set || is_set(is_bound_with_atom.yfilter)) leaf_name_data.push_back(is_bound_with_atom.get_name_leafdata());
    if (is_bound_with_interface_manager.is_set || is_set(is_bound_with_interface_manager.yfilter)) leaf_name_data.push_back(is_bound_with_interface_manager.get_name_leafdata());
    if (is_bound_with_ip_arm.is_set || is_set(is_bound_with_ip_arm.yfilter)) leaf_name_data.push_back(is_bound_with_ip_arm.get_name_leafdata());
    if (is_bound_with_ipv4_rib.is_set || is_set(is_bound_with_ipv4_rib.yfilter)) leaf_name_data.push_back(is_bound_with_ipv4_rib.get_name_leafdata());
    if (is_bound_with_ipv6_rib.is_set || is_set(is_bound_with_ipv6_rib.yfilter)) leaf_name_data.push_back(is_bound_with_ipv6_rib.get_name_leafdata());
    if (is_bound_with_lsd.is_set || is_set(is_bound_with_lsd.yfilter)) leaf_name_data.push_back(is_bound_with_lsd.get_name_leafdata());
    if (is_bound_with_nsr_mate.is_set || is_set(is_bound_with_nsr_mate.yfilter)) leaf_name_data.push_back(is_bound_with_nsr_mate.get_name_leafdata());
    if (is_bound_with_rsi.is_set || is_set(is_bound_with_rsi.yfilter)) leaf_name_data.push_back(is_bound_with_rsi.get_name_leafdata());
    if (is_bound_with_sysdb.is_set || is_set(is_bound_with_sysdb.yfilter)) leaf_name_data.push_back(is_bound_with_sysdb.get_name_leafdata());
    if (is_mldp_registered.is_set || is_set(is_mldp_registered.yfilter)) leaf_name_data.push_back(is_mldp_registered.get_name_leafdata());
    if (is_nsr_configured.is_set || is_set(is_nsr_configured.yfilter)) leaf_name_data.push_back(is_nsr_configured.get_name_leafdata());
    if (is_registered_with_interface_manager.is_set || is_set(is_registered_with_interface_manager.yfilter)) leaf_name_data.push_back(is_registered_with_interface_manager.get_name_leafdata());
    if (is_registered_with_ipv4_rib.is_set || is_set(is_registered_with_ipv4_rib.yfilter)) leaf_name_data.push_back(is_registered_with_ipv4_rib.get_name_leafdata());
    if (is_registered_with_ipv6_rib.is_set || is_set(is_registered_with_ipv6_rib.yfilter)) leaf_name_data.push_back(is_registered_with_ipv6_rib.get_name_leafdata());
    if (is_registered_with_lsd.is_set || is_set(is_registered_with_lsd.yfilter)) leaf_name_data.push_back(is_registered_with_lsd.get_name_leafdata());
    if (is_registered_with_sysdb.is_set || is_set(is_registered_with_sysdb.yfilter)) leaf_name_data.push_back(is_registered_with_sysdb.get_name_leafdata());
    if (number_of_autocfg_interfaces.is_set || is_set(number_of_autocfg_interfaces.yfilter)) leaf_name_data.push_back(number_of_autocfg_interfaces.get_name_leafdata());
    if (number_of_fwd_ref_interfaces.is_set || is_set(number_of_fwd_ref_interfaces.yfilter)) leaf_name_data.push_back(number_of_fwd_ref_interfaces.get_name_leafdata());
    if (number_of_interfaces.is_set || is_set(number_of_interfaces.yfilter)) leaf_name_data.push_back(number_of_interfaces.get_name_leafdata());
    if (number_of_ipv4rib_tables.is_set || is_set(number_of_ipv4rib_tables.yfilter)) leaf_name_data.push_back(number_of_ipv4rib_tables.get_name_leafdata());
    if (number_of_ipv6rib_tables.is_set || is_set(number_of_ipv6rib_tables.yfilter)) leaf_name_data.push_back(number_of_ipv6rib_tables.get_name_leafdata());
    if (number_of_registered_ipv4rib_tables.is_set || is_set(number_of_registered_ipv4rib_tables.yfilter)) leaf_name_data.push_back(number_of_registered_ipv4rib_tables.get_name_leafdata());
    if (number_of_registered_ipv6rib_tables.is_set || is_set(number_of_registered_ipv6rib_tables.yfilter)) leaf_name_data.push_back(number_of_registered_ipv6rib_tables.get_name_leafdata());
    if (number_of_vrf.is_set || is_set(number_of_vrf.yfilter)) leaf_name_data.push_back(number_of_vrf.get_name_leafdata());
    if (number_of_vrf_oper.is_set || is_set(number_of_vrf_oper.yfilter)) leaf_name_data.push_back(number_of_vrf_oper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<MplsLdp::Global::Active::Summary::Common>();
        }
        return common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common != nullptr)
    {
        children["common"] = common;
    }

    return children;
}

void MplsLdp::Global::Active::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bound-with-atom")
    {
        is_bound_with_atom = value;
        is_bound_with_atom.value_namespace = name_space;
        is_bound_with_atom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound-with-interface-manager")
    {
        is_bound_with_interface_manager = value;
        is_bound_with_interface_manager.value_namespace = name_space;
        is_bound_with_interface_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound-with-ip-arm")
    {
        is_bound_with_ip_arm = value;
        is_bound_with_ip_arm.value_namespace = name_space;
        is_bound_with_ip_arm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound-with-ipv4-rib")
    {
        is_bound_with_ipv4_rib = value;
        is_bound_with_ipv4_rib.value_namespace = name_space;
        is_bound_with_ipv4_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound-with-ipv6-rib")
    {
        is_bound_with_ipv6_rib = value;
        is_bound_with_ipv6_rib.value_namespace = name_space;
        is_bound_with_ipv6_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound-with-lsd")
    {
        is_bound_with_lsd = value;
        is_bound_with_lsd.value_namespace = name_space;
        is_bound_with_lsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound-with-nsr-mate")
    {
        is_bound_with_nsr_mate = value;
        is_bound_with_nsr_mate.value_namespace = name_space;
        is_bound_with_nsr_mate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound-with-rsi")
    {
        is_bound_with_rsi = value;
        is_bound_with_rsi.value_namespace = name_space;
        is_bound_with_rsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound-with-sysdb")
    {
        is_bound_with_sysdb = value;
        is_bound_with_sysdb.value_namespace = name_space;
        is_bound_with_sysdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-registered")
    {
        is_mldp_registered = value;
        is_mldp_registered.value_namespace = name_space;
        is_mldp_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-configured")
    {
        is_nsr_configured = value;
        is_nsr_configured.value_namespace = name_space;
        is_nsr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered-with-interface-manager")
    {
        is_registered_with_interface_manager = value;
        is_registered_with_interface_manager.value_namespace = name_space;
        is_registered_with_interface_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered-with-ipv4-rib")
    {
        is_registered_with_ipv4_rib = value;
        is_registered_with_ipv4_rib.value_namespace = name_space;
        is_registered_with_ipv4_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered-with-ipv6-rib")
    {
        is_registered_with_ipv6_rib = value;
        is_registered_with_ipv6_rib.value_namespace = name_space;
        is_registered_with_ipv6_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered-with-lsd")
    {
        is_registered_with_lsd = value;
        is_registered_with_lsd.value_namespace = name_space;
        is_registered_with_lsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered-with-sysdb")
    {
        is_registered_with_sysdb = value;
        is_registered_with_sysdb.value_namespace = name_space;
        is_registered_with_sysdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-autocfg-interfaces")
    {
        number_of_autocfg_interfaces = value;
        number_of_autocfg_interfaces.value_namespace = name_space;
        number_of_autocfg_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-fwd-ref-interfaces")
    {
        number_of_fwd_ref_interfaces = value;
        number_of_fwd_ref_interfaces.value_namespace = name_space;
        number_of_fwd_ref_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces = value;
        number_of_interfaces.value_namespace = name_space;
        number_of_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4rib-tables")
    {
        number_of_ipv4rib_tables = value;
        number_of_ipv4rib_tables.value_namespace = name_space;
        number_of_ipv4rib_tables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6rib-tables")
    {
        number_of_ipv6rib_tables = value;
        number_of_ipv6rib_tables.value_namespace = name_space;
        number_of_ipv6rib_tables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-registered-ipv4rib-tables")
    {
        number_of_registered_ipv4rib_tables = value;
        number_of_registered_ipv4rib_tables.value_namespace = name_space;
        number_of_registered_ipv4rib_tables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-registered-ipv6rib-tables")
    {
        number_of_registered_ipv6rib_tables = value;
        number_of_registered_ipv6rib_tables.value_namespace = name_space;
        number_of_registered_ipv6rib_tables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-vrf")
    {
        number_of_vrf = value;
        number_of_vrf.value_namespace = name_space;
        number_of_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-vrf-oper")
    {
        number_of_vrf_oper = value;
        number_of_vrf_oper.value_namespace = name_space;
        number_of_vrf_oper.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bound-with-atom")
    {
        is_bound_with_atom.yfilter = yfilter;
    }
    if(value_path == "is-bound-with-interface-manager")
    {
        is_bound_with_interface_manager.yfilter = yfilter;
    }
    if(value_path == "is-bound-with-ip-arm")
    {
        is_bound_with_ip_arm.yfilter = yfilter;
    }
    if(value_path == "is-bound-with-ipv4-rib")
    {
        is_bound_with_ipv4_rib.yfilter = yfilter;
    }
    if(value_path == "is-bound-with-ipv6-rib")
    {
        is_bound_with_ipv6_rib.yfilter = yfilter;
    }
    if(value_path == "is-bound-with-lsd")
    {
        is_bound_with_lsd.yfilter = yfilter;
    }
    if(value_path == "is-bound-with-nsr-mate")
    {
        is_bound_with_nsr_mate.yfilter = yfilter;
    }
    if(value_path == "is-bound-with-rsi")
    {
        is_bound_with_rsi.yfilter = yfilter;
    }
    if(value_path == "is-bound-with-sysdb")
    {
        is_bound_with_sysdb.yfilter = yfilter;
    }
    if(value_path == "is-mldp-registered")
    {
        is_mldp_registered.yfilter = yfilter;
    }
    if(value_path == "is-nsr-configured")
    {
        is_nsr_configured.yfilter = yfilter;
    }
    if(value_path == "is-registered-with-interface-manager")
    {
        is_registered_with_interface_manager.yfilter = yfilter;
    }
    if(value_path == "is-registered-with-ipv4-rib")
    {
        is_registered_with_ipv4_rib.yfilter = yfilter;
    }
    if(value_path == "is-registered-with-ipv6-rib")
    {
        is_registered_with_ipv6_rib.yfilter = yfilter;
    }
    if(value_path == "is-registered-with-lsd")
    {
        is_registered_with_lsd.yfilter = yfilter;
    }
    if(value_path == "is-registered-with-sysdb")
    {
        is_registered_with_sysdb.yfilter = yfilter;
    }
    if(value_path == "number-of-autocfg-interfaces")
    {
        number_of_autocfg_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-fwd-ref-interfaces")
    {
        number_of_fwd_ref_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4rib-tables")
    {
        number_of_ipv4rib_tables.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6rib-tables")
    {
        number_of_ipv6rib_tables.yfilter = yfilter;
    }
    if(value_path == "number-of-registered-ipv4rib-tables")
    {
        number_of_registered_ipv4rib_tables.yfilter = yfilter;
    }
    if(value_path == "number-of-registered-ipv6rib-tables")
    {
        number_of_registered_ipv6rib_tables.yfilter = yfilter;
    }
    if(value_path == "number-of-vrf")
    {
        number_of_vrf.yfilter = yfilter;
    }
    if(value_path == "number-of-vrf-oper")
    {
        number_of_vrf_oper.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "is-bound-with-atom" || name == "is-bound-with-interface-manager" || name == "is-bound-with-ip-arm" || name == "is-bound-with-ipv4-rib" || name == "is-bound-with-ipv6-rib" || name == "is-bound-with-lsd" || name == "is-bound-with-nsr-mate" || name == "is-bound-with-rsi" || name == "is-bound-with-sysdb" || name == "is-mldp-registered" || name == "is-nsr-configured" || name == "is-registered-with-interface-manager" || name == "is-registered-with-ipv4-rib" || name == "is-registered-with-ipv6-rib" || name == "is-registered-with-lsd" || name == "is-registered-with-sysdb" || name == "number-of-autocfg-interfaces" || name == "number-of-fwd-ref-interfaces" || name == "number-of-interfaces" || name == "number-of-ipv4rib-tables" || name == "number-of-ipv6rib-tables" || name == "number-of-registered-ipv4rib-tables" || name == "number-of-registered-ipv6rib-tables" || name == "number-of-vrf" || name == "number-of-vrf-oper")
        return true;
    return false;
}

MplsLdp::Global::Active::Summary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_bindings_ipv4{YType::uint32, "number-of-bindings-ipv4"},
    number_of_bindings_ipv6{YType::uint32, "number-of-bindings-ipv6"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_ipv4_hello_adj{YType::uint32, "number-of-ipv4-hello-adj"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4af{YType::uint32, "number-of-ipv4af"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ipv6_hello_adj{YType::uint32, "number-of-ipv6-hello-adj"},
    number_of_ipv6_local_addresses{YType::uint32, "number-of-ipv6-local-addresses"},
    number_of_ipv6_routes{YType::uint32, "number-of-ipv6-routes"},
    number_of_ipv6af{YType::uint32, "number-of-ipv6af"},
    number_of_ipv6ldp_interfaces{YType::uint32, "number-of-ipv6ldp-interfaces"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_local_bindings_ipv4{YType::uint32, "number-of-local-bindings-ipv4"},
    number_of_local_bindings_ipv6{YType::uint32, "number-of-local-bindings-ipv6"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_nsr_synced_neighbors{YType::uint32, "number-of-nsr-synced-neighbors"},
    number_of_remote_bindings_ipv4{YType::uint32, "number-of-remote-bindings-ipv4"},
    number_of_remote_bindings_ipv6{YType::uint32, "number-of-remote-bindings-ipv6"}
{
    yang_name = "common"; yang_parent_name = "summary";
}

MplsLdp::Global::Active::Summary::Common::~Common()
{
}

bool MplsLdp::Global::Active::Summary::Common::has_data() const
{
    return address_families.is_set
	|| number_of_bindings_ipv4.is_set
	|| number_of_bindings_ipv6.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_ipv4_hello_adj.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4af.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ipv6_hello_adj.is_set
	|| number_of_ipv6_local_addresses.is_set
	|| number_of_ipv6_routes.is_set
	|| number_of_ipv6af.is_set
	|| number_of_ipv6ldp_interfaces.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_local_bindings_ipv4.is_set
	|| number_of_local_bindings_ipv6.is_set
	|| number_of_neighbors.is_set
	|| number_of_nsr_synced_neighbors.is_set
	|| number_of_remote_bindings_ipv4.is_set
	|| number_of_remote_bindings_ipv6.is_set;
}

bool MplsLdp::Global::Active::Summary::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_families.yfilter)
	|| ydk::is_set(number_of_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_bindings_ipv6.yfilter)
	|| ydk::is_set(number_of_downstream_on_demand_neighbors.yfilter)
	|| ydk::is_set(number_of_graceful_restart_neighbors.yfilter)
	|| ydk::is_set(number_of_ipv4_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv4_local_addresses.yfilter)
	|| ydk::is_set(number_of_ipv4_routes.yfilter)
	|| ydk::is_set(number_of_ipv4af.yfilter)
	|| ydk::is_set(number_of_ipv4ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ipv6_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv6_local_addresses.yfilter)
	|| ydk::is_set(number_of_ipv6_routes.yfilter)
	|| ydk::is_set(number_of_ipv6af.yfilter)
	|| ydk::is_set(number_of_ipv6ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_local_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_local_bindings_ipv6.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter)
	|| ydk::is_set(number_of_nsr_synced_neighbors.yfilter)
	|| ydk::is_set(number_of_remote_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_remote_bindings_ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Summary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Summary::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.yfilter)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_bindings_ipv4.is_set || is_set(number_of_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_bindings_ipv4.get_name_leafdata());
    if (number_of_bindings_ipv6.is_set || is_set(number_of_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_bindings_ipv6.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.yfilter)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.yfilter)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_ipv4_hello_adj.is_set || is_set(number_of_ipv4_hello_adj.yfilter)) leaf_name_data.push_back(number_of_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.yfilter)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4af.is_set || is_set(number_of_ipv4af.yfilter)) leaf_name_data.push_back(number_of_ipv4af.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ipv6_hello_adj.is_set || is_set(number_of_ipv6_hello_adj.yfilter)) leaf_name_data.push_back(number_of_ipv6_hello_adj.get_name_leafdata());
    if (number_of_ipv6_local_addresses.is_set || is_set(number_of_ipv6_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv6_local_addresses.get_name_leafdata());
    if (number_of_ipv6_routes.is_set || is_set(number_of_ipv6_routes.yfilter)) leaf_name_data.push_back(number_of_ipv6_routes.get_name_leafdata());
    if (number_of_ipv6af.is_set || is_set(number_of_ipv6af.yfilter)) leaf_name_data.push_back(number_of_ipv6af.get_name_leafdata());
    if (number_of_ipv6ldp_interfaces.is_set || is_set(number_of_ipv6ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv6ldp_interfaces.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_local_bindings_ipv4.is_set || is_set(number_of_local_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_local_bindings_ipv4.get_name_leafdata());
    if (number_of_local_bindings_ipv6.is_set || is_set(number_of_local_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_local_bindings_ipv6.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_nsr_synced_neighbors.is_set || is_set(number_of_nsr_synced_neighbors.yfilter)) leaf_name_data.push_back(number_of_nsr_synced_neighbors.get_name_leafdata());
    if (number_of_remote_bindings_ipv4.is_set || is_set(number_of_remote_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_remote_bindings_ipv4.get_name_leafdata());
    if (number_of_remote_bindings_ipv6.is_set || is_set(number_of_remote_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_remote_bindings_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Summary::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Summary::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Summary::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-families")
    {
        address_families = value;
        address_families.value_namespace = name_space;
        address_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4 = value;
        number_of_bindings_ipv4.value_namespace = name_space;
        number_of_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6 = value;
        number_of_bindings_ipv6.value_namespace = name_space;
        number_of_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
        number_of_downstream_on_demand_neighbors.value_namespace = name_space;
        number_of_downstream_on_demand_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
        number_of_graceful_restart_neighbors.value_namespace = name_space;
        number_of_graceful_restart_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj = value;
        number_of_ipv4_hello_adj.value_namespace = name_space;
        number_of_ipv4_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
        number_of_ipv4_local_addresses.value_namespace = name_space;
        number_of_ipv4_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
        number_of_ipv4_routes.value_namespace = name_space;
        number_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af = value;
        number_of_ipv4af.value_namespace = name_space;
        number_of_ipv4af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
        number_of_ipv4ldp_interfaces.value_namespace = name_space;
        number_of_ipv4ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj = value;
        number_of_ipv6_hello_adj.value_namespace = name_space;
        number_of_ipv6_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses = value;
        number_of_ipv6_local_addresses.value_namespace = name_space;
        number_of_ipv6_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes = value;
        number_of_ipv6_routes.value_namespace = name_space;
        number_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af = value;
        number_of_ipv6af.value_namespace = name_space;
        number_of_ipv6af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces = value;
        number_of_ipv6ldp_interfaces.value_namespace = name_space;
        number_of_ipv6ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
        number_of_ldp_interfaces.value_namespace = name_space;
        number_of_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4 = value;
        number_of_local_bindings_ipv4.value_namespace = name_space;
        number_of_local_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6 = value;
        number_of_local_bindings_ipv6.value_namespace = name_space;
        number_of_local_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors = value;
        number_of_nsr_synced_neighbors.value_namespace = name_space;
        number_of_nsr_synced_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4 = value;
        number_of_remote_bindings_ipv4.value_namespace = name_space;
        number_of_remote_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6 = value;
        number_of_remote_bindings_ipv6.value_namespace = name_space;
        number_of_remote_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Summary::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-families")
    {
        address_families.yfilter = yfilter;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6.yfilter = yfilter;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Summary::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-families" || name == "number-of-bindings-ipv4" || name == "number-of-bindings-ipv6" || name == "number-of-downstream-on-demand-neighbors" || name == "number-of-graceful-restart-neighbors" || name == "number-of-ipv4-hello-adj" || name == "number-of-ipv4-local-addresses" || name == "number-of-ipv4-routes" || name == "number-of-ipv4af" || name == "number-of-ipv4ldp-interfaces" || name == "number-of-ipv6-hello-adj" || name == "number-of-ipv6-local-addresses" || name == "number-of-ipv6-routes" || name == "number-of-ipv6af" || name == "number-of-ipv6ldp-interfaces" || name == "number-of-ldp-interfaces" || name == "number-of-local-bindings-ipv4" || name == "number-of-local-bindings-ipv6" || name == "number-of-neighbors" || name == "number-of-nsr-synced-neighbors" || name == "number-of-remote-bindings-ipv4" || name == "number-of-remote-bindings-ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "active";
}

MplsLdp::Global::Active::Vrfs::~Vrfs()
{
}

bool MplsLdp::Global::Active::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    afs(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs>())
	,backoff_parameters(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters>())
	,backoffs(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Backoffs>())
	,capabilities(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Capabilities>())
	,graceful_restart(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart>())
	,issu(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Issu>())
	,ldp_id(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::LdpId>())
	,neighbor_briefs(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs>())
	,neighbor_capabilities(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities>())
	,neighbors(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Neighbors>())
	,nsr(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr>())
	,parameters(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Parameters>())
	,statistics(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Statistics>())
	,summary(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Summary>())
{
    afs->parent = this;

    backoff_parameters->parent = this;

    backoffs->parent = this;

    capabilities->parent = this;

    graceful_restart->parent = this;

    issu->parent = this;

    ldp_id->parent = this;

    neighbor_briefs->parent = this;

    neighbor_capabilities->parent = this;

    neighbors->parent = this;

    nsr->parent = this;

    parameters->parent = this;

    statistics->parent = this;

    summary->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsLdp::Global::Active::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_data())
	|| (backoffs !=  nullptr && backoffs->has_data())
	|| (capabilities !=  nullptr && capabilities->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (ldp_id !=  nullptr && ldp_id->has_data())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_data())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (parameters !=  nullptr && parameters->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (afs !=  nullptr && afs->has_operation())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_operation())
	|| (backoffs !=  nullptr && backoffs->has_operation())
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (ldp_id !=  nullptr && ldp_id->has_operation())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_operation())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (parameters !=  nullptr && parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "backoff-parameters")
    {
        if(backoff_parameters == nullptr)
        {
            backoff_parameters = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters>();
        }
        return backoff_parameters;
    }

    if(child_yang_name == "backoffs")
    {
        if(backoffs == nullptr)
        {
            backoffs = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Backoffs>();
        }
        return backoffs;
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Capabilities>();
        }
        return capabilities;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "ldp-id")
    {
        if(ldp_id == nullptr)
        {
            ldp_id = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::LdpId>();
        }
        return ldp_id;
    }

    if(child_yang_name == "neighbor-briefs")
    {
        if(neighbor_briefs == nullptr)
        {
            neighbor_briefs = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs>();
        }
        return neighbor_briefs;
    }

    if(child_yang_name == "neighbor-capabilities")
    {
        if(neighbor_capabilities == nullptr)
        {
            neighbor_capabilities = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities>();
        }
        return neighbor_capabilities;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Parameters>();
        }
        return parameters;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(backoff_parameters != nullptr)
    {
        children["backoff-parameters"] = backoff_parameters;
    }

    if(backoffs != nullptr)
    {
        children["backoffs"] = backoffs;
    }

    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(ldp_id != nullptr)
    {
        children["ldp-id"] = ldp_id;
    }

    if(neighbor_briefs != nullptr)
    {
        children["neighbor-briefs"] = neighbor_briefs;
    }

    if(neighbor_capabilities != nullptr)
    {
        children["neighbor-capabilities"] = neighbor_capabilities;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "backoff-parameters" || name == "backoffs" || name == "capabilities" || name == "graceful-restart" || name == "issu" || name == "ldp-id" || name == "neighbor-briefs" || name == "neighbor-capabilities" || name == "neighbors" || name == "nsr" || name == "parameters" || name == "statistics" || name == "summary" || name == "vrf-name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestart()
    :
    forwarding_state_hold_timer_remaining_seconds{YType::uint32, "forwarding-state-hold-timer-remaining-seconds"},
    is_forwarding_state_hold_timer_running{YType::boolean, "is-forwarding-state-hold-timer-running"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_>())
{
    vrf->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "vrf";
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::has_data() const
{
    for (std::size_t index=0; index<graceful_restartable_neighbor.size(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_data())
            return true;
    }
    return forwarding_state_hold_timer_remaining_seconds.is_set
	|| is_forwarding_state_hold_timer_running.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<graceful_restartable_neighbor.size(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(forwarding_state_hold_timer_remaining_seconds.yfilter)
	|| ydk::is_set(is_forwarding_state_hold_timer_running.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_state_hold_timer_remaining_seconds.is_set || is_set(forwarding_state_hold_timer_remaining_seconds.yfilter)) leaf_name_data.push_back(forwarding_state_hold_timer_remaining_seconds.get_name_leafdata());
    if (is_forwarding_state_hold_timer_running.is_set || is_set(is_forwarding_state_hold_timer_running.yfilter)) leaf_name_data.push_back(is_forwarding_state_hold_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restartable-neighbor")
    {
        for(auto const & c : graceful_restartable_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor>();
        c->parent = this;
        graceful_restartable_neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : graceful_restartable_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds = value;
        forwarding_state_hold_timer_remaining_seconds.value_namespace = name_space;
        forwarding_state_hold_timer_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running = value;
        is_forwarding_state_hold_timer_running.value_namespace = name_space;
        is_forwarding_state_hold_timer_running.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds.yfilter = yfilter;
    }
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restartable-neighbor" || name == "vrf" || name == "forwarding-state-hold-timer-remaining-seconds" || name == "is-forwarding-state-hold-timer-running")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "graceful-restart";
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GracefulRestartableNeighbor()
    :
    connect_count{YType::uint32, "connect-count"},
    down_nbr_down_reason{YType::uint32, "down-nbr-down-reason"},
    down_nbr_flags{YType::uint32, "down-nbr-flags"},
    down_nbr_flap_count{YType::uint8, "down-nbr-flap-count"},
    is_liveness_timer_running{YType::boolean, "is-liveness-timer-running"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    liveness_timer_remaining_seconds{YType::uint32, "liveness-timer-remaining-seconds"},
    recovery_timer_remaining_seconds{YType::uint32, "recovery-timer-remaining-seconds"}
    	,
    gr_peer(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>())
{
    gr_peer->parent = this;

    yang_name = "graceful-restartable-neighbor"; yang_parent_name = "graceful-restart";
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::~GracefulRestartableNeighbor()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::has_data() const
{
    for (std::size_t index=0; index<down_nbr_address.size(); index++)
    {
        if(down_nbr_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_interface.size(); index++)
    {
        if(down_nbr_interface[index]->has_data())
            return true;
    }
    return connect_count.is_set
	|| down_nbr_down_reason.is_set
	|| down_nbr_flags.is_set
	|| down_nbr_flap_count.is_set
	|| is_liveness_timer_running.is_set
	|| is_neighbor_up.is_set
	|| is_recovery_timer_running.is_set
	|| liveness_timer_remaining_seconds.is_set
	|| recovery_timer_remaining_seconds.is_set
	|| (gr_peer !=  nullptr && gr_peer->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::has_operation() const
{
    for (std::size_t index=0; index<down_nbr_address.size(); index++)
    {
        if(down_nbr_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_interface.size(); index++)
    {
        if(down_nbr_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(connect_count.yfilter)
	|| ydk::is_set(down_nbr_down_reason.yfilter)
	|| ydk::is_set(down_nbr_flags.yfilter)
	|| ydk::is_set(down_nbr_flap_count.yfilter)
	|| ydk::is_set(is_liveness_timer_running.yfilter)
	|| ydk::is_set(is_neighbor_up.yfilter)
	|| ydk::is_set(is_recovery_timer_running.yfilter)
	|| ydk::is_set(liveness_timer_remaining_seconds.yfilter)
	|| ydk::is_set(recovery_timer_remaining_seconds.yfilter)
	|| (gr_peer !=  nullptr && gr_peer->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restartable-neighbor";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestartableNeighbor' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_count.is_set || is_set(connect_count.yfilter)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (down_nbr_down_reason.is_set || is_set(down_nbr_down_reason.yfilter)) leaf_name_data.push_back(down_nbr_down_reason.get_name_leafdata());
    if (down_nbr_flags.is_set || is_set(down_nbr_flags.yfilter)) leaf_name_data.push_back(down_nbr_flags.get_name_leafdata());
    if (down_nbr_flap_count.is_set || is_set(down_nbr_flap_count.yfilter)) leaf_name_data.push_back(down_nbr_flap_count.get_name_leafdata());
    if (is_liveness_timer_running.is_set || is_set(is_liveness_timer_running.yfilter)) leaf_name_data.push_back(is_liveness_timer_running.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.yfilter)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.yfilter)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (liveness_timer_remaining_seconds.is_set || is_set(liveness_timer_remaining_seconds.yfilter)) leaf_name_data.push_back(liveness_timer_remaining_seconds.get_name_leafdata());
    if (recovery_timer_remaining_seconds.is_set || is_set(recovery_timer_remaining_seconds.yfilter)) leaf_name_data.push_back(recovery_timer_remaining_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down-nbr-address")
    {
        for(auto const & c : down_nbr_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress>();
        c->parent = this;
        down_nbr_address.push_back(c);
        return c;
    }

    if(child_yang_name == "down-nbr-interface")
    {
        for(auto const & c : down_nbr_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface>();
        c->parent = this;
        down_nbr_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "gr-peer")
    {
        if(gr_peer == nullptr)
        {
            gr_peer = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>();
        }
        return gr_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : down_nbr_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : down_nbr_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(gr_peer != nullptr)
    {
        children["gr-peer"] = gr_peer;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-count")
    {
        connect_count = value;
        connect_count.value_namespace = name_space;
        connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason = value;
        down_nbr_down_reason.value_namespace = name_space;
        down_nbr_down_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-nbr-flags")
    {
        down_nbr_flags = value;
        down_nbr_flags.value_namespace = name_space;
        down_nbr_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count = value;
        down_nbr_flap_count.value_namespace = name_space;
        down_nbr_flap_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running = value;
        is_liveness_timer_running.value_namespace = name_space;
        is_liveness_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
        is_neighbor_up.value_namespace = name_space;
        is_neighbor_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
        is_recovery_timer_running.value_namespace = name_space;
        is_recovery_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds = value;
        liveness_timer_remaining_seconds.value_namespace = name_space;
        liveness_timer_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds = value;
        recovery_timer_remaining_seconds.value_namespace = name_space;
        recovery_timer_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-count")
    {
        connect_count.yfilter = yfilter;
    }
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason.yfilter = yfilter;
    }
    if(value_path == "down-nbr-flags")
    {
        down_nbr_flags.yfilter = yfilter;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count.yfilter = yfilter;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up.yfilter = yfilter;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running.yfilter = yfilter;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds.yfilter = yfilter;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-nbr-address" || name == "down-nbr-interface" || name == "gr-peer" || name == "connect-count" || name == "down-nbr-down-reason" || name == "down-nbr-flags" || name == "down-nbr-flap-count" || name == "is-liveness-timer-running" || name == "is-neighbor-up" || name == "is-recovery-timer-running" || name == "liveness-timer-remaining-seconds" || name == "recovery-timer-remaining-seconds")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::GrPeer()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "gr-peer"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::~GrPeer()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-peer";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GrPeer' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-space-id" || name == "ldp-id" || name == "lsr-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::DownNbrInterface()
    :
    address_family{YType::enumeration, "address-family"},
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "down-nbr-interface"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::~DownNbrInterface()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_data() const
{
    return address_family.is_set
	|| interface_handle.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-interface";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DownNbrInterface' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "interface-handle")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::DownNbrAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "down-nbr-address"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::~DownNbrAddress()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DownNbrAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capabilities()
{
    yang_name = "capabilities"; yang_parent_name = "vrf";
}

MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::~Capabilities()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::has_data() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capabilities' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capability")
    {
        for(auto const & c : capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability>();
        c->parent = this;
        capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : capability)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability()
    :
    capability_type{YType::int32, "capability-type"},
    capability_owner{YType::str, "capability-owner"}
    	,
    capability(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_>())
{
    capability->parent = this;

    yang_name = "capability"; yang_parent_name = "capabilities";
}

MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::~Capability()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::has_data() const
{
    return capability_type.is_set
	|| capability_owner.is_set
	|| (capability !=  nullptr && capability->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability_type.yfilter)
	|| ydk::is_set(capability_owner.yfilter)
	|| (capability !=  nullptr && capability->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability" <<"[capability-type='" <<capability_type <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_type.is_set || is_set(capability_type.yfilter)) leaf_name_data.push_back(capability_type.get_name_leafdata());
    if (capability_owner.is_set || is_set(capability_owner.yfilter)) leaf_name_data.push_back(capability_owner.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_>();
        }
        return capability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability-type")
    {
        capability_type = value;
        capability_type.value_namespace = name_space;
        capability_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-owner")
    {
        capability_owner = value;
        capability_owner.value_namespace = name_space;
        capability_owner.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability-type")
    {
        capability_type.yfilter = yfilter;
    }
    if(value_path == "capability-owner")
    {
        capability_owner.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability" || name == "capability-type" || name == "capability-owner")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::Capability_()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "capability"; yang_parent_name = "capability";
}

MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::~Capability_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability_data.yfilter)
	|| ydk::is_set(capability_data_length.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.yfilter)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.yfilter)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
        capability_data.value_namespace = name_space;
        capability_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
        capability_data_length.value_namespace = name_space;
        capability_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability-data")
    {
        capability_data.yfilter = yfilter;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability-data" || name == "capability-data-length" || name == "description" || name == "type")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Summary::Summary()
    :
    common(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common>())
	,vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_>())
{
    common->parent = this;

    vrf->parent = this;

    yang_name = "summary"; yang_parent_name = "vrf";
}

MplsLdp::Global::Active::Vrfs::Vrf::Summary::~Summary()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Summary::has_data() const
{
    return (common !=  nullptr && common->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common>();
        }
        return common;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common != nullptr)
    {
        children["common"] = common;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "vrf")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "summary";
}

MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_bindings_ipv4{YType::uint32, "number-of-bindings-ipv4"},
    number_of_bindings_ipv6{YType::uint32, "number-of-bindings-ipv6"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_ipv4_hello_adj{YType::uint32, "number-of-ipv4-hello-adj"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4af{YType::uint32, "number-of-ipv4af"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ipv6_hello_adj{YType::uint32, "number-of-ipv6-hello-adj"},
    number_of_ipv6_local_addresses{YType::uint32, "number-of-ipv6-local-addresses"},
    number_of_ipv6_routes{YType::uint32, "number-of-ipv6-routes"},
    number_of_ipv6af{YType::uint32, "number-of-ipv6af"},
    number_of_ipv6ldp_interfaces{YType::uint32, "number-of-ipv6ldp-interfaces"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_local_bindings_ipv4{YType::uint32, "number-of-local-bindings-ipv4"},
    number_of_local_bindings_ipv6{YType::uint32, "number-of-local-bindings-ipv6"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_nsr_synced_neighbors{YType::uint32, "number-of-nsr-synced-neighbors"},
    number_of_remote_bindings_ipv4{YType::uint32, "number-of-remote-bindings-ipv4"},
    number_of_remote_bindings_ipv6{YType::uint32, "number-of-remote-bindings-ipv6"}
{
    yang_name = "common"; yang_parent_name = "summary";
}

MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::~Common()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::has_data() const
{
    return address_families.is_set
	|| number_of_bindings_ipv4.is_set
	|| number_of_bindings_ipv6.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_ipv4_hello_adj.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4af.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ipv6_hello_adj.is_set
	|| number_of_ipv6_local_addresses.is_set
	|| number_of_ipv6_routes.is_set
	|| number_of_ipv6af.is_set
	|| number_of_ipv6ldp_interfaces.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_local_bindings_ipv4.is_set
	|| number_of_local_bindings_ipv6.is_set
	|| number_of_neighbors.is_set
	|| number_of_nsr_synced_neighbors.is_set
	|| number_of_remote_bindings_ipv4.is_set
	|| number_of_remote_bindings_ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_families.yfilter)
	|| ydk::is_set(number_of_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_bindings_ipv6.yfilter)
	|| ydk::is_set(number_of_downstream_on_demand_neighbors.yfilter)
	|| ydk::is_set(number_of_graceful_restart_neighbors.yfilter)
	|| ydk::is_set(number_of_ipv4_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv4_local_addresses.yfilter)
	|| ydk::is_set(number_of_ipv4_routes.yfilter)
	|| ydk::is_set(number_of_ipv4af.yfilter)
	|| ydk::is_set(number_of_ipv4ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ipv6_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv6_local_addresses.yfilter)
	|| ydk::is_set(number_of_ipv6_routes.yfilter)
	|| ydk::is_set(number_of_ipv6af.yfilter)
	|| ydk::is_set(number_of_ipv6ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_local_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_local_bindings_ipv6.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter)
	|| ydk::is_set(number_of_nsr_synced_neighbors.yfilter)
	|| ydk::is_set(number_of_remote_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_remote_bindings_ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Common' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.yfilter)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_bindings_ipv4.is_set || is_set(number_of_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_bindings_ipv4.get_name_leafdata());
    if (number_of_bindings_ipv6.is_set || is_set(number_of_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_bindings_ipv6.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.yfilter)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.yfilter)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_ipv4_hello_adj.is_set || is_set(number_of_ipv4_hello_adj.yfilter)) leaf_name_data.push_back(number_of_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.yfilter)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4af.is_set || is_set(number_of_ipv4af.yfilter)) leaf_name_data.push_back(number_of_ipv4af.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ipv6_hello_adj.is_set || is_set(number_of_ipv6_hello_adj.yfilter)) leaf_name_data.push_back(number_of_ipv6_hello_adj.get_name_leafdata());
    if (number_of_ipv6_local_addresses.is_set || is_set(number_of_ipv6_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv6_local_addresses.get_name_leafdata());
    if (number_of_ipv6_routes.is_set || is_set(number_of_ipv6_routes.yfilter)) leaf_name_data.push_back(number_of_ipv6_routes.get_name_leafdata());
    if (number_of_ipv6af.is_set || is_set(number_of_ipv6af.yfilter)) leaf_name_data.push_back(number_of_ipv6af.get_name_leafdata());
    if (number_of_ipv6ldp_interfaces.is_set || is_set(number_of_ipv6ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv6ldp_interfaces.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_local_bindings_ipv4.is_set || is_set(number_of_local_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_local_bindings_ipv4.get_name_leafdata());
    if (number_of_local_bindings_ipv6.is_set || is_set(number_of_local_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_local_bindings_ipv6.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_nsr_synced_neighbors.is_set || is_set(number_of_nsr_synced_neighbors.yfilter)) leaf_name_data.push_back(number_of_nsr_synced_neighbors.get_name_leafdata());
    if (number_of_remote_bindings_ipv4.is_set || is_set(number_of_remote_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_remote_bindings_ipv4.get_name_leafdata());
    if (number_of_remote_bindings_ipv6.is_set || is_set(number_of_remote_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_remote_bindings_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-families")
    {
        address_families = value;
        address_families.value_namespace = name_space;
        address_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4 = value;
        number_of_bindings_ipv4.value_namespace = name_space;
        number_of_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6 = value;
        number_of_bindings_ipv6.value_namespace = name_space;
        number_of_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
        number_of_downstream_on_demand_neighbors.value_namespace = name_space;
        number_of_downstream_on_demand_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
        number_of_graceful_restart_neighbors.value_namespace = name_space;
        number_of_graceful_restart_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj = value;
        number_of_ipv4_hello_adj.value_namespace = name_space;
        number_of_ipv4_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
        number_of_ipv4_local_addresses.value_namespace = name_space;
        number_of_ipv4_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
        number_of_ipv4_routes.value_namespace = name_space;
        number_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af = value;
        number_of_ipv4af.value_namespace = name_space;
        number_of_ipv4af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
        number_of_ipv4ldp_interfaces.value_namespace = name_space;
        number_of_ipv4ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj = value;
        number_of_ipv6_hello_adj.value_namespace = name_space;
        number_of_ipv6_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses = value;
        number_of_ipv6_local_addresses.value_namespace = name_space;
        number_of_ipv6_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes = value;
        number_of_ipv6_routes.value_namespace = name_space;
        number_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af = value;
        number_of_ipv6af.value_namespace = name_space;
        number_of_ipv6af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces = value;
        number_of_ipv6ldp_interfaces.value_namespace = name_space;
        number_of_ipv6ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
        number_of_ldp_interfaces.value_namespace = name_space;
        number_of_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4 = value;
        number_of_local_bindings_ipv4.value_namespace = name_space;
        number_of_local_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6 = value;
        number_of_local_bindings_ipv6.value_namespace = name_space;
        number_of_local_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors = value;
        number_of_nsr_synced_neighbors.value_namespace = name_space;
        number_of_nsr_synced_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4 = value;
        number_of_remote_bindings_ipv4.value_namespace = name_space;
        number_of_remote_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6 = value;
        number_of_remote_bindings_ipv6.value_namespace = name_space;
        number_of_remote_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-families")
    {
        address_families.yfilter = yfilter;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6.yfilter = yfilter;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-families" || name == "number-of-bindings-ipv4" || name == "number-of-bindings-ipv6" || name == "number-of-downstream-on-demand-neighbors" || name == "number-of-graceful-restart-neighbors" || name == "number-of-ipv4-hello-adj" || name == "number-of-ipv4-local-addresses" || name == "number-of-ipv4-routes" || name == "number-of-ipv4af" || name == "number-of-ipv4ldp-interfaces" || name == "number-of-ipv6-hello-adj" || name == "number-of-ipv6-local-addresses" || name == "number-of-ipv6-routes" || name == "number-of-ipv6af" || name == "number-of-ipv6ldp-interfaces" || name == "number-of-ldp-interfaces" || name == "number-of-local-bindings-ipv4" || name == "number-of-local-bindings-ipv6" || name == "number-of-neighbors" || name == "number-of-nsr-synced-neighbors" || name == "number-of-remote-bindings-ipv4" || name == "number-of-remote-bindings-ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    bindings(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings>())
	,bindings_advertise_spec(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec>())
	,bindings_summary(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary>())
	,bindings_summary_all(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll>())
	,discovery(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery>())
	,forwarding_summary(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary>())
	,forwardings(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings>())
	,igp(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp>())
	,interface_summary(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary>())
	,interfaces(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces>())
{
    bindings->parent = this;

    bindings_advertise_spec->parent = this;

    bindings_summary->parent = this;

    bindings_summary_all->parent = this;

    discovery->parent = this;

    forwarding_summary->parent = this;

    forwardings->parent = this;

    igp->parent = this;

    interface_summary->parent = this;

    interfaces->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (bindings !=  nullptr && bindings->has_data())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_data())
	|| (bindings_summary !=  nullptr && bindings_summary->has_data())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data())
	|| (forwardings !=  nullptr && forwardings->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (interface_summary !=  nullptr && interface_summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (bindings !=  nullptr && bindings->has_operation())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_operation())
	|| (bindings_summary !=  nullptr && bindings_summary->has_operation())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation())
	|| (forwardings !=  nullptr && forwardings->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (interface_summary !=  nullptr && interface_summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bindings")
    {
        if(bindings == nullptr)
        {
            bindings = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings>();
        }
        return bindings;
    }

    if(child_yang_name == "bindings-advertise-spec")
    {
        if(bindings_advertise_spec == nullptr)
        {
            bindings_advertise_spec = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec>();
        }
        return bindings_advertise_spec;
    }

    if(child_yang_name == "bindings-summary")
    {
        if(bindings_summary == nullptr)
        {
            bindings_summary = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary>();
        }
        return bindings_summary;
    }

    if(child_yang_name == "bindings-summary-all")
    {
        if(bindings_summary_all == nullptr)
        {
            bindings_summary_all = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll>();
        }
        return bindings_summary_all;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary == nullptr)
        {
            forwarding_summary = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary>();
        }
        return forwarding_summary;
    }

    if(child_yang_name == "forwardings")
    {
        if(forwardings == nullptr)
        {
            forwardings = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings>();
        }
        return forwardings;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "interface-summary")
    {
        if(interface_summary == nullptr)
        {
            interface_summary = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary>();
        }
        return interface_summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bindings != nullptr)
    {
        children["bindings"] = bindings;
    }

    if(bindings_advertise_spec != nullptr)
    {
        children["bindings-advertise-spec"] = bindings_advertise_spec;
    }

    if(bindings_summary != nullptr)
    {
        children["bindings-summary"] = bindings_summary;
    }

    if(bindings_summary_all != nullptr)
    {
        children["bindings-summary-all"] = bindings_summary_all;
    }

    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(forwarding_summary != nullptr)
    {
        children["forwarding-summary"] = forwarding_summary;
    }

    if(forwardings != nullptr)
    {
        children["forwardings"] = forwardings;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(interface_summary != nullptr)
    {
        children["interface-summary"] = interface_summary;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bindings" || name == "bindings-advertise-spec" || name == "bindings-summary" || name == "bindings-summary-all" || name == "discovery" || name == "forwarding-summary" || name == "forwardings" || name == "igp" || name == "interface-summary" || name == "interfaces" || name == "af-name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::InterfaceSummary()
    :
    auto_config{YType::uint32, "auto-config"},
    auto_config_disabled{YType::uint32, "auto-config-disabled"},
    auto_config_forward_reference_interfaces{YType::uint32, "auto-config-forward-reference-interfaces"},
    forward_references{YType::uint32, "forward-references"},
    known_ip_interface_count{YType::uint32, "known-ip-interface-count"},
    known_ip_interface_ldp_enabled{YType::uint32, "known-ip-interface-ldp-enabled"},
    ldp_configured_attached_interface{YType::uint32, "ldp-configured-attached-interface"},
    ldp_configured_te_interface{YType::uint32, "ldp-configured-te-interface"}
{
    yang_name = "interface-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::~InterfaceSummary()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_data() const
{
    return auto_config.is_set
	|| auto_config_disabled.is_set
	|| auto_config_forward_reference_interfaces.is_set
	|| forward_references.is_set
	|| known_ip_interface_count.is_set
	|| known_ip_interface_ldp_enabled.is_set
	|| ldp_configured_attached_interface.is_set
	|| ldp_configured_te_interface.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_config.yfilter)
	|| ydk::is_set(auto_config_disabled.yfilter)
	|| ydk::is_set(auto_config_forward_reference_interfaces.yfilter)
	|| ydk::is_set(forward_references.yfilter)
	|| ydk::is_set(known_ip_interface_count.yfilter)
	|| ydk::is_set(known_ip_interface_ldp_enabled.yfilter)
	|| ydk::is_set(ldp_configured_attached_interface.yfilter)
	|| ydk::is_set(ldp_configured_te_interface.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config.is_set || is_set(auto_config.yfilter)) leaf_name_data.push_back(auto_config.get_name_leafdata());
    if (auto_config_disabled.is_set || is_set(auto_config_disabled.yfilter)) leaf_name_data.push_back(auto_config_disabled.get_name_leafdata());
    if (auto_config_forward_reference_interfaces.is_set || is_set(auto_config_forward_reference_interfaces.yfilter)) leaf_name_data.push_back(auto_config_forward_reference_interfaces.get_name_leafdata());
    if (forward_references.is_set || is_set(forward_references.yfilter)) leaf_name_data.push_back(forward_references.get_name_leafdata());
    if (known_ip_interface_count.is_set || is_set(known_ip_interface_count.yfilter)) leaf_name_data.push_back(known_ip_interface_count.get_name_leafdata());
    if (known_ip_interface_ldp_enabled.is_set || is_set(known_ip_interface_ldp_enabled.yfilter)) leaf_name_data.push_back(known_ip_interface_ldp_enabled.get_name_leafdata());
    if (ldp_configured_attached_interface.is_set || is_set(ldp_configured_attached_interface.yfilter)) leaf_name_data.push_back(ldp_configured_attached_interface.get_name_leafdata());
    if (ldp_configured_te_interface.is_set || is_set(ldp_configured_te_interface.yfilter)) leaf_name_data.push_back(ldp_configured_te_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-config")
    {
        auto_config = value;
        auto_config.value_namespace = name_space;
        auto_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled = value;
        auto_config_disabled.value_namespace = name_space;
        auto_config_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces = value;
        auto_config_forward_reference_interfaces.value_namespace = name_space;
        auto_config_forward_reference_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-references")
    {
        forward_references = value;
        forward_references.value_namespace = name_space;
        forward_references.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count = value;
        known_ip_interface_count.value_namespace = name_space;
        known_ip_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled = value;
        known_ip_interface_ldp_enabled.value_namespace = name_space;
        known_ip_interface_ldp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-configured-attached-interface")
    {
        ldp_configured_attached_interface = value;
        ldp_configured_attached_interface.value_namespace = name_space;
        ldp_configured_attached_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-configured-te-interface")
    {
        ldp_configured_te_interface = value;
        ldp_configured_te_interface.value_namespace = name_space;
        ldp_configured_te_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-config")
    {
        auto_config.yfilter = yfilter;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled.yfilter = yfilter;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces.yfilter = yfilter;
    }
    if(value_path == "forward-references")
    {
        forward_references.yfilter = yfilter;
    }
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count.yfilter = yfilter;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled.yfilter = yfilter;
    }
    if(value_path == "ldp-configured-attached-interface")
    {
        ldp_configured_attached_interface.yfilter = yfilter;
    }
    if(value_path == "ldp-configured-te-interface")
    {
        ldp_configured_te_interface.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-config" || name == "auto-config-disabled" || name == "auto-config-forward-reference-interfaces" || name == "forward-references" || name == "known-ip-interface-count" || name == "known-ip-interface-ldp-enabled" || name == "ldp-configured-attached-interface" || name == "ldp-configured-te-interface")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Bindings()
{
    yang_name = "bindings"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::~Bindings()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bindings' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Binding()
    :
    prefix{YType::str, "prefix"},
    advertise_prefix_acl{YType::str, "advertise-prefix-acl"},
    advertise_tsr_acl{YType::str, "advertise-tsr-acl"},
    config_enforced_local_label_value{YType::boolean, "config-enforced-local-label-value"},
    is_elc{YType::boolean, "is-elc"},
    is_no_route{YType::boolean, "is-no-route"},
    label_oor{YType::boolean, "label-oor"},
    le_local_binding_revision{YType::uint32, "le-local-binding-revision"},
    le_local_label_state{YType::enumeration, "le-local-label-state"},
    local_label{YType::uint32, "local-label"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix_xr(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr>())
	,vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_>())
{
    prefix_xr->parent = this;

    vrf->parent = this;

    yang_name = "binding"; yang_parent_name = "bindings";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::~Binding()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::has_data() const
{
    for (std::size_t index=0; index<peers_acked.size(); index++)
    {
        if(peers_acked[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| advertise_prefix_acl.is_set
	|| advertise_tsr_acl.is_set
	|| config_enforced_local_label_value.is_set
	|| is_elc.is_set
	|| is_no_route.is_set
	|| label_oor.is_set
	|| le_local_binding_revision.is_set
	|| le_local_label_state.is_set
	|| local_label.is_set
	|| prefix_length.is_set
	|| (prefix_xr !=  nullptr && prefix_xr->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::has_operation() const
{
    for (std::size_t index=0; index<peers_acked.size(); index++)
    {
        if(peers_acked[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(advertise_prefix_acl.yfilter)
	|| ydk::is_set(advertise_tsr_acl.yfilter)
	|| ydk::is_set(config_enforced_local_label_value.yfilter)
	|| ydk::is_set(is_elc.yfilter)
	|| ydk::is_set(is_no_route.yfilter)
	|| ydk::is_set(label_oor.yfilter)
	|| ydk::is_set(le_local_binding_revision.yfilter)
	|| ydk::is_set(le_local_label_state.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix_xr !=  nullptr && prefix_xr->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertise_prefix_acl.is_set || is_set(advertise_prefix_acl.yfilter)) leaf_name_data.push_back(advertise_prefix_acl.get_name_leafdata());
    if (advertise_tsr_acl.is_set || is_set(advertise_tsr_acl.yfilter)) leaf_name_data.push_back(advertise_tsr_acl.get_name_leafdata());
    if (config_enforced_local_label_value.is_set || is_set(config_enforced_local_label_value.yfilter)) leaf_name_data.push_back(config_enforced_local_label_value.get_name_leafdata());
    if (is_elc.is_set || is_set(is_elc.yfilter)) leaf_name_data.push_back(is_elc.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.yfilter)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.yfilter)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (le_local_binding_revision.is_set || is_set(le_local_binding_revision.yfilter)) leaf_name_data.push_back(le_local_binding_revision.get_name_leafdata());
    if (le_local_label_state.is_set || is_set(le_local_label_state.yfilter)) leaf_name_data.push_back(le_local_label_state.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers-acked")
    {
        for(auto const & c : peers_acked)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked>();
        c->parent = this;
        peers_acked.push_back(c);
        return c;
    }

    if(child_yang_name == "peers-advertised-to")
    {
        for(auto const & c : peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo>();
        c->parent = this;
        peers_advertised_to.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix-xr")
    {
        if(prefix_xr == nullptr)
        {
            prefix_xr = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr>();
        }
        return prefix_xr;
    }

    if(child_yang_name == "remote-binding")
    {
        for(auto const & c : remote_binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding>();
        c->parent = this;
        remote_binding.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peers_acked)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : peers_advertised_to)
    {
        children[c->get_segment_path()] = c;
    }

    if(prefix_xr != nullptr)
    {
        children["prefix-xr"] = prefix_xr;
    }

    for (auto const & c : remote_binding)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-prefix-acl")
    {
        advertise_prefix_acl = value;
        advertise_prefix_acl.value_namespace = name_space;
        advertise_prefix_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-tsr-acl")
    {
        advertise_tsr_acl = value;
        advertise_tsr_acl.value_namespace = name_space;
        advertise_tsr_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value = value;
        config_enforced_local_label_value.value_namespace = name_space;
        config_enforced_local_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-elc")
    {
        is_elc = value;
        is_elc.value_namespace = name_space;
        is_elc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
        is_no_route.value_namespace = name_space;
        is_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
        label_oor.value_namespace = name_space;
        label_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision = value;
        le_local_binding_revision.value_namespace = name_space;
        le_local_binding_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state = value;
        le_local_label_state.value_namespace = name_space;
        le_local_label_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "advertise-prefix-acl")
    {
        advertise_prefix_acl.yfilter = yfilter;
    }
    if(value_path == "advertise-tsr-acl")
    {
        advertise_tsr_acl.yfilter = yfilter;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value.yfilter = yfilter;
    }
    if(value_path == "is-elc")
    {
        is_elc.yfilter = yfilter;
    }
    if(value_path == "is-no-route")
    {
        is_no_route.yfilter = yfilter;
    }
    if(value_path == "label-oor")
    {
        label_oor.yfilter = yfilter;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision.yfilter = yfilter;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers-acked" || name == "peers-advertised-to" || name == "prefix-xr" || name == "remote-binding" || name == "vrf" || name == "prefix" || name == "advertise-prefix-acl" || name == "advertise-tsr-acl" || name == "config-enforced-local-label-value" || name == "is-elc" || name == "is-no-route" || name == "label-oor" || name == "le-local-binding-revision" || name == "le-local-label-state" || name == "local-label" || name == "prefix-length")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::PrefixXr()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "prefix-xr"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::~PrefixXr()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-xr";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixXr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::RemoteBinding()
    :
    is_elc{YType::boolean, "is-elc"},
    is_stale{YType::boolean, "is-stale"},
    remote_label{YType::uint32, "remote-label"}
    	,
    assigning_peer_ldp_ident(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>())
{
    assigning_peer_ldp_ident->parent = this;

    yang_name = "remote-binding"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::~RemoteBinding()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::has_data() const
{
    return is_elc.is_set
	|| is_stale.is_set
	|| remote_label.is_set
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_elc.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-binding";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteBinding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_elc.is_set || is_set(is_elc.yfilter)) leaf_name_data.push_back(is_elc.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "assigning-peer-ldp-ident")
    {
        if(assigning_peer_ldp_ident == nullptr)
        {
            assigning_peer_ldp_ident = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>();
        }
        return assigning_peer_ldp_ident;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(assigning_peer_ldp_ident != nullptr)
    {
        children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-elc")
    {
        is_elc = value;
        is_elc.value_namespace = name_space;
        is_elc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-elc")
    {
        is_elc.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assigning-peer-ldp-ident" || name == "is-elc" || name == "is-stale" || name == "remote-label")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::AssigningPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "assigning-peer-ldp-ident"; yang_parent_name = "remote-binding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::~AssigningPeerLdpIdent()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assigning-peer-ldp-ident";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssigningPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-space-id" || name == "ldp-id" || name == "lsr-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::PeersAdvertisedTo()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "peers-advertised-to"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::~PeersAdvertisedTo()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-advertised-to";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeersAdvertisedTo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-space-id" || name == "ldp-id" || name == "lsr-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::PeersAcked()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "peers-acked"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::~PeersAcked()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-acked";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeersAcked' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-space-id" || name == "ldp-id" || name == "lsr-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Igp()
    :
    sync_delay_restart(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart>())
	,syncs(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs>())
{
    sync_delay_restart->parent = this;

    syncs->parent = this;

    yang_name = "igp"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::~Igp()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::has_data() const
{
    return (sync_delay_restart !=  nullptr && sync_delay_restart->has_data())
	|| (syncs !=  nullptr && syncs->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::has_operation() const
{
    return is_set(yfilter)
	|| (sync_delay_restart !=  nullptr && sync_delay_restart->has_operation())
	|| (syncs !=  nullptr && syncs->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-delay-restart")
    {
        if(sync_delay_restart == nullptr)
        {
            sync_delay_restart = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart>();
        }
        return sync_delay_restart;
    }

    if(child_yang_name == "syncs")
    {
        if(syncs == nullptr)
        {
            syncs = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs>();
        }
        return syncs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync_delay_restart != nullptr)
    {
        children["sync-delay-restart"] = sync_delay_restart;
    }

    if(syncs != nullptr)
    {
        children["syncs"] = syncs;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-delay-restart" || name == "syncs")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Syncs()
{
    yang_name = "syncs"; yang_parent_name = "igp";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::~Syncs()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::has_data() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::has_operation() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Syncs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync")
    {
        for(auto const & c : sync)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync>();
        c->parent = this;
        sync.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sync)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Sync()
    :
    interface_name{YType::str, "interface-name"},
    delay_timer_remaining{YType::uint32, "delay-timer-remaining"},
    igp_sync_delay{YType::uint32, "igp-sync-delay"},
    igp_sync_down_reason{YType::enumeration, "igp-sync-down-reason"},
    igp_sync_state{YType::enumeration, "igp-sync-state"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_delay_timer_running{YType::boolean, "is-delay-timer-running"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_>())
{
    vrf->parent = this;

    yang_name = "sync"; yang_parent_name = "syncs";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::~Sync()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::has_data() const
{
    for (std::size_t index=0; index<gr_only_peer.size(); index++)
    {
        if(gr_only_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| delay_timer_remaining.is_set
	|| igp_sync_delay.is_set
	|| igp_sync_down_reason.is_set
	|| igp_sync_state.is_set
	|| interface_name_xr.is_set
	|| is_delay_timer_running.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::has_operation() const
{
    for (std::size_t index=0; index<gr_only_peer.size(); index++)
    {
        if(gr_only_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(delay_timer_remaining.yfilter)
	|| ydk::is_set(igp_sync_delay.yfilter)
	|| ydk::is_set(igp_sync_down_reason.yfilter)
	|| ydk::is_set(igp_sync_state.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_delay_timer_running.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sync' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (delay_timer_remaining.is_set || is_set(delay_timer_remaining.yfilter)) leaf_name_data.push_back(delay_timer_remaining.get_name_leafdata());
    if (igp_sync_delay.is_set || is_set(igp_sync_delay.yfilter)) leaf_name_data.push_back(igp_sync_delay.get_name_leafdata());
    if (igp_sync_down_reason.is_set || is_set(igp_sync_down_reason.yfilter)) leaf_name_data.push_back(igp_sync_down_reason.get_name_leafdata());
    if (igp_sync_state.is_set || is_set(igp_sync_state.yfilter)) leaf_name_data.push_back(igp_sync_state.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_delay_timer_running.is_set || is_set(is_delay_timer_running.yfilter)) leaf_name_data.push_back(is_delay_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gr-only-peer")
    {
        for(auto const & c : gr_only_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer>();
        c->parent = this;
        gr_only_peer.push_back(c);
        return c;
    }

    if(child_yang_name == "peers")
    {
        for(auto const & c : peers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers>();
        c->parent = this;
        peers.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gr_only_peer)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : peers)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining = value;
        delay_timer_remaining.value_namespace = name_space;
        delay_timer_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-delay")
    {
        igp_sync_delay = value;
        igp_sync_delay.value_namespace = name_space;
        igp_sync_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason = value;
        igp_sync_down_reason.value_namespace = name_space;
        igp_sync_down_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state = value;
        igp_sync_state.value_namespace = name_space;
        igp_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running = value;
        is_delay_timer_running.value_namespace = name_space;
        is_delay_timer_running.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining.yfilter = yfilter;
    }
    if(value_path == "igp-sync-delay")
    {
        igp_sync_delay.yfilter = yfilter;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason.yfilter = yfilter;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gr-only-peer" || name == "peers" || name == "vrf" || name == "interface-name" || name == "delay-timer-remaining" || name == "igp-sync-delay" || name == "igp-sync-down-reason" || name == "igp-sync-state" || name == "interface-name-xr" || name == "is-delay-timer-running")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "sync";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::Peers()
    :
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "peers"; yang_parent_name = "sync";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::~Peers()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::has_data() const
{
    return is_gr_enabled.is_set
	|| peer_id.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter)
	|| ydk::is_set(peer_id.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-gr-enabled" || name == "peer-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::GrOnlyPeer()
    :
    is_chkpt_created{YType::boolean, "is-chkpt-created"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "gr-only-peer"; yang_parent_name = "sync";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::~GrOnlyPeer()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_data() const
{
    return is_chkpt_created.is_set
	|| peer_id.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_chkpt_created.yfilter)
	|| ydk::is_set(peer_id.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-only-peer";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GrOnlyPeer' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_chkpt_created.is_set || is_set(is_chkpt_created.yfilter)) leaf_name_data.push_back(is_chkpt_created.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created = value;
        is_chkpt_created.value_namespace = name_space;
        is_chkpt_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-chkpt-created" || name == "peer-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::SyncDelayRestart()
    :
    configured{YType::boolean, "configured"},
    delay_secs{YType::uint32, "delay-secs"},
    remaining_secs{YType::uint32, "remaining-secs"},
    timer_running{YType::boolean, "timer-running"}
{
    yang_name = "sync-delay-restart"; yang_parent_name = "igp";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::~SyncDelayRestart()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::has_data() const
{
    return configured.is_set
	|| delay_secs.is_set
	|| remaining_secs.is_set
	|| timer_running.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(delay_secs.yfilter)
	|| ydk::is_set(remaining_secs.yfilter)
	|| ydk::is_set(timer_running.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-delay-restart";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SyncDelayRestart' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (delay_secs.is_set || is_set(delay_secs.yfilter)) leaf_name_data.push_back(delay_secs.get_name_leafdata());
    if (remaining_secs.is_set || is_set(remaining_secs.yfilter)) leaf_name_data.push_back(remaining_secs.get_name_leafdata());
    if (timer_running.is_set || is_set(timer_running.yfilter)) leaf_name_data.push_back(timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-secs")
    {
        delay_secs = value;
        delay_secs.value_namespace = name_space;
        delay_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-secs")
    {
        remaining_secs = value;
        remaining_secs.value_namespace = name_space;
        remaining_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-running")
    {
        timer_running = value;
        timer_running.value_namespace = name_space;
        timer_running.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "delay-secs")
    {
        delay_secs.yfilter = yfilter;
    }
    if(value_path == "remaining-secs")
    {
        remaining_secs.yfilter = yfilter;
    }
    if(value_path == "timer-running")
    {
        timer_running.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured" || name == "delay-secs" || name == "remaining-secs" || name == "timer-running")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindingsSummary()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_>())
{
    vrf->parent = this;

    yang_name = "bindings-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::~BindingsSummary()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::has_data() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::has_operation() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(binding_local_explicit_null.yfilter)
	|| ydk::is_set(binding_local_implicit_null.yfilter)
	|| ydk::is_set(binding_local_no_route.yfilter)
	|| ydk::is_set(binding_local_non_null.yfilter)
	|| ydk::is_set(binding_local_null.yfilter)
	|| ydk::is_set(binding_local_oor.yfilter)
	|| ydk::is_set(binding_no_route.yfilter)
	|| ydk::is_set(highest_allocated_label.yfilter)
	|| ydk::is_set(lowest_allocated_label.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.yfilter)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.yfilter)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.yfilter)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.yfilter)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.yfilter)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.yfilter)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.yfilter)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.yfilter)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.yfilter)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bind-af")
    {
        for(auto const & c : bind_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf>();
        c->parent = this;
        bind_af.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bind_af)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
        binding_local_explicit_null.value_namespace = name_space;
        binding_local_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
        binding_local_implicit_null.value_namespace = name_space;
        binding_local_implicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
        binding_local_no_route.value_namespace = name_space;
        binding_local_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
        binding_local_non_null.value_namespace = name_space;
        binding_local_non_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
        binding_local_null.value_namespace = name_space;
        binding_local_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
        binding_local_oor.value_namespace = name_space;
        binding_local_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
        binding_no_route.value_namespace = name_space;
        binding_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
        highest_allocated_label.value_namespace = name_space;
        highest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
        lowest_allocated_label.value_namespace = name_space;
        lowest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route.yfilter = yfilter;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor.yfilter = yfilter;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route.yfilter = yfilter;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label.yfilter = yfilter;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bind-af" || name == "vrf" || name == "address-family" || name == "binding-local-explicit-null" || name == "binding-local-implicit-null" || name == "binding-local-no-route" || name == "binding-local-non-null" || name == "binding-local-null" || name == "binding-local-oor" || name == "binding-no-route" || name == "highest-allocated-label" || name == "lowest-allocated-label")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "bindings-summary";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"}
{
    yang_name = "bind-af"; yang_parent_name = "bindings-summary";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::has_data() const
{
    return address_family.is_set
	|| binding_local.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(binding_local.yfilter)
	|| ydk::is_set(binding_remote.yfilter)
	|| ydk::is_set(binding_total.yfilter)
	|| ydk::is_set(last_lib_update.yfilter)
	|| ydk::is_set(lib_minimum_revision_sent_all.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.yfilter)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.yfilter)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.yfilter)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.yfilter)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.yfilter)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
        binding_local.value_namespace = name_space;
        binding_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
        binding_remote.value_namespace = name_space;
        binding_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
        binding_total.value_namespace = name_space;
        binding_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
        last_lib_update.value_namespace = name_space;
        last_lib_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
        lib_minimum_revision_sent_all.value_namespace = name_space;
        lib_minimum_revision_sent_all.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "binding-local")
    {
        binding_local.yfilter = yfilter;
    }
    if(value_path == "binding-remote")
    {
        binding_remote.yfilter = yfilter;
    }
    if(value_path == "binding-total")
    {
        binding_total.yfilter = yfilter;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update.yfilter = yfilter;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "binding-local" || name == "binding-remote" || name == "binding-total" || name == "last-lib-update" || name == "lib-minimum-revision-sent-all")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::~Interfaces()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_im_stale{YType::boolean, "is-im-stale"},
    ldp_autoconfig_disable{YType::boolean, "ldp-autoconfig-disable"},
    ldp_config_mode{YType::boolean, "ldp-config-mode"},
    ldp_enabled{YType::boolean, "ldp-enabled"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_>())
{
    vrf->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<auto_config.size(); index++)
    {
        if(auto_config[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_mesh_grp.size(); index++)
    {
        if(te_mesh_grp[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| is_im_stale.is_set
	|| ldp_autoconfig_disable.is_set
	|| ldp_config_mode.is_set
	|| ldp_enabled.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<auto_config.size(); index++)
    {
        if(auto_config[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_mesh_grp.size(); index++)
    {
        if(te_mesh_grp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_im_stale.yfilter)
	|| ydk::is_set(ldp_autoconfig_disable.yfilter)
	|| ydk::is_set(ldp_config_mode.yfilter)
	|| ydk::is_set(ldp_enabled.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_im_stale.is_set || is_set(is_im_stale.yfilter)) leaf_name_data.push_back(is_im_stale.get_name_leafdata());
    if (ldp_autoconfig_disable.is_set || is_set(ldp_autoconfig_disable.yfilter)) leaf_name_data.push_back(ldp_autoconfig_disable.get_name_leafdata());
    if (ldp_config_mode.is_set || is_set(ldp_config_mode.yfilter)) leaf_name_data.push_back(ldp_config_mode.get_name_leafdata());
    if (ldp_enabled.is_set || is_set(ldp_enabled.yfilter)) leaf_name_data.push_back(ldp_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-config")
    {
        for(auto const & c : auto_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig>();
        c->parent = this;
        auto_config.push_back(c);
        return c;
    }

    if(child_yang_name == "te-mesh-grp")
    {
        for(auto const & c : te_mesh_grp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp>();
        c->parent = this;
        te_mesh_grp.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : auto_config)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : te_mesh_grp)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-stale")
    {
        is_im_stale = value;
        is_im_stale.value_namespace = name_space;
        is_im_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-autoconfig-disable")
    {
        ldp_autoconfig_disable = value;
        ldp_autoconfig_disable.value_namespace = name_space;
        ldp_autoconfig_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-config-mode")
    {
        ldp_config_mode = value;
        ldp_config_mode.value_namespace = name_space;
        ldp_config_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-enabled")
    {
        ldp_enabled = value;
        ldp_enabled.value_namespace = name_space;
        ldp_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-im-stale")
    {
        is_im_stale.yfilter = yfilter;
    }
    if(value_path == "ldp-autoconfig-disable")
    {
        ldp_autoconfig_disable.yfilter = yfilter;
    }
    if(value_path == "ldp-config-mode")
    {
        ldp_config_mode.yfilter = yfilter;
    }
    if(value_path == "ldp-enabled")
    {
        ldp_enabled.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-config" || name == "te-mesh-grp" || name == "vrf" || name == "interface-name" || name == "interface" || name == "interface-name-xr" || name == "is-im-stale" || name == "ldp-autoconfig-disable" || name == "ldp-config-mode" || name == "ldp-enabled")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "interface";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::TeMeshGrp()
    :
    ldp_mesh_group_enabled{YType::boolean, "ldp-mesh-group-enabled"},
    ldp_te_mesh_group_all_cfgd{YType::boolean, "ldp-te-mesh-group-all-cfgd"},
    te_mesh_group_id{YType::uint32, "te-mesh-group-id"}
{
    yang_name = "te-mesh-grp"; yang_parent_name = "interface";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::~TeMeshGrp()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_data() const
{
    return ldp_mesh_group_enabled.is_set
	|| ldp_te_mesh_group_all_cfgd.is_set
	|| te_mesh_group_id.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldp_mesh_group_enabled.yfilter)
	|| ydk::is_set(ldp_te_mesh_group_all_cfgd.yfilter)
	|| ydk::is_set(te_mesh_group_id.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-mesh-grp";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeMeshGrp' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_mesh_group_enabled.is_set || is_set(ldp_mesh_group_enabled.yfilter)) leaf_name_data.push_back(ldp_mesh_group_enabled.get_name_leafdata());
    if (ldp_te_mesh_group_all_cfgd.is_set || is_set(ldp_te_mesh_group_all_cfgd.yfilter)) leaf_name_data.push_back(ldp_te_mesh_group_all_cfgd.get_name_leafdata());
    if (te_mesh_group_id.is_set || is_set(te_mesh_group_id.yfilter)) leaf_name_data.push_back(te_mesh_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp-mesh-group-enabled")
    {
        ldp_mesh_group_enabled = value;
        ldp_mesh_group_enabled.value_namespace = name_space;
        ldp_mesh_group_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-te-mesh-group-all-cfgd")
    {
        ldp_te_mesh_group_all_cfgd = value;
        ldp_te_mesh_group_all_cfgd.value_namespace = name_space;
        ldp_te_mesh_group_all_cfgd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-mesh-group-id")
    {
        te_mesh_group_id = value;
        te_mesh_group_id.value_namespace = name_space;
        te_mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp-mesh-group-enabled")
    {
        ldp_mesh_group_enabled.yfilter = yfilter;
    }
    if(value_path == "ldp-te-mesh-group-all-cfgd")
    {
        ldp_te_mesh_group_all_cfgd.yfilter = yfilter;
    }
    if(value_path == "te-mesh-group-id")
    {
        te_mesh_group_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-mesh-group-enabled" || name == "ldp-te-mesh-group-all-cfgd" || name == "te-mesh-group-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::AutoConfig()
    :
    tuple{YType::str, "tuple"}
{
    yang_name = "auto-config"; yang_parent_name = "interface";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::~AutoConfig()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::has_data() const
{
    return tuple.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-config";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoConfig' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Discovery()
    :
    brief(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief>())
	,link_hellos(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos>())
	,stats(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats>())
	,summary(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary>())
	,targeted_hellos(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos>())
{
    brief->parent = this;

    link_hellos->parent = this;

    stats->parent = this;

    summary->parent = this;

    targeted_hellos->parent = this;

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::has_data() const
{
    return (brief !=  nullptr && brief->has_data())
	|| (link_hellos !=  nullptr && link_hellos->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (link_hellos !=  nullptr && link_hellos->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "link-hellos")
    {
        if(link_hellos == nullptr)
        {
            link_hellos = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos>();
        }
        return link_hellos;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "targeted-hellos")
    {
        if(targeted_hellos == nullptr)
        {
            targeted_hellos = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos>();
        }
        return targeted_hellos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(link_hellos != nullptr)
    {
        children["link-hellos"] = link_hellos;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(targeted_hellos != nullptr)
    {
        children["targeted-hellos"] = targeted_hellos;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "link-hellos" || name == "stats" || name == "summary" || name == "targeted-hellos")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHellos()
{
    yang_name = "link-hellos"; yang_parent_name = "discovery";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::~LinkHellos()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::has_data() const
{
    for (std::size_t index=0; index<link_hello.size(); index++)
    {
        if(link_hello[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::has_operation() const
{
    for (std::size_t index=0; index<link_hello.size(); index++)
    {
        if(link_hello[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hellos";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHellos' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hello")
    {
        for(auto const & c : link_hello)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello>();
        c->parent = this;
        link_hello.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_hello)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hello")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::LinkHello()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    next_hello{YType::uint32, "next-hello"},
    quick_start_disabled{YType::boolean, "quick-start-disabled"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_>())
{
    vrf->parent = this;

    yang_name = "link-hello"; yang_parent_name = "link-hellos";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::~LinkHello()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_data() const
{
    for (std::size_t index=0; index<discovery_link_af.size(); index++)
    {
        if(discovery_link_af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| next_hello.is_set
	|| quick_start_disabled.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_operation() const
{
    for (std::size_t index=0; index<discovery_link_af.size(); index++)
    {
        if(discovery_link_af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(next_hello.yfilter)
	|| ydk::is_set(quick_start_disabled.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHello' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.yfilter)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (quick_start_disabled.is_set || is_set(quick_start_disabled.yfilter)) leaf_name_data.push_back(quick_start_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-link-af")
    {
        for(auto const & c : discovery_link_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf>();
        c->parent = this;
        discovery_link_af.push_back(c);
        return c;
    }

    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation>();
        c->parent = this;
        hello_information.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discovery_link_af)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : hello_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
        next_hello.value_namespace = name_space;
        next_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled = value;
        quick_start_disabled.value_namespace = name_space;
        quick_start_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "next-hello")
    {
        next_hello.yfilter = yfilter;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-link-af" || name == "hello-information" || name == "vrf" || name == "interface-name" || name == "interface" || name == "interface-name-xr" || name == "next-hello" || name == "quick-start-disabled")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "link-hello";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::HelloInformation()
    :
    disc_expiry{YType::uint32, "disc-expiry"},
    established_age{YType::uint64, "established-age"},
    established_time{YType::uint64, "established-time"},
    hold_time{YType::uint32, "hold-time"},
    is_no_route{YType::boolean, "is-no-route"},
    is_targeted{YType::boolean, "is-targeted"},
    local_hold_time{YType::uint32, "local-hold-time"},
    neighbor_hold_time{YType::uint32, "neighbor-hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    session_bringup_failure_reason{YType::str, "session-bringup-failure-reason"},
    session_up{YType::boolean, "session-up"}
    	,
    neighbor_src_address(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress>())
	,neighbor_transport_address(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress>())
	,target(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target>())
{
    neighbor_src_address->parent = this;

    neighbor_transport_address->parent = this;

    target->parent = this;

    yang_name = "hello-information"; yang_parent_name = "link-hello";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_data() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_data())
            return true;
    }
    return disc_expiry.is_set
	|| established_age.is_set
	|| established_time.is_set
	|| hold_time.is_set
	|| is_no_route.is_set
	|| is_targeted.is_set
	|| local_hold_time.is_set
	|| neighbor_hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| session_bringup_failure_reason.is_set
	|| session_up.is_set
	|| (neighbor_src_address !=  nullptr && neighbor_src_address->has_data())
	|| (neighbor_transport_address !=  nullptr && neighbor_transport_address->has_data())
	|| (target !=  nullptr && target->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_operation() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disc_expiry.yfilter)
	|| ydk::is_set(established_age.yfilter)
	|| ydk::is_set(established_time.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(is_no_route.yfilter)
	|| ydk::is_set(is_targeted.yfilter)
	|| ydk::is_set(local_hold_time.yfilter)
	|| ydk::is_set(neighbor_hold_time.yfilter)
	|| ydk::is_set(neighbor_ldp_identifier.yfilter)
	|| ydk::is_set(session_bringup_failure_reason.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| (neighbor_src_address !=  nullptr && neighbor_src_address->has_operation())
	|| (neighbor_transport_address !=  nullptr && neighbor_transport_address->has_operation())
	|| (target !=  nullptr && target->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disc_expiry.is_set || is_set(disc_expiry.yfilter)) leaf_name_data.push_back(disc_expiry.get_name_leafdata());
    if (established_age.is_set || is_set(established_age.yfilter)) leaf_name_data.push_back(established_age.get_name_leafdata());
    if (established_time.is_set || is_set(established_time.yfilter)) leaf_name_data.push_back(established_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.yfilter)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (is_targeted.is_set || is_set(is_targeted.yfilter)) leaf_name_data.push_back(is_targeted.get_name_leafdata());
    if (local_hold_time.is_set || is_set(local_hold_time.yfilter)) leaf_name_data.push_back(local_hold_time.get_name_leafdata());
    if (neighbor_hold_time.is_set || is_set(neighbor_hold_time.yfilter)) leaf_name_data.push_back(neighbor_hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.yfilter)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (session_bringup_failure_reason.is_set || is_set(session_bringup_failure_reason.yfilter)) leaf_name_data.push_back(session_bringup_failure_reason.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-session-down-info")
    {
        for(auto const & c : last_session_down_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo>();
        c->parent = this;
        last_session_down_info.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor-src-address")
    {
        if(neighbor_src_address == nullptr)
        {
            neighbor_src_address = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress>();
        }
        return neighbor_src_address;
    }

    if(child_yang_name == "neighbor-transport-address")
    {
        if(neighbor_transport_address == nullptr)
        {
            neighbor_transport_address = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress>();
        }
        return neighbor_transport_address;
    }

    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : last_session_down_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(neighbor_src_address != nullptr)
    {
        children["neighbor-src-address"] = neighbor_src_address;
    }

    if(neighbor_transport_address != nullptr)
    {
        children["neighbor-transport-address"] = neighbor_transport_address;
    }

    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disc-expiry")
    {
        disc_expiry = value;
        disc_expiry.value_namespace = name_space;
        disc_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-age")
    {
        established_age = value;
        established_age.value_namespace = name_space;
        established_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-time")
    {
        established_time = value;
        established_time.value_namespace = name_space;
        established_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
        is_no_route.value_namespace = name_space;
        is_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-targeted")
    {
        is_targeted = value;
        is_targeted.value_namespace = name_space;
        is_targeted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time = value;
        local_hold_time.value_namespace = name_space;
        local_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time = value;
        neighbor_hold_time.value_namespace = name_space;
        neighbor_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
        neighbor_ldp_identifier.value_namespace = name_space;
        neighbor_ldp_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason = value;
        session_bringup_failure_reason.value_namespace = name_space;
        session_bringup_failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disc-expiry")
    {
        disc_expiry.yfilter = yfilter;
    }
    if(value_path == "established-age")
    {
        established_age.yfilter = yfilter;
    }
    if(value_path == "established-time")
    {
        established_time.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "is-no-route")
    {
        is_no_route.yfilter = yfilter;
    }
    if(value_path == "is-targeted")
    {
        is_targeted.yfilter = yfilter;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier.yfilter = yfilter;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-session-down-info" || name == "neighbor-src-address" || name == "neighbor-transport-address" || name == "target" || name == "disc-expiry" || name == "established-age" || name == "established-time" || name == "hold-time" || name == "is-no-route" || name == "is-targeted" || name == "local-hold-time" || name == "neighbor-hold-time" || name == "neighbor-ldp-identifier" || name == "session-bringup-failure-reason" || name == "session-up")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::NeighborSrcAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "neighbor-src-address"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::~NeighborSrcAddress()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-src-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSrcAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::NeighborTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "neighbor-transport-address"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::~NeighborTransportAddress()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-transport-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborTransportAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::Target()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::~Target()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Target' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::LastSessionDownInfo()
    :
    last_session_down_reason{YType::str, "last-session-down-reason"},
    last_session_down_time{YType::uint64, "last-session-down-time"},
    last_session_up_time{YType::uint32, "last-session-up-time"}
{
    yang_name = "last-session-down-info"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::~LastSessionDownInfo()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_data() const
{
    return last_session_down_reason.is_set
	|| last_session_down_time.is_set
	|| last_session_up_time.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_session_down_reason.yfilter)
	|| ydk::is_set(last_session_down_time.yfilter)
	|| ydk::is_set(last_session_up_time.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-session-down-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastSessionDownInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_session_down_reason.is_set || is_set(last_session_down_reason.yfilter)) leaf_name_data.push_back(last_session_down_reason.get_name_leafdata());
    if (last_session_down_time.is_set || is_set(last_session_down_time.yfilter)) leaf_name_data.push_back(last_session_down_time.get_name_leafdata());
    if (last_session_up_time.is_set || is_set(last_session_up_time.yfilter)) leaf_name_data.push_back(last_session_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason = value;
        last_session_down_reason.value_namespace = name_space;
        last_session_down_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time = value;
        last_session_down_time.value_namespace = name_space;
        last_session_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time = value;
        last_session_up_time.value_namespace = name_space;
        last_session_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason.yfilter = yfilter;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time.yfilter = yfilter;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-session-down-reason" || name == "last-session-down-time" || name == "last-session-up-time")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::DiscoveryLinkAf()
    :
    interval{YType::uint32, "interval"}
    	,
    local_src_address(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress>())
	,local_transport_address(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress>())
{
    local_src_address->parent = this;

    local_transport_address->parent = this;

    yang_name = "discovery-link-af"; yang_parent_name = "link-hello";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::~DiscoveryLinkAf()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::has_data() const
{
    return interval.is_set
	|| (local_src_address !=  nullptr && local_src_address->has_data())
	|| (local_transport_address !=  nullptr && local_transport_address->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (local_src_address !=  nullptr && local_src_address->has_operation())
	|| (local_transport_address !=  nullptr && local_transport_address->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-link-af";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscoveryLinkAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-src-address")
    {
        if(local_src_address == nullptr)
        {
            local_src_address = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress>();
        }
        return local_src_address;
    }

    if(child_yang_name == "local-transport-address")
    {
        if(local_transport_address == nullptr)
        {
            local_transport_address = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress>();
        }
        return local_transport_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_src_address != nullptr)
    {
        children["local-src-address"] = local_src_address;
    }

    if(local_transport_address != nullptr)
    {
        children["local-transport-address"] = local_transport_address;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-src-address" || name == "local-transport-address" || name == "interval")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::LocalSrcAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-src-address"; yang_parent_name = "discovery-link-af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::~LocalSrcAddress()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-src-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalSrcAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::LocalTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-transport-address"; yang_parent_name = "discovery-link-af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::~LocalTransportAddress()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-transport-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalTransportAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Summary()
    :
    local_ldp_id{YType::str, "local-ldp-id"},
    num_of_active_ldp_interfaces{YType::uint32, "num-of-active-ldp-interfaces"},
    num_of_disc_with_bad_addr_recv{YType::uint32, "num-of-disc-with-bad-addr-recv"},
    num_of_disc_with_bad_hello_pdu{YType::uint32, "num-of-disc-with-bad-hello-pdu"},
    num_of_disc_with_bad_xport_addr{YType::uint32, "num-of-disc-with-bad-xport-addr"},
    num_of_disc_with_same_router_id{YType::uint32, "num-of-disc-with-same-router-id"},
    num_of_disc_with_wrong_router_id{YType::uint32, "num-of-disc-with-wrong-router-id"},
    num_of_ldp_interfaces{YType::uint32, "num-of-ldp-interfaces"},
    num_of_lnk_disc_recv{YType::uint32, "num-of-lnk-disc-recv"},
    num_of_lnk_disc_xmit{YType::uint32, "num-of-lnk-disc-xmit"},
    num_of_tgt_disc_recv{YType::uint32, "num-of-tgt-disc-recv"},
    num_of_tgt_disc_xmit{YType::uint32, "num-of-tgt-disc-xmit"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_>())
{
    vrf->parent = this;

    yang_name = "summary"; yang_parent_name = "discovery";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::~Summary()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::has_data() const
{
    return local_ldp_id.is_set
	|| num_of_active_ldp_interfaces.is_set
	|| num_of_disc_with_bad_addr_recv.is_set
	|| num_of_disc_with_bad_hello_pdu.is_set
	|| num_of_disc_with_bad_xport_addr.is_set
	|| num_of_disc_with_same_router_id.is_set
	|| num_of_disc_with_wrong_router_id.is_set
	|| num_of_ldp_interfaces.is_set
	|| num_of_lnk_disc_recv.is_set
	|| num_of_lnk_disc_xmit.is_set
	|| num_of_tgt_disc_recv.is_set
	|| num_of_tgt_disc_xmit.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ldp_id.yfilter)
	|| ydk::is_set(num_of_active_ldp_interfaces.yfilter)
	|| ydk::is_set(num_of_disc_with_bad_addr_recv.yfilter)
	|| ydk::is_set(num_of_disc_with_bad_hello_pdu.yfilter)
	|| ydk::is_set(num_of_disc_with_bad_xport_addr.yfilter)
	|| ydk::is_set(num_of_disc_with_same_router_id.yfilter)
	|| ydk::is_set(num_of_disc_with_wrong_router_id.yfilter)
	|| ydk::is_set(num_of_ldp_interfaces.yfilter)
	|| ydk::is_set(num_of_lnk_disc_recv.yfilter)
	|| ydk::is_set(num_of_lnk_disc_xmit.yfilter)
	|| ydk::is_set(num_of_tgt_disc_recv.yfilter)
	|| ydk::is_set(num_of_tgt_disc_xmit.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ldp_id.is_set || is_set(local_ldp_id.yfilter)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (num_of_active_ldp_interfaces.is_set || is_set(num_of_active_ldp_interfaces.yfilter)) leaf_name_data.push_back(num_of_active_ldp_interfaces.get_name_leafdata());
    if (num_of_disc_with_bad_addr_recv.is_set || is_set(num_of_disc_with_bad_addr_recv.yfilter)) leaf_name_data.push_back(num_of_disc_with_bad_addr_recv.get_name_leafdata());
    if (num_of_disc_with_bad_hello_pdu.is_set || is_set(num_of_disc_with_bad_hello_pdu.yfilter)) leaf_name_data.push_back(num_of_disc_with_bad_hello_pdu.get_name_leafdata());
    if (num_of_disc_with_bad_xport_addr.is_set || is_set(num_of_disc_with_bad_xport_addr.yfilter)) leaf_name_data.push_back(num_of_disc_with_bad_xport_addr.get_name_leafdata());
    if (num_of_disc_with_same_router_id.is_set || is_set(num_of_disc_with_same_router_id.yfilter)) leaf_name_data.push_back(num_of_disc_with_same_router_id.get_name_leafdata());
    if (num_of_disc_with_wrong_router_id.is_set || is_set(num_of_disc_with_wrong_router_id.yfilter)) leaf_name_data.push_back(num_of_disc_with_wrong_router_id.get_name_leafdata());
    if (num_of_ldp_interfaces.is_set || is_set(num_of_ldp_interfaces.yfilter)) leaf_name_data.push_back(num_of_ldp_interfaces.get_name_leafdata());
    if (num_of_lnk_disc_recv.is_set || is_set(num_of_lnk_disc_recv.yfilter)) leaf_name_data.push_back(num_of_lnk_disc_recv.get_name_leafdata());
    if (num_of_lnk_disc_xmit.is_set || is_set(num_of_lnk_disc_xmit.yfilter)) leaf_name_data.push_back(num_of_lnk_disc_xmit.get_name_leafdata());
    if (num_of_tgt_disc_recv.is_set || is_set(num_of_tgt_disc_recv.yfilter)) leaf_name_data.push_back(num_of_tgt_disc_recv.get_name_leafdata());
    if (num_of_tgt_disc_xmit.is_set || is_set(num_of_tgt_disc_xmit.yfilter)) leaf_name_data.push_back(num_of_tgt_disc_xmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
        local_ldp_id.value_namespace = name_space;
        local_ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces = value;
        num_of_active_ldp_interfaces.value_namespace = name_space;
        num_of_active_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-bad-addr-recv")
    {
        num_of_disc_with_bad_addr_recv = value;
        num_of_disc_with_bad_addr_recv.value_namespace = name_space;
        num_of_disc_with_bad_addr_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-bad-hello-pdu")
    {
        num_of_disc_with_bad_hello_pdu = value;
        num_of_disc_with_bad_hello_pdu.value_namespace = name_space;
        num_of_disc_with_bad_hello_pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-bad-xport-addr")
    {
        num_of_disc_with_bad_xport_addr = value;
        num_of_disc_with_bad_xport_addr.value_namespace = name_space;
        num_of_disc_with_bad_xport_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-same-router-id")
    {
        num_of_disc_with_same_router_id = value;
        num_of_disc_with_same_router_id.value_namespace = name_space;
        num_of_disc_with_same_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-wrong-router-id")
    {
        num_of_disc_with_wrong_router_id = value;
        num_of_disc_with_wrong_router_id.value_namespace = name_space;
        num_of_disc_with_wrong_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces = value;
        num_of_ldp_interfaces.value_namespace = name_space;
        num_of_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv = value;
        num_of_lnk_disc_recv.value_namespace = name_space;
        num_of_lnk_disc_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit = value;
        num_of_lnk_disc_xmit.value_namespace = name_space;
        num_of_lnk_disc_xmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv = value;
        num_of_tgt_disc_recv.value_namespace = name_space;
        num_of_tgt_disc_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit = value;
        num_of_tgt_disc_xmit.value_namespace = name_space;
        num_of_tgt_disc_xmit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ldp-id")
    {
        local_ldp_id.yfilter = yfilter;
    }
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-bad-addr-recv")
    {
        num_of_disc_with_bad_addr_recv.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-bad-hello-pdu")
    {
        num_of_disc_with_bad_hello_pdu.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-bad-xport-addr")
    {
        num_of_disc_with_bad_xport_addr.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-same-router-id")
    {
        num_of_disc_with_same_router_id.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-wrong-router-id")
    {
        num_of_disc_with_wrong_router_id.yfilter = yfilter;
    }
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv.yfilter = yfilter;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit.yfilter = yfilter;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv.yfilter = yfilter;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "local-ldp-id" || name == "num-of-active-ldp-interfaces" || name == "num-of-disc-with-bad-addr-recv" || name == "num-of-disc-with-bad-hello-pdu" || name == "num-of-disc-with-bad-xport-addr" || name == "num-of-disc-with-same-router-id" || name == "num-of-disc-with-wrong-router-id" || name == "num-of-ldp-interfaces" || name == "num-of-lnk-disc-recv" || name == "num-of-lnk-disc-xmit" || name == "num-of-tgt-disc-recv" || name == "num-of-tgt-disc-xmit")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "summary";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHellos()
{
    yang_name = "targeted-hellos"; yang_parent_name = "discovery";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::~TargetedHellos()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::has_data() const
{
    for (std::size_t index=0; index<targeted_hello.size(); index++)
    {
        if(targeted_hello[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::has_operation() const
{
    for (std::size_t index=0; index<targeted_hello.size(); index++)
    {
        if(targeted_hello[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hellos";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHellos' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targeted-hello")
    {
        for(auto const & c : targeted_hello)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello>();
        c->parent = this;
        targeted_hello.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : targeted_hello)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targeted-hello")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::TargetedHello()
    :
    adjacency_ldp_identifier{YType::str, "adjacency-ldp-identifier"},
    disc_expiry{YType::uint32, "disc-expiry"},
    established_age{YType::uint64, "established-age"},
    established_time{YType::uint64, "established-time"},
    hold_time{YType::uint32, "hold-time"},
    interval{YType::uint32, "interval"},
    local_address{YType::str, "local-address"},
    local_hold_time{YType::uint32, "local-hold-time"},
    neighbor_hold_time{YType::uint32, "neighbor-hold-time"},
    next_hello{YType::uint32, "next-hello"},
    quick_start_disabled{YType::boolean, "quick-start-disabled"},
    session_bringup_failure_reason{YType::str, "session-bringup-failure-reason"},
    session_up{YType::boolean, "session-up"},
    state{YType::enumeration, "state"},
    target_address{YType::str, "target-address"}
    	,
    dhcb_local_address(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress>())
	,dhcb_target_address(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress>())
{
    dhcb_local_address->parent = this;

    dhcb_target_address->parent = this;

    yang_name = "targeted-hello"; yang_parent_name = "targeted-hellos";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::has_data() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_data())
            return true;
    }
    return adjacency_ldp_identifier.is_set
	|| disc_expiry.is_set
	|| established_age.is_set
	|| established_time.is_set
	|| hold_time.is_set
	|| interval.is_set
	|| local_address.is_set
	|| local_hold_time.is_set
	|| neighbor_hold_time.is_set
	|| next_hello.is_set
	|| quick_start_disabled.is_set
	|| session_bringup_failure_reason.is_set
	|| session_up.is_set
	|| state.is_set
	|| target_address.is_set
	|| (dhcb_local_address !=  nullptr && dhcb_local_address->has_data())
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::has_operation() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(adjacency_ldp_identifier.yfilter)
	|| ydk::is_set(disc_expiry.yfilter)
	|| ydk::is_set(established_age.yfilter)
	|| ydk::is_set(established_time.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(local_hold_time.yfilter)
	|| ydk::is_set(neighbor_hold_time.yfilter)
	|| ydk::is_set(next_hello.yfilter)
	|| ydk::is_set(quick_start_disabled.yfilter)
	|| ydk::is_set(session_bringup_failure_reason.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(target_address.yfilter)
	|| (dhcb_local_address !=  nullptr && dhcb_local_address->has_operation())
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHello' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_ldp_identifier.is_set || is_set(adjacency_ldp_identifier.yfilter)) leaf_name_data.push_back(adjacency_ldp_identifier.get_name_leafdata());
    if (disc_expiry.is_set || is_set(disc_expiry.yfilter)) leaf_name_data.push_back(disc_expiry.get_name_leafdata());
    if (established_age.is_set || is_set(established_age.yfilter)) leaf_name_data.push_back(established_age.get_name_leafdata());
    if (established_time.is_set || is_set(established_time.yfilter)) leaf_name_data.push_back(established_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (local_hold_time.is_set || is_set(local_hold_time.yfilter)) leaf_name_data.push_back(local_hold_time.get_name_leafdata());
    if (neighbor_hold_time.is_set || is_set(neighbor_hold_time.yfilter)) leaf_name_data.push_back(neighbor_hold_time.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.yfilter)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (quick_start_disabled.is_set || is_set(quick_start_disabled.yfilter)) leaf_name_data.push_back(quick_start_disabled.get_name_leafdata());
    if (session_bringup_failure_reason.is_set || is_set(session_bringup_failure_reason.yfilter)) leaf_name_data.push_back(session_bringup_failure_reason.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcb-local-address")
    {
        if(dhcb_local_address == nullptr)
        {
            dhcb_local_address = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress>();
        }
        return dhcb_local_address;
    }

    if(child_yang_name == "dhcb-target-address")
    {
        if(dhcb_target_address == nullptr)
        {
            dhcb_target_address = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress>();
        }
        return dhcb_target_address;
    }

    if(child_yang_name == "last-session-down-info")
    {
        for(auto const & c : last_session_down_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo>();
        c->parent = this;
        last_session_down_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcb_local_address != nullptr)
    {
        children["dhcb-local-address"] = dhcb_local_address;
    }

    if(dhcb_target_address != nullptr)
    {
        children["dhcb-target-address"] = dhcb_target_address;
    }

    for (auto const & c : last_session_down_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-ldp-identifier")
    {
        adjacency_ldp_identifier = value;
        adjacency_ldp_identifier.value_namespace = name_space;
        adjacency_ldp_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disc-expiry")
    {
        disc_expiry = value;
        disc_expiry.value_namespace = name_space;
        disc_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-age")
    {
        established_age = value;
        established_age.value_namespace = name_space;
        established_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-time")
    {
        established_time = value;
        established_time.value_namespace = name_space;
        established_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time = value;
        local_hold_time.value_namespace = name_space;
        local_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time = value;
        neighbor_hold_time.value_namespace = name_space;
        neighbor_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
        next_hello.value_namespace = name_space;
        next_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled = value;
        quick_start_disabled.value_namespace = name_space;
        quick_start_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason = value;
        session_bringup_failure_reason.value_namespace = name_space;
        session_bringup_failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-ldp-identifier")
    {
        adjacency_ldp_identifier.yfilter = yfilter;
    }
    if(value_path == "disc-expiry")
    {
        disc_expiry.yfilter = yfilter;
    }
    if(value_path == "established-age")
    {
        established_age.yfilter = yfilter;
    }
    if(value_path == "established-time")
    {
        established_time.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time.yfilter = yfilter;
    }
    if(value_path == "next-hello")
    {
        next_hello.yfilter = yfilter;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled.yfilter = yfilter;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcb-local-address" || name == "dhcb-target-address" || name == "last-session-down-info" || name == "adjacency-ldp-identifier" || name == "disc-expiry" || name == "established-age" || name == "established-time" || name == "hold-time" || name == "interval" || name == "local-address" || name == "local-hold-time" || name == "neighbor-hold-time" || name == "next-hello" || name == "quick-start-disabled" || name == "session-bringup-failure-reason" || name == "session-up" || name == "state" || name == "target-address")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::DhcbLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dhcb-local-address"; yang_parent_name = "targeted-hello";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::~DhcbLocalAddress()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcb-local-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcbLocalAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::DhcbTargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dhcb-target-address"; yang_parent_name = "targeted-hello";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::~DhcbTargetAddress()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcb-target-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcbTargetAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::LastSessionDownInfo()
    :
    last_session_down_reason{YType::str, "last-session-down-reason"},
    last_session_down_time{YType::uint64, "last-session-down-time"},
    last_session_up_time{YType::uint32, "last-session-up-time"}
{
    yang_name = "last-session-down-info"; yang_parent_name = "targeted-hello";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::~LastSessionDownInfo()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::has_data() const
{
    return last_session_down_reason.is_set
	|| last_session_down_time.is_set
	|| last_session_up_time.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_session_down_reason.yfilter)
	|| ydk::is_set(last_session_down_time.yfilter)
	|| ydk::is_set(last_session_up_time.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-session-down-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastSessionDownInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_session_down_reason.is_set || is_set(last_session_down_reason.yfilter)) leaf_name_data.push_back(last_session_down_reason.get_name_leafdata());
    if (last_session_down_time.is_set || is_set(last_session_down_time.yfilter)) leaf_name_data.push_back(last_session_down_time.get_name_leafdata());
    if (last_session_up_time.is_set || is_set(last_session_up_time.yfilter)) leaf_name_data.push_back(last_session_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason = value;
        last_session_down_reason.value_namespace = name_space;
        last_session_down_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time = value;
        last_session_down_time.value_namespace = name_space;
        last_session_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time = value;
        last_session_up_time.value_namespace = name_space;
        last_session_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason.yfilter = yfilter;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time.yfilter = yfilter;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-session-down-reason" || name == "last-session-down-time" || name == "last-session-up-time")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::Brief()
    :
    link_hello_briefs(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs>())
	,targeted_hello_briefs(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs>())
{
    link_hello_briefs->parent = this;

    targeted_hello_briefs->parent = this;

    yang_name = "brief"; yang_parent_name = "discovery";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::~Brief()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::has_data() const
{
    return (link_hello_briefs !=  nullptr && link_hello_briefs->has_data())
	|| (targeted_hello_briefs !=  nullptr && targeted_hello_briefs->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::has_operation() const
{
    return is_set(yfilter)
	|| (link_hello_briefs !=  nullptr && link_hello_briefs->has_operation())
	|| (targeted_hello_briefs !=  nullptr && targeted_hello_briefs->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hello-briefs")
    {
        if(link_hello_briefs == nullptr)
        {
            link_hello_briefs = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs>();
        }
        return link_hello_briefs;
    }

    if(child_yang_name == "targeted-hello-briefs")
    {
        if(targeted_hello_briefs == nullptr)
        {
            targeted_hello_briefs = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs>();
        }
        return targeted_hello_briefs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_hello_briefs != nullptr)
    {
        children["link-hello-briefs"] = link_hello_briefs;
    }

    if(targeted_hello_briefs != nullptr)
    {
        children["targeted-hello-briefs"] = targeted_hello_briefs;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hello-briefs" || name == "targeted-hello-briefs")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBriefs()
{
    yang_name = "link-hello-briefs"; yang_parent_name = "brief";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::~LinkHelloBriefs()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::has_data() const
{
    for (std::size_t index=0; index<link_hello_brief.size(); index++)
    {
        if(link_hello_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::has_operation() const
{
    for (std::size_t index=0; index<link_hello_brief.size(); index++)
    {
        if(link_hello_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-briefs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHelloBriefs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hello-brief")
    {
        for(auto const & c : link_hello_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief>();
        c->parent = this;
        link_hello_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_hello_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hello-brief")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::LinkHelloBrief()
    :
    interface_name{YType::str, "interface-name"},
    address_family{YType::enumeration, "address-family"},
    address_family_set{YType::enumeration, "address-family-set"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_>())
{
    vrf->parent = this;

    yang_name = "link-hello-brief"; yang_parent_name = "link-hello-briefs";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::~LinkHelloBrief()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::has_data() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| address_family.is_set
	|| address_family_set.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::has_operation() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(address_family_set.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-brief" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHelloBrief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (address_family_set.is_set || is_set(address_family_set.yfilter)) leaf_name_data.push_back(address_family_set.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation>();
        c->parent = this;
        hello_information.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family-set")
    {
        address_family_set = value;
        address_family_set.value_namespace = name_space;
        address_family_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "address-family-set")
    {
        address_family_set.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-information" || name == "vrf" || name == "interface-name" || name == "address-family" || name == "address-family-set" || name == "interface" || name == "interface-name-xr")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "link-hello-brief";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::HelloInformation()
    :
    hold_time{YType::uint32, "hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    session_up{YType::boolean, "session-up"}
{
    yang_name = "hello-information"; yang_parent_name = "link-hello-brief";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::has_data() const
{
    return hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| session_up.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(neighbor_ldp_identifier.yfilter)
	|| ydk::is_set(session_up.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.yfilter)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
        neighbor_ldp_identifier.value_namespace = name_space;
        neighbor_ldp_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "neighbor-ldp-identifier" || name == "session-up")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBriefs()
{
    yang_name = "targeted-hello-briefs"; yang_parent_name = "brief";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::~TargetedHelloBriefs()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::has_data() const
{
    for (std::size_t index=0; index<targeted_hello_brief.size(); index++)
    {
        if(targeted_hello_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::has_operation() const
{
    for (std::size_t index=0; index<targeted_hello_brief.size(); index++)
    {
        if(targeted_hello_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello-briefs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHelloBriefs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targeted-hello-brief")
    {
        for(auto const & c : targeted_hello_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief>();
        c->parent = this;
        targeted_hello_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : targeted_hello_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targeted-hello-brief")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::TargetedHelloBrief()
    :
    address_family{YType::enumeration, "address-family"},
    local_address{YType::str, "local-address"},
    target_address{YType::str, "target-address"}
    	,
    dhcb_target_address(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress>())
	,vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_>())
{
    dhcb_target_address->parent = this;

    vrf->parent = this;

    yang_name = "targeted-hello-brief"; yang_parent_name = "targeted-hello-briefs";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::~TargetedHelloBrief()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::has_data() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| local_address.is_set
	|| target_address.is_set
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::has_operation() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(target_address.yfilter)
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello-brief";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHelloBrief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcb-target-address")
    {
        if(dhcb_target_address == nullptr)
        {
            dhcb_target_address = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress>();
        }
        return dhcb_target_address;
    }

    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation>();
        c->parent = this;
        hello_information.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcb_target_address != nullptr)
    {
        children["dhcb-target-address"] = dhcb_target_address;
    }

    for (auto const & c : hello_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcb-target-address" || name == "hello-information" || name == "vrf" || name == "address-family" || name == "local-address" || name == "target-address")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "targeted-hello-brief";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::DhcbTargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dhcb-target-address"; yang_parent_name = "targeted-hello-brief";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::~DhcbTargetAddress()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcb-target-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcbTargetAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::HelloInformation()
    :
    hold_time{YType::uint32, "hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    session_up{YType::boolean, "session-up"}
{
    yang_name = "hello-information"; yang_parent_name = "targeted-hello-brief";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::has_data() const
{
    return hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| session_up.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(neighbor_ldp_identifier.yfilter)
	|| ydk::is_set(session_up.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.yfilter)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
        neighbor_ldp_identifier.value_namespace = name_space;
        neighbor_ldp_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "neighbor-ldp-identifier" || name == "session-up")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stats()
{
    yang_name = "stats"; yang_parent_name = "discovery";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::~Stats()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::has_data() const
{
    for (std::size_t index=0; index<stat.size(); index++)
    {
        if(stat[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::has_operation() const
{
    for (std::size_t index=0; index<stat.size(); index++)
    {
        if(stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stat")
    {
        for(auto const & c : stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat>();
        c->parent = this;
        stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stat")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::Stat()
    :
    adjacency_group_up_time{YType::uint32, "adjacency-group-up-time"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"},
    tcp_arb_chg_count{YType::uint32, "tcp-arb-chg-count"},
    tcp_open_count{YType::uint32, "tcp-open-count"},
    tcp_role{YType::uint32, "tcp-role"}
{
    yang_name = "stat"; yang_parent_name = "stats";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::~Stat()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::has_data() const
{
    return adjacency_group_up_time.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| tcp_arb_chg_count.is_set
	|| tcp_open_count.is_set
	|| tcp_role.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_group_up_time.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(tcp_arb_chg_count.yfilter)
	|| ydk::is_set(tcp_open_count.yfilter)
	|| ydk::is_set(tcp_role.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stat' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_group_up_time.is_set || is_set(adjacency_group_up_time.yfilter)) leaf_name_data.push_back(adjacency_group_up_time.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (tcp_arb_chg_count.is_set || is_set(tcp_arb_chg_count.yfilter)) leaf_name_data.push_back(tcp_arb_chg_count.get_name_leafdata());
    if (tcp_open_count.is_set || is_set(tcp_open_count.yfilter)) leaf_name_data.push_back(tcp_open_count.get_name_leafdata());
    if (tcp_role.is_set || is_set(tcp_role.yfilter)) leaf_name_data.push_back(tcp_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-group-up-time")
    {
        adjacency_group_up_time = value;
        adjacency_group_up_time.value_namespace = name_space;
        adjacency_group_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-arb-chg-count")
    {
        tcp_arb_chg_count = value;
        tcp_arb_chg_count.value_namespace = name_space;
        tcp_arb_chg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-open-count")
    {
        tcp_open_count = value;
        tcp_open_count.value_namespace = name_space;
        tcp_open_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-role")
    {
        tcp_role = value;
        tcp_role.value_namespace = name_space;
        tcp_role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-group-up-time")
    {
        adjacency_group_up_time.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "tcp-arb-chg-count")
    {
        tcp_arb_chg_count.yfilter = yfilter;
    }
    if(value_path == "tcp-open-count")
    {
        tcp_open_count.yfilter = yfilter;
    }
    if(value_path == "tcp-role")
    {
        tcp_role.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-group-up-time" || name == "label-space-id" || name == "lsr-id" || name == "tcp-arb-chg-count" || name == "tcp-open-count" || name == "tcp-role")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindingsSummaryAll()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_>())
{
    vrf->parent = this;

    yang_name = "bindings-summary-all"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::~BindingsSummaryAll()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::has_data() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::has_operation() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(binding_local_explicit_null.yfilter)
	|| ydk::is_set(binding_local_implicit_null.yfilter)
	|| ydk::is_set(binding_local_no_route.yfilter)
	|| ydk::is_set(binding_local_non_null.yfilter)
	|| ydk::is_set(binding_local_null.yfilter)
	|| ydk::is_set(binding_local_oor.yfilter)
	|| ydk::is_set(binding_no_route.yfilter)
	|| ydk::is_set(highest_allocated_label.yfilter)
	|| ydk::is_set(lowest_allocated_label.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary-all";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsSummaryAll' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.yfilter)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.yfilter)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.yfilter)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.yfilter)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.yfilter)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.yfilter)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.yfilter)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.yfilter)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.yfilter)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bind-af")
    {
        for(auto const & c : bind_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf>();
        c->parent = this;
        bind_af.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bind_af)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
        binding_local_explicit_null.value_namespace = name_space;
        binding_local_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
        binding_local_implicit_null.value_namespace = name_space;
        binding_local_implicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
        binding_local_no_route.value_namespace = name_space;
        binding_local_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
        binding_local_non_null.value_namespace = name_space;
        binding_local_non_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
        binding_local_null.value_namespace = name_space;
        binding_local_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
        binding_local_oor.value_namespace = name_space;
        binding_local_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
        binding_no_route.value_namespace = name_space;
        binding_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
        highest_allocated_label.value_namespace = name_space;
        highest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
        lowest_allocated_label.value_namespace = name_space;
        lowest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route.yfilter = yfilter;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor.yfilter = yfilter;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route.yfilter = yfilter;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label.yfilter = yfilter;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bind-af" || name == "vrf" || name == "address-family" || name == "binding-local-explicit-null" || name == "binding-local-implicit-null" || name == "binding-local-no-route" || name == "binding-local-non-null" || name == "binding-local-null" || name == "binding-local-oor" || name == "binding-no-route" || name == "highest-allocated-label" || name == "lowest-allocated-label")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"}
{
    yang_name = "bind-af"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::has_data() const
{
    return address_family.is_set
	|| binding_local.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(binding_local.yfilter)
	|| ydk::is_set(binding_remote.yfilter)
	|| ydk::is_set(binding_total.yfilter)
	|| ydk::is_set(last_lib_update.yfilter)
	|| ydk::is_set(lib_minimum_revision_sent_all.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.yfilter)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.yfilter)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.yfilter)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.yfilter)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.yfilter)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
        binding_local.value_namespace = name_space;
        binding_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
        binding_remote.value_namespace = name_space;
        binding_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
        binding_total.value_namespace = name_space;
        binding_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
        last_lib_update.value_namespace = name_space;
        last_lib_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
        lib_minimum_revision_sent_all.value_namespace = name_space;
        lib_minimum_revision_sent_all.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "binding-local")
    {
        binding_local.yfilter = yfilter;
    }
    if(value_path == "binding-remote")
    {
        binding_remote.yfilter = yfilter;
    }
    if(value_path == "binding-total")
    {
        binding_total.yfilter = yfilter;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update.yfilter = yfilter;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "binding-local" || name == "binding-remote" || name == "binding-total" || name == "last-lib-update" || name == "lib-minimum-revision-sent-all")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwardings()
{
    yang_name = "forwardings"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::~Forwardings()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::has_data() const
{
    for (std::size_t index=0; index<forwarding.size(); index++)
    {
        if(forwarding[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::has_operation() const
{
    for (std::size_t index=0; index<forwarding.size(); index++)
    {
        if(forwarding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwardings";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwardings' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        for(auto const & c : forwarding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding>();
        c->parent = this;
        forwarding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Forwarding()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    table_id{YType::uint32, "table-id"}
    	,
    prefix_xr(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr>())
	,route(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route>())
	,vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_>())
{
    prefix_xr->parent = this;

    route->parent = this;

    vrf->parent = this;

    yang_name = "forwarding"; yang_parent_name = "forwardings";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::~Forwarding()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| table_id.is_set
	|| (prefix_xr !=  nullptr && prefix_xr->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| (prefix_xr !=  nullptr && prefix_xr->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwarding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix-xr")
    {
        if(prefix_xr == nullptr)
        {
            prefix_xr = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr>();
        }
        return prefix_xr;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route>();
        }
        return route;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    if(prefix_xr != nullptr)
    {
        children["prefix-xr"] = prefix_xr;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "prefix-xr" || name == "route" || name == "vrf" || name == "prefix" || name == "prefix-length" || name == "table-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::PrefixXr()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "prefix-xr"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::~PrefixXr()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-xr";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixXr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Route()
    :
    mpls(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls>())
	,routing(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing>())
{
    mpls->parent = this;

    routing->parent = this;

    yang_name = "route"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::~Route()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (routing !=  nullptr && routing->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (routing !=  nullptr && routing->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing>();
        }
        return routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "routing")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::Routing()
    :
    flags{YType::uint32, "flags"},
    is_local_vrf_leaked{YType::boolean, "is-local-vrf-leaked"},
    metric{YType::uint32, "metric"},
    priority{YType::uint8, "priority"},
    routing_update_age{YType::uint64, "routing-update-age"},
    routing_update_count{YType::uint32, "routing-update-count"},
    routing_update_timestamp{YType::uint64, "routing-update-timestamp"},
    source{YType::uint16, "source"},
    sr_local_label{YType::uint32, "sr-local-label"},
    type{YType::uint16, "type"},
    version{YType::uint32, "version"}
{
    yang_name = "routing"; yang_parent_name = "route";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::~Routing()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::has_data() const
{
    return flags.is_set
	|| is_local_vrf_leaked.is_set
	|| metric.is_set
	|| priority.is_set
	|| routing_update_age.is_set
	|| routing_update_count.is_set
	|| routing_update_timestamp.is_set
	|| source.is_set
	|| sr_local_label.is_set
	|| type.is_set
	|| version.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(is_local_vrf_leaked.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(routing_update_age.yfilter)
	|| ydk::is_set(routing_update_count.yfilter)
	|| ydk::is_set(routing_update_timestamp.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(sr_local_label.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routing' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_local_vrf_leaked.is_set || is_set(is_local_vrf_leaked.yfilter)) leaf_name_data.push_back(is_local_vrf_leaked.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (routing_update_age.is_set || is_set(routing_update_age.yfilter)) leaf_name_data.push_back(routing_update_age.get_name_leafdata());
    if (routing_update_count.is_set || is_set(routing_update_count.yfilter)) leaf_name_data.push_back(routing_update_count.get_name_leafdata());
    if (routing_update_timestamp.is_set || is_set(routing_update_timestamp.yfilter)) leaf_name_data.push_back(routing_update_timestamp.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.yfilter)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-vrf-leaked")
    {
        is_local_vrf_leaked = value;
        is_local_vrf_leaked.value_namespace = name_space;
        is_local_vrf_leaked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-update-age")
    {
        routing_update_age = value;
        routing_update_age.value_namespace = name_space;
        routing_update_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-update-count")
    {
        routing_update_count = value;
        routing_update_count.value_namespace = name_space;
        routing_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-update-timestamp")
    {
        routing_update_timestamp = value;
        routing_update_timestamp.value_namespace = name_space;
        routing_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
        sr_local_label.value_namespace = name_space;
        sr_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "is-local-vrf-leaked")
    {
        is_local_vrf_leaked.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "routing-update-age")
    {
        routing_update_age.yfilter = yfilter;
    }
    if(value_path == "routing-update-count")
    {
        routing_update_count.yfilter = yfilter;
    }
    if(value_path == "routing-update-timestamp")
    {
        routing_update_timestamp.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "is-local-vrf-leaked" || name == "metric" || name == "priority" || name == "routing-update-age" || name == "routing-update-count" || name == "routing-update-timestamp" || name == "source" || name == "sr-local-label" || name == "type" || name == "version")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::Mpls()
    :
    forwarding_update_age{YType::uint64, "forwarding-update-age"},
    forwarding_update_count{YType::uint32, "forwarding-update-count"},
    forwarding_update_timestamp{YType::uint64, "forwarding-update-timestamp"},
    local_label{YType::uint32, "local-label"}
{
    yang_name = "mpls"; yang_parent_name = "route";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::~Mpls()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::has_data() const
{
    return forwarding_update_age.is_set
	|| forwarding_update_count.is_set
	|| forwarding_update_timestamp.is_set
	|| local_label.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_update_age.yfilter)
	|| ydk::is_set(forwarding_update_count.yfilter)
	|| ydk::is_set(forwarding_update_timestamp.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_update_age.is_set || is_set(forwarding_update_age.yfilter)) leaf_name_data.push_back(forwarding_update_age.get_name_leafdata());
    if (forwarding_update_count.is_set || is_set(forwarding_update_count.yfilter)) leaf_name_data.push_back(forwarding_update_count.get_name_leafdata());
    if (forwarding_update_timestamp.is_set || is_set(forwarding_update_timestamp.yfilter)) leaf_name_data.push_back(forwarding_update_timestamp.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-update-age")
    {
        forwarding_update_age = value;
        forwarding_update_age.value_namespace = name_space;
        forwarding_update_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-update-count")
    {
        forwarding_update_count = value;
        forwarding_update_count.value_namespace = name_space;
        forwarding_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-update-timestamp")
    {
        forwarding_update_timestamp = value;
        forwarding_update_timestamp.value_namespace = name_space;
        forwarding_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-update-age")
    {
        forwarding_update_age.yfilter = yfilter;
    }
    if(value_path == "forwarding-update-count")
    {
        forwarding_update_count.yfilter = yfilter;
    }
    if(value_path == "forwarding-update-timestamp")
    {
        forwarding_update_timestamp.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-update-age" || name == "forwarding-update-count" || name == "forwarding-update-timestamp" || name == "local-label")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Paths()
    :
    mpls(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls>())
	,routing(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing>())
{
    mpls->parent = this;

    routing->parent = this;

    yang_name = "paths"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::~Paths()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (routing !=  nullptr && routing->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (routing !=  nullptr && routing->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing>();
        }
        return routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "routing")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::Routing()
    :
    bkup_path_id{YType::uint8, "bkup-path-id"},
    flags{YType::uint32, "flags"},
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    load_metric{YType::uint32, "load-metric"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    nexthop_id{YType::uint32, "nexthop-id"},
    nh_is_overriden{YType::boolean, "nh-is-overriden"},
    path_flags{YType::enumeration, "path-flags"},
    path_id{YType::uint8, "path-id"}
    	,
    next_hop(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop>())
	,remote_lfa(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa>())
{
    next_hop->parent = this;

    remote_lfa->parent = this;

    yang_name = "routing"; yang_parent_name = "paths";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::~Routing()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::has_data() const
{
    return bkup_path_id.is_set
	|| flags.is_set
	|| interface.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| next_hop_table_id.is_set
	|| nexthop_id.is_set
	|| nh_is_overriden.is_set
	|| path_flags.is_set
	|| path_id.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bkup_path_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(nexthop_id.yfilter)
	|| ydk::is_set(nh_is_overriden.yfilter)
	|| ydk::is_set(path_flags.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routing' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bkup_path_id.is_set || is_set(bkup_path_id.yfilter)) leaf_name_data.push_back(bkup_path_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (nexthop_id.is_set || is_set(nexthop_id.yfilter)) leaf_name_data.push_back(nexthop_id.get_name_leafdata());
    if (nh_is_overriden.is_set || is_set(nh_is_overriden.yfilter)) leaf_name_data.push_back(nh_is_overriden.get_name_leafdata());
    if (path_flags.is_set || is_set(path_flags.yfilter)) leaf_name_data.push_back(path_flags.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa>();
        }
        return remote_lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bkup-path-id")
    {
        bkup_path_id = value;
        bkup_path_id.value_namespace = name_space;
        bkup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-id")
    {
        nexthop_id = value;
        nexthop_id.value_namespace = name_space;
        nexthop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-is-overriden")
    {
        nh_is_overriden = value;
        nh_is_overriden.value_namespace = name_space;
        nh_is_overriden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags")
    {
        path_flags = value;
        path_flags.value_namespace = name_space;
        path_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bkup-path-id")
    {
        bkup_path_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "nexthop-id")
    {
        nexthop_id.yfilter = yfilter;
    }
    if(value_path == "nh-is-overriden")
    {
        nh_is_overriden.yfilter = yfilter;
    }
    if(value_path == "path-flags")
    {
        path_flags.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "remote-lfa" || name == "bkup-path-id" || name == "flags" || name == "interface" || name == "interface-name" || name == "load-metric" || name == "next-hop-table-id" || name == "nexthop-id" || name == "nh-is-overriden" || name == "path-flags" || name == "path-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "next-hop"; yang_parent_name = "routing";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::~NextHop()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteLfa()
    :
    has_q_node{YType::boolean, "has-q-node"},
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"},
    needs_tldp{YType::boolean, "needs-tldp"}
    	,
    remote_p_node_id(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId>())
	,remote_q_node_id(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId>())
{
    remote_p_node_id->parent = this;

    remote_q_node_id->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "routing";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::~RemoteLfa()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::has_data() const
{
    return has_q_node.is_set
	|| has_remote_lfa_bkup.is_set
	|| needs_tldp.is_set
	|| (remote_p_node_id !=  nullptr && remote_p_node_id->has_data())
	|| (remote_q_node_id !=  nullptr && remote_q_node_id->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_q_node.yfilter)
	|| ydk::is_set(has_remote_lfa_bkup.yfilter)
	|| ydk::is_set(needs_tldp.yfilter)
	|| (remote_p_node_id !=  nullptr && remote_p_node_id->has_operation())
	|| (remote_q_node_id !=  nullptr && remote_q_node_id->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_q_node.is_set || is_set(has_q_node.yfilter)) leaf_name_data.push_back(has_q_node.get_name_leafdata());
    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.yfilter)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());
    if (needs_tldp.is_set || is_set(needs_tldp.yfilter)) leaf_name_data.push_back(needs_tldp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-p-node-id")
    {
        if(remote_p_node_id == nullptr)
        {
            remote_p_node_id = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId>();
        }
        return remote_p_node_id;
    }

    if(child_yang_name == "remote-q-node-id")
    {
        if(remote_q_node_id == nullptr)
        {
            remote_q_node_id = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId>();
        }
        return remote_q_node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_p_node_id != nullptr)
    {
        children["remote-p-node-id"] = remote_p_node_id;
    }

    if(remote_q_node_id != nullptr)
    {
        children["remote-q-node-id"] = remote_q_node_id;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-q-node")
    {
        has_q_node = value;
        has_q_node.value_namespace = name_space;
        has_q_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
        has_remote_lfa_bkup.value_namespace = name_space;
        has_remote_lfa_bkup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "needs-tldp")
    {
        needs_tldp = value;
        needs_tldp.value_namespace = name_space;
        needs_tldp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-q-node")
    {
        has_q_node.yfilter = yfilter;
    }
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup.yfilter = yfilter;
    }
    if(value_path == "needs-tldp")
    {
        needs_tldp.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-p-node-id" || name == "remote-q-node-id" || name == "has-q-node" || name == "has-remote-lfa-bkup" || name == "needs-tldp")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::RemotePNodeId()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "remote-p-node-id"; yang_parent_name = "remote-lfa";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::~RemotePNodeId()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-p-node-id";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePNodeId' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::RemoteQNodeId()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "remote-q-node-id"; yang_parent_name = "remote-lfa";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::~RemoteQNodeId()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-q-node-id";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteQNodeId' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::Mpls()
    :
    mpls_outgoing_info(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo>())
	,remote_lfa(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa>())
{
    mpls_outgoing_info->parent = this;

    remote_lfa->parent = this;

    yang_name = "mpls"; yang_parent_name = "paths";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::~Mpls()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_data() const
{
    return (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info == nullptr)
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo>();
        }
        return mpls_outgoing_info;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa>();
        }
        return remote_lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_outgoing_info != nullptr)
    {
        children["mpls-outgoing-info"] = mpls_outgoing_info;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-outgoing-info" || name == "remote-lfa")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::MplsOutgoingInfo()
    :
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"},
    out_label{YType::uint32, "out-label"},
    out_label_owner{YType::enumeration, "out-label-owner"},
    out_label_rsn{YType::enumeration, "out-label-rsn"},
    out_label_type{YType::enumeration, "out-label-type"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;

    yang_name = "mpls-outgoing-info"; yang_parent_name = "mpls";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_data() const
{
    return is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| out_label.is_set
	|| out_label_owner.is_set
	|| out_label_rsn.is_set
	|| out_label_type.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_from_graceful_restartable_neighbor.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_owner.yfilter)
	|| ydk::is_set(out_label_rsn.yfilter)
	|| ydk::is_set(out_label_type.yfilter)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsOutgoingInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.yfilter)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.yfilter)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (out_label_rsn.is_set || is_set(out_label_rsn.yfilter)) leaf_name_data.push_back(out_label_rsn.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.yfilter)) leaf_name_data.push_back(out_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident == nullptr)
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>();
        }
        return nexthop_peer_ldp_ident;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop_peer_ldp_ident != nullptr)
    {
        children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
        is_from_graceful_restartable_neighbor.value_namespace = name_space;
        is_from_graceful_restartable_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
        out_label_owner.value_namespace = name_space;
        out_label_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn = value;
        out_label_rsn.value_namespace = name_space;
        out_label_rsn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
        out_label_type.value_namespace = name_space;
        out_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner.yfilter = yfilter;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn.yfilter = yfilter;
    }
    if(value_path == "out-label-type")
    {
        out_label_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-peer-ldp-ident" || name == "is-from-graceful-restartable-neighbor" || name == "is-stale" || name == "out-label" || name == "out-label-owner" || name == "out-label-rsn" || name == "out-label-type")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "mpls-outgoing-info";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NexthopPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-space-id" || name == "ldp-id" || name == "lsr-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::RemoteLfa()
    :
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"}
    	,
    mpls_outgoing_info(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>())
{
    mpls_outgoing_info->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "mpls";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::~RemoteLfa()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_data() const
{
    return has_remote_lfa_bkup.is_set
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_remote_lfa_bkup.yfilter)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.yfilter)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info == nullptr)
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>();
        }
        return mpls_outgoing_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_outgoing_info != nullptr)
    {
        children["mpls-outgoing-info"] = mpls_outgoing_info;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
        has_remote_lfa_bkup.value_namespace = name_space;
        has_remote_lfa_bkup.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-outgoing-info" || name == "has-remote-lfa-bkup")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::MplsOutgoingInfo()
{
    yang_name = "mpls-outgoing-info"; yang_parent_name = "remote-lfa";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_data() const
{
    for (std::size_t index=0; index<stack.size(); index++)
    {
        if(stack[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_operation() const
{
    for (std::size_t index=0; index<stack.size(); index++)
    {
        if(stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsOutgoingInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        for(auto const & c : stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack>();
        c->parent = this;
        stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::Stack()
    :
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"},
    out_label{YType::uint32, "out-label"},
    out_label_owner{YType::enumeration, "out-label-owner"},
    out_label_rsn{YType::enumeration, "out-label-rsn"},
    out_label_type{YType::enumeration, "out-label-type"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;

    yang_name = "stack"; yang_parent_name = "mpls-outgoing-info";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::~Stack()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_data() const
{
    return is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| out_label.is_set
	|| out_label_owner.is_set
	|| out_label_rsn.is_set
	|| out_label_type.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_from_graceful_restartable_neighbor.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_owner.yfilter)
	|| ydk::is_set(out_label_rsn.yfilter)
	|| ydk::is_set(out_label_type.yfilter)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.yfilter)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.yfilter)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (out_label_rsn.is_set || is_set(out_label_rsn.yfilter)) leaf_name_data.push_back(out_label_rsn.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.yfilter)) leaf_name_data.push_back(out_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident == nullptr)
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent>();
        }
        return nexthop_peer_ldp_ident;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop_peer_ldp_ident != nullptr)
    {
        children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
        is_from_graceful_restartable_neighbor.value_namespace = name_space;
        is_from_graceful_restartable_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
        out_label_owner.value_namespace = name_space;
        out_label_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn = value;
        out_label_rsn.value_namespace = name_space;
        out_label_rsn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
        out_label_type.value_namespace = name_space;
        out_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner.yfilter = yfilter;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn.yfilter = yfilter;
    }
    if(value_path == "out-label-type")
    {
        out_label_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-peer-ldp-ident" || name == "is-from-graceful-restartable-neighbor" || name == "is-stale" || name == "out-label" || name == "out-label-owner" || name == "out-label-rsn" || name == "out-label-type")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "stack";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NexthopPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-space-id" || name == "ldp-id" || name == "lsr-id")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::BindingsAdvertiseSpec()
    :
    allocation_acl(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl>())
{
    allocation_acl->parent = this;

    yang_name = "bindings-advertise-spec"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::~BindingsAdvertiseSpec()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::has_data() const
{
    for (std::size_t index=0; index<advt_acl.size(); index++)
    {
        if(advt_acl[index]->has_data())
            return true;
    }
    return (allocation_acl !=  nullptr && allocation_acl->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::has_operation() const
{
    for (std::size_t index=0; index<advt_acl.size(); index++)
    {
        if(advt_acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (allocation_acl !=  nullptr && allocation_acl->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-advertise-spec";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsAdvertiseSpec' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advt-acl")
    {
        for(auto const & c : advt_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl>();
        c->parent = this;
        advt_acl.push_back(c);
        return c;
    }

    if(child_yang_name == "allocation-acl")
    {
        if(allocation_acl == nullptr)
        {
            allocation_acl = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl>();
        }
        return allocation_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : advt_acl)
    {
        children[c->get_segment_path()] = c;
    }

    if(allocation_acl != nullptr)
    {
        children["allocation-acl"] = allocation_acl;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advt-acl" || name == "allocation-acl")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::AllocationAcl()
    :
    has_acl{YType::boolean, "has-acl"},
    is_host_route_only{YType::boolean, "is-host-route-only"},
    prefix_acl{YType::str, "prefix-acl"}
{
    yang_name = "allocation-acl"; yang_parent_name = "bindings-advertise-spec";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::~AllocationAcl()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_data() const
{
    return has_acl.is_set
	|| is_host_route_only.is_set
	|| prefix_acl.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_acl.yfilter)
	|| ydk::is_set(is_host_route_only.yfilter)
	|| ydk::is_set(prefix_acl.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-acl";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllocationAcl' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_acl.is_set || is_set(has_acl.yfilter)) leaf_name_data.push_back(has_acl.get_name_leafdata());
    if (is_host_route_only.is_set || is_set(is_host_route_only.yfilter)) leaf_name_data.push_back(is_host_route_only.get_name_leafdata());
    if (prefix_acl.is_set || is_set(prefix_acl.yfilter)) leaf_name_data.push_back(prefix_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-acl")
    {
        has_acl = value;
        has_acl.value_namespace = name_space;
        has_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-host-route-only")
    {
        is_host_route_only = value;
        is_host_route_only.value_namespace = name_space;
        is_host_route_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl = value;
        prefix_acl.value_namespace = name_space;
        prefix_acl.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-acl")
    {
        has_acl.yfilter = yfilter;
    }
    if(value_path == "is-host-route-only")
    {
        is_host_route_only.yfilter = yfilter;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "has-acl" || name == "is-host-route-only" || name == "prefix-acl")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::AdvtAcl()
    :
    peer_acl{YType::str, "peer-acl"},
    prefix_acl{YType::str, "prefix-acl"}
{
    yang_name = "advt-acl"; yang_parent_name = "bindings-advertise-spec";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::~AdvtAcl()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_data() const
{
    return peer_acl.is_set
	|| prefix_acl.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_acl.yfilter)
	|| ydk::is_set(prefix_acl.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advt-acl";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvtAcl' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_acl.is_set || is_set(peer_acl.yfilter)) leaf_name_data.push_back(peer_acl.get_name_leafdata());
    if (prefix_acl.is_set || is_set(prefix_acl.yfilter)) leaf_name_data.push_back(prefix_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-acl")
    {
        peer_acl = value;
        peer_acl.value_namespace = name_space;
        peer_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl = value;
        prefix_acl.value_namespace = name_space;
        prefix_acl.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-acl")
    {
        peer_acl.yfilter = yfilter;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-acl" || name == "prefix-acl")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::ForwardingSummary()
    :
    fsht{YType::uint16, "fsht"},
    intfs{YType::uint16, "intfs"},
    is_lsd_bound{YType::boolean, "is-lsd-bound"},
    lbls{YType::uint16, "lbls"}
    	,
    rws(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws>())
	,vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_>())
{
    rws->parent = this;

    vrf->parent = this;

    yang_name = "forwarding-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::~ForwardingSummary()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::has_data() const
{
    return fsht.is_set
	|| intfs.is_set
	|| is_lsd_bound.is_set
	|| lbls.is_set
	|| (rws !=  nullptr && rws->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsht.yfilter)
	|| ydk::is_set(intfs.yfilter)
	|| ydk::is_set(is_lsd_bound.yfilter)
	|| ydk::is_set(lbls.yfilter)
	|| (rws !=  nullptr && rws->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsht.is_set || is_set(fsht.yfilter)) leaf_name_data.push_back(fsht.get_name_leafdata());
    if (intfs.is_set || is_set(intfs.yfilter)) leaf_name_data.push_back(intfs.get_name_leafdata());
    if (is_lsd_bound.is_set || is_set(is_lsd_bound.yfilter)) leaf_name_data.push_back(is_lsd_bound.get_name_leafdata());
    if (lbls.is_set || is_set(lbls.yfilter)) leaf_name_data.push_back(lbls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rws")
    {
        if(rws == nullptr)
        {
            rws = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws>();
        }
        return rws;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rws != nullptr)
    {
        children["rws"] = rws;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsht")
    {
        fsht = value;
        fsht.value_namespace = name_space;
        fsht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intfs")
    {
        intfs = value;
        intfs.value_namespace = name_space;
        intfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lsd-bound")
    {
        is_lsd_bound = value;
        is_lsd_bound.value_namespace = name_space;
        is_lsd_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbls")
    {
        lbls = value;
        lbls.value_namespace = name_space;
        lbls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsht")
    {
        fsht.yfilter = yfilter;
    }
    if(value_path == "intfs")
    {
        intfs.yfilter = yfilter;
    }
    if(value_path == "is-lsd-bound")
    {
        is_lsd_bound.yfilter = yfilter;
    }
    if(value_path == "lbls")
    {
        lbls.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rws" || name == "vrf" || name == "fsht" || name == "intfs" || name == "is-lsd-bound" || name == "lbls")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "forwarding-summary";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Rws()
    :
    nhs(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs>())
	,pfxs(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs>())
{
    nhs->parent = this;

    pfxs->parent = this;

    yang_name = "rws"; yang_parent_name = "forwarding-summary";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::~Rws()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::has_data() const
{
    return (nhs !=  nullptr && nhs->has_data())
	|| (pfxs !=  nullptr && pfxs->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::has_operation() const
{
    return is_set(yfilter)
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (pfxs !=  nullptr && pfxs->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rws";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rws' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs>();
        }
        return nhs;
    }

    if(child_yang_name == "pfxs")
    {
        if(pfxs == nullptr)
        {
            pfxs = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs>();
        }
        return pfxs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nhs != nullptr)
    {
        children["nhs"] = nhs;
    }

    if(pfxs != nullptr)
    {
        children["pfxs"] = pfxs;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhs" || name == "pfxs")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::Pfxs()
    :
    ecmp_pfxs{YType::uint16, "ecmp-pfxs"},
    protected_pfxs{YType::uint16, "protected-pfxs"},
    total_pfxs{YType::uint16, "total-pfxs"}
    	,
    labeled_pfxs_aggr(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr>())
	,labeled_pfxs_backup(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup>())
	,labeled_pfxs_primary(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary>())
{
    labeled_pfxs_aggr->parent = this;

    labeled_pfxs_backup->parent = this;

    labeled_pfxs_primary->parent = this;

    yang_name = "pfxs"; yang_parent_name = "rws";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::~Pfxs()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_data() const
{
    return ecmp_pfxs.is_set
	|| protected_pfxs.is_set
	|| total_pfxs.is_set
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_data())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_data())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecmp_pfxs.yfilter)
	|| ydk::is_set(protected_pfxs.yfilter)
	|| ydk::is_set(total_pfxs.yfilter)
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_operation())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_operation())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfxs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecmp_pfxs.is_set || is_set(ecmp_pfxs.yfilter)) leaf_name_data.push_back(ecmp_pfxs.get_name_leafdata());
    if (protected_pfxs.is_set || is_set(protected_pfxs.yfilter)) leaf_name_data.push_back(protected_pfxs.get_name_leafdata());
    if (total_pfxs.is_set || is_set(total_pfxs.yfilter)) leaf_name_data.push_back(total_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled-pfxs-aggr")
    {
        if(labeled_pfxs_aggr == nullptr)
        {
            labeled_pfxs_aggr = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr>();
        }
        return labeled_pfxs_aggr;
    }

    if(child_yang_name == "labeled-pfxs-backup")
    {
        if(labeled_pfxs_backup == nullptr)
        {
            labeled_pfxs_backup = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup>();
        }
        return labeled_pfxs_backup;
    }

    if(child_yang_name == "labeled-pfxs-primary")
    {
        if(labeled_pfxs_primary == nullptr)
        {
            labeled_pfxs_primary = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary>();
        }
        return labeled_pfxs_primary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(labeled_pfxs_aggr != nullptr)
    {
        children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
    }

    if(labeled_pfxs_backup != nullptr)
    {
        children["labeled-pfxs-backup"] = labeled_pfxs_backup;
    }

    if(labeled_pfxs_primary != nullptr)
    {
        children["labeled-pfxs-primary"] = labeled_pfxs_primary;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs = value;
        ecmp_pfxs.value_namespace = name_space;
        ecmp_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs = value;
        protected_pfxs.value_namespace = name_space;
        protected_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pfxs")
    {
        total_pfxs = value;
        total_pfxs.value_namespace = name_space;
        total_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs.yfilter = yfilter;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs.yfilter = yfilter;
    }
    if(value_path == "total-pfxs")
    {
        total_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs-aggr" || name == "labeled-pfxs-backup" || name == "labeled-pfxs-primary" || name == "ecmp-pfxs" || name == "protected-pfxs" || name == "total-pfxs")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::LabeledPfxsAggr()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-aggr"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::~LabeledPfxsAggr()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-aggr";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsAggr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::LabeledPfxsPrimary()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-primary"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::~LabeledPfxsPrimary()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-primary";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsPrimary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::LabeledPfxsBackup()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-backup"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::~LabeledPfxsBackup()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-backup";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsBackup' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::Nhs()
    :
    backup_paths{YType::uint32, "backup-paths"},
    labeled_backup_paths{YType::uint32, "labeled-backup-paths"},
    labeled_paths{YType::uint32, "labeled-paths"},
    protected_paths{YType::uint32, "protected-paths"},
    remote_backup_paths{YType::uint32, "remote-backup-paths"},
    total_paths{YType::uint32, "total-paths"}
{
    yang_name = "nhs"; yang_parent_name = "rws";
}

MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::~Nhs()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_data() const
{
    return backup_paths.is_set
	|| labeled_backup_paths.is_set
	|| labeled_paths.is_set
	|| protected_paths.is_set
	|| remote_backup_paths.is_set
	|| total_paths.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_paths.yfilter)
	|| ydk::is_set(labeled_backup_paths.yfilter)
	|| ydk::is_set(labeled_paths.yfilter)
	|| ydk::is_set(protected_paths.yfilter)
	|| ydk::is_set(remote_backup_paths.yfilter)
	|| ydk::is_set(total_paths.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nhs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_paths.is_set || is_set(backup_paths.yfilter)) leaf_name_data.push_back(backup_paths.get_name_leafdata());
    if (labeled_backup_paths.is_set || is_set(labeled_backup_paths.yfilter)) leaf_name_data.push_back(labeled_backup_paths.get_name_leafdata());
    if (labeled_paths.is_set || is_set(labeled_paths.yfilter)) leaf_name_data.push_back(labeled_paths.get_name_leafdata());
    if (protected_paths.is_set || is_set(protected_paths.yfilter)) leaf_name_data.push_back(protected_paths.get_name_leafdata());
    if (remote_backup_paths.is_set || is_set(remote_backup_paths.yfilter)) leaf_name_data.push_back(remote_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-paths")
    {
        backup_paths = value;
        backup_paths.value_namespace = name_space;
        backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths = value;
        labeled_backup_paths.value_namespace = name_space;
        labeled_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths = value;
        labeled_paths.value_namespace = name_space;
        labeled_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-paths")
    {
        protected_paths = value;
        protected_paths.value_namespace = name_space;
        protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths = value;
        remote_backup_paths.value_namespace = name_space;
        remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-paths")
    {
        backup_paths.yfilter = yfilter;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths.yfilter = yfilter;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths.yfilter = yfilter;
    }
    if(value_path == "protected-paths")
    {
        protected_paths.yfilter = yfilter;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-paths" || name == "labeled-backup-paths" || name == "labeled-paths" || name == "protected-paths" || name == "remote-backup-paths" || name == "total-paths")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBriefs()
{
    yang_name = "neighbor-briefs"; yang_parent_name = "vrf";
}

MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::~NeighborBriefs()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::has_data() const
{
    for (std::size_t index=0; index<neighbor_brief.size(); index++)
    {
        if(neighbor_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_brief.size(); index++)
    {
        if(neighbor_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-briefs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBriefs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-brief")
    {
        for(auto const & c : neighbor_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief>();
        c->parent = this;
        neighbor_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-brief")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NeighborBrief()
    :
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"},
    nsr_state{YType::enumeration, "nsr-state"},
    up_time_seconds{YType::uint32, "up-time-seconds"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_>())
{
    vrf->parent = this;

    yang_name = "neighbor-brief"; yang_parent_name = "neighbor-briefs";
}

MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::~NeighborBrief()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::has_data() const
{
    for (std::size_t index=0; index<nbr_br_af_info.size(); index++)
    {
        if(nbr_br_af_info[index]->has_data())
            return true;
    }
    return is_graceful_restartable.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| nsr_state.is_set
	|| up_time_seconds.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::has_operation() const
{
    for (std::size_t index=0; index<nbr_br_af_info.size(); index++)
    {
        if(nbr_br_af_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_graceful_restartable.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(nsr_state.yfilter)
	|| ydk::is_set(up_time_seconds.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-brief";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBrief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.yfilter)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (up_time_seconds.is_set || is_set(up_time_seconds.yfilter)) leaf_name_data.push_back(up_time_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-br-af-info")
    {
        for(auto const & c : nbr_br_af_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo>();
        c->parent = this;
        nbr_br_af_info.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nbr_br_af_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
        is_graceful_restartable.value_namespace = name_space;
        is_graceful_restartable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time-seconds")
    {
        up_time_seconds = value;
        up_time_seconds.value_namespace = name_space;
        up_time_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
    if(value_path == "up-time-seconds")
    {
        up_time_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-br-af-info" || name == "vrf" || name == "is-graceful-restartable" || name == "label-space-id" || name == "lsr-id" || name == "nsr-state" || name == "up-time-seconds")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "neighbor-brief";
}

MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::NbrBrAfInfo()
    :
    address_family{YType::enumeration, "address-family"},
    num_of_nbr_addresses{YType::uint32, "num-of-nbr-addresses"},
    num_of_nbr_discovery{YType::uint32, "num-of-nbr-discovery"},
    num_of_nbr_lbl{YType::uint32, "num-of-nbr-lbl"}
{
    yang_name = "nbr-br-af-info"; yang_parent_name = "neighbor-brief";
}

MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::~NbrBrAfInfo()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_data() const
{
    return address_family.is_set
	|| num_of_nbr_addresses.is_set
	|| num_of_nbr_discovery.is_set
	|| num_of_nbr_lbl.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(num_of_nbr_addresses.yfilter)
	|| ydk::is_set(num_of_nbr_discovery.yfilter)
	|| ydk::is_set(num_of_nbr_lbl.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-br-af-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NbrBrAfInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (num_of_nbr_addresses.is_set || is_set(num_of_nbr_addresses.yfilter)) leaf_name_data.push_back(num_of_nbr_addresses.get_name_leafdata());
    if (num_of_nbr_discovery.is_set || is_set(num_of_nbr_discovery.yfilter)) leaf_name_data.push_back(num_of_nbr_discovery.get_name_leafdata());
    if (num_of_nbr_lbl.is_set || is_set(num_of_nbr_lbl.yfilter)) leaf_name_data.push_back(num_of_nbr_lbl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-addresses")
    {
        num_of_nbr_addresses = value;
        num_of_nbr_addresses.value_namespace = name_space;
        num_of_nbr_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-discovery")
    {
        num_of_nbr_discovery = value;
        num_of_nbr_discovery.value_namespace = name_space;
        num_of_nbr_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-lbl")
    {
        num_of_nbr_lbl = value;
        num_of_nbr_lbl.value_namespace = name_space;
        num_of_nbr_lbl.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-addresses")
    {
        num_of_nbr_addresses.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-discovery")
    {
        num_of_nbr_discovery.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-lbl")
    {
        num_of_nbr_lbl.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "num-of-nbr-addresses" || name == "num-of-nbr-discovery" || name == "num-of-nbr-lbl")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::BackoffParameters()
    :
    initial_seconds{YType::uint32, "initial-seconds"},
    maximum_seconds{YType::uint32, "maximum-seconds"}
{
    yang_name = "backoff-parameters"; yang_parent_name = "vrf";
}

MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::~BackoffParameters()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::has_data() const
{
    return initial_seconds.is_set
	|| maximum_seconds.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_seconds.yfilter)
	|| ydk::is_set(maximum_seconds.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff-parameters";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackoffParameters' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_seconds.is_set || is_set(initial_seconds.yfilter)) leaf_name_data.push_back(initial_seconds.get_name_leafdata());
    if (maximum_seconds.is_set || is_set(maximum_seconds.yfilter)) leaf_name_data.push_back(maximum_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-seconds")
    {
        initial_seconds = value;
        initial_seconds.value_namespace = name_space;
        initial_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-seconds")
    {
        maximum_seconds = value;
        maximum_seconds.value_namespace = name_space;
        maximum_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-seconds")
    {
        initial_seconds.yfilter = yfilter;
    }
    if(value_path == "maximum-seconds")
    {
        maximum_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-seconds" || name == "maximum-seconds")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoffs()
{
    yang_name = "backoffs"; yang_parent_name = "vrf";
}

MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::~Backoffs()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::has_data() const
{
    for (std::size_t index=0; index<backoff.size(); index++)
    {
        if(backoff[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::has_operation() const
{
    for (std::size_t index=0; index<backoff.size(); index++)
    {
        if(backoff[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoffs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backoffs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backoff")
    {
        for(auto const & c : backoff)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff>();
        c->parent = this;
        backoff.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backoff)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::Backoff()
    :
    backoff_seconds{YType::uint32, "backoff-seconds"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"},
    waiting_seconds{YType::uint32, "waiting-seconds"}
{
    yang_name = "backoff"; yang_parent_name = "backoffs";
}

MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::~Backoff()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::has_data() const
{
    return backoff_seconds.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| waiting_seconds.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backoff_seconds.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(waiting_seconds.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backoff' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_seconds.is_set || is_set(backoff_seconds.yfilter)) leaf_name_data.push_back(backoff_seconds.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (waiting_seconds.is_set || is_set(waiting_seconds.yfilter)) leaf_name_data.push_back(waiting_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backoff-seconds")
    {
        backoff_seconds = value;
        backoff_seconds.value_namespace = name_space;
        backoff_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds = value;
        waiting_seconds.value_namespace = name_space;
        waiting_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backoff-seconds")
    {
        backoff_seconds.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff-seconds" || name == "label-space-id" || name == "lsr-id" || name == "waiting-seconds")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::Nsr()
    :
    ha_statistics(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics>())
	,ha_summary(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary>())
	,nsr_pending(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending>())
{
    ha_statistics->parent = this;

    ha_summary->parent = this;

    nsr_pending->parent = this;

    yang_name = "nsr"; yang_parent_name = "vrf";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::~Nsr()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::has_data() const
{
    return (ha_statistics !=  nullptr && ha_statistics->has_data())
	|| (ha_summary !=  nullptr && ha_summary->has_data())
	|| (nsr_pending !=  nullptr && nsr_pending->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (ha_statistics !=  nullptr && ha_statistics->has_operation())
	|| (ha_summary !=  nullptr && ha_summary->has_operation())
	|| (nsr_pending !=  nullptr && nsr_pending->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-statistics")
    {
        if(ha_statistics == nullptr)
        {
            ha_statistics = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics>();
        }
        return ha_statistics;
    }

    if(child_yang_name == "ha-summary")
    {
        if(ha_summary == nullptr)
        {
            ha_summary = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary>();
        }
        return ha_summary;
    }

    if(child_yang_name == "nsr-pending")
    {
        if(nsr_pending == nullptr)
        {
            nsr_pending = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending>();
        }
        return nsr_pending;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ha_statistics != nullptr)
    {
        children["ha-statistics"] = ha_statistics;
    }

    if(ha_summary != nullptr)
    {
        children["ha-summary"] = ha_summary;
    }

    if(nsr_pending != nullptr)
    {
        children["nsr-pending"] = nsr_pending;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-statistics" || name == "ha-summary" || name == "nsr-pending")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::NsrPending()
    :
    ha_neighbors(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors>())
{
    ha_neighbors->parent = this;

    yang_name = "nsr-pending"; yang_parent_name = "nsr";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::~NsrPending()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::has_data() const
{
    return (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::has_operation() const
{
    return is_set(yfilter)
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pending";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPending' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors == nullptr)
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors>();
        }
        return ha_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ha_neighbors != nullptr)
    {
        children["ha-neighbors"] = ha_neighbors;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-neighbors")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbors()
{
    yang_name = "ha-neighbors"; yang_parent_name = "nsr-pending";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_data() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaNeighbors' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-neighbor")
    {
        for(auto const & c : ha_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor>();
        c->parent = this;
        ha_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ha_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-neighbor")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    lsr_id{YType::str, "lsr-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
    	,
    init_sync_info(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>())
	,steady_state_sync_info(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;

    steady_state_sync_info->parent = this;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_data() const
{
    return label_space_id.is_set
	|| lbl_spc_id.is_set
	|| lsr_id.is_set
	|| lsr_id_xr.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(lbl_spc_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(lsr_id_xr.yfilter)
	|| ydk::is_set(nsr_sync_state.yfilter)
	|| ydk::is_set(num_msg.yfilter)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaNeighbor' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.yfilter)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.yfilter)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.yfilter)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.yfilter)) leaf_name_data.push_back(num_msg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info == nullptr)
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>();
        }
        return init_sync_info;
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info == nullptr)
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
        }
        return steady_state_sync_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(init_sync_info != nullptr)
    {
        children["init-sync-info"] = init_sync_info;
    }

    if(steady_state_sync_info != nullptr)
    {
        children["steady-state-sync-info"] = steady_state_sync_info;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
        lbl_spc_id.value_namespace = name_space;
        lbl_spc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
        lsr_id_xr.value_namespace = name_space;
        lsr_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
        nsr_sync_state.value_namespace = name_space;
        nsr_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
        num_msg.value_namespace = name_space;
        num_msg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr.yfilter = yfilter;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state.yfilter = yfilter;
    }
    if(value_path == "num-msg")
    {
        num_msg.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-info" || name == "steady-state-sync-info" || name == "label-space-id" || name == "lbl-spc-id" || name == "lsr-id" || name == "lsr-id-xr" || name == "nsr-sync-state" || name == "num-msg")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    num_addr{YType::uint32, "num-addr"},
    num_app_bytes{YType::uint32, "num-app-bytes"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_lbl{YType::uint32, "num-lbl"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"}
{
    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| num_addr.is_set
	|| num_app_bytes.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_duplicate_addr.is_set
	|| num_lbl.is_set
	|| num_rx_bytes.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(init_sync_end.yfilter)
	|| ydk::is_set(init_sync_start.yfilter)
	|| ydk::is_set(num_addr.yfilter)
	|| ydk::is_set(num_app_bytes.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_duplicate_addr.yfilter)
	|| ydk::is_set(num_lbl.yfilter)
	|| ydk::is_set(num_rx_bytes.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitSyncInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.yfilter)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.yfilter)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.yfilter)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.yfilter)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.yfilter)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.yfilter)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.yfilter)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
        init_sync_end.value_namespace = name_space;
        init_sync_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
        init_sync_start.value_namespace = name_space;
        init_sync_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
        num_addr.value_namespace = name_space;
        num_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
        num_app_bytes.value_namespace = name_space;
        num_app_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
        num_duplicate_addr.value_namespace = name_space;
        num_duplicate_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
        num_lbl.value_namespace = name_space;
        num_lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
        num_rx_bytes.value_namespace = name_space;
        num_rx_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end.yfilter = yfilter;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start.yfilter = yfilter;
    }
    if(value_path == "num-addr")
    {
        num_addr.yfilter = yfilter;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr.yfilter = yfilter;
    }
    if(value_path == "num-lbl")
    {
        num_lbl.yfilter = yfilter;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-end" || name == "init-sync-start" || name == "num-addr" || name == "num-app-bytes" || name == "num-cap-rcvd" || name == "num-cap-sent" || name == "num-duplicate-addr" || name == "num-lbl" || name == "num-rx-bytes")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"}
{
    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    return num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set
	|| rem_lbl_rq.is_set
	|| rem_lbl_wd.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_stdby_adj_join.yfilter)
	|| ydk::is_set(num_stdby_adj_leave.yfilter)
	|| ydk::is_set(rem_lbl_rq.yfilter)
	|| ydk::is_set(rem_lbl_wd.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SteadyStateSyncInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.yfilter)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.yfilter)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.yfilter)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.yfilter)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
        num_stdby_adj_join.value_namespace = name_space;
        num_stdby_adj_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
        num_stdby_adj_leave.value_namespace = name_space;
        num_stdby_adj_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
        rem_lbl_rq.value_namespace = name_space;
        rem_lbl_rq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
        rem_lbl_wd.value_namespace = name_space;
        rem_lbl_wd.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-cap-rcvd" || name == "num-cap-sent" || name == "num-stdby-adj-join" || name == "num-stdby-adj-leave" || name == "rem-lbl-rq" || name == "rem-lbl-wd")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::HaSummary()
    :
    sessions(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions>())
	,vrf(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_>())
{
    sessions->parent = this;

    vrf->parent = this;

    yang_name = "ha-summary"; yang_parent_name = "nsr";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::~HaSummary()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "vrf")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::Sessions()
    :
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    total{YType::uint32, "total"}
{
    yang_name = "sessions"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::~Sessions()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_data() const
{
    return nsr_eligible.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_none.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set
	|| nsr_state_wait.is_set
	|| total.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_eligible.yfilter)
	|| ydk::is_set(nsr_state_app_wait.yfilter)
	|| ydk::is_set(nsr_state_none.yfilter)
	|| ydk::is_set(nsr_state_operational.yfilter)
	|| ydk::is_set(nsr_state_prepare.yfilter)
	|| ydk::is_set(nsr_state_ready.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase1.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase2.yfilter)
	|| ydk::is_set(nsr_state_wait.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_eligible.is_set || is_set(nsr_eligible.yfilter)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.yfilter)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.yfilter)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.yfilter)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.yfilter)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.yfilter)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.yfilter)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
        nsr_eligible.value_namespace = name_space;
        nsr_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
        nsr_state_app_wait.value_namespace = name_space;
        nsr_state_app_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
        nsr_state_none.value_namespace = name_space;
        nsr_state_none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
        nsr_state_operational.value_namespace = name_space;
        nsr_state_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
        nsr_state_prepare.value_namespace = name_space;
        nsr_state_prepare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
        nsr_state_ready.value_namespace = name_space;
        nsr_state_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
        nsr_state_tcp_phase1.value_namespace = name_space;
        nsr_state_tcp_phase1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
        nsr_state_tcp_phase2.value_namespace = name_space;
        nsr_state_tcp_phase2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
        nsr_state_wait.value_namespace = name_space;
        nsr_state_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible.yfilter = yfilter;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait.yfilter = yfilter;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none.yfilter = yfilter;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational.yfilter = yfilter;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare.yfilter = yfilter;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2.yfilter = yfilter;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-eligible" || name == "nsr-state-app-wait" || name == "nsr-state-none" || name == "nsr-state-operational" || name == "nsr-state-prepare" || name == "nsr-state-ready" || name == "nsr-state-tcp-phase1" || name == "nsr-state-tcp-phase2" || name == "nsr-state-wait" || name == "total")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaStatistics()
    :
    ha_global(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal>())
	,ha_neighbors(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors>())
{
    ha_global->parent = this;

    ha_neighbors->parent = this;

    yang_name = "ha-statistics"; yang_parent_name = "nsr";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::~HaStatistics()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::has_data() const
{
    return (ha_global !=  nullptr && ha_global->has_data())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (ha_global !=  nullptr && ha_global->has_operation())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-statistics";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaStatistics' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-global")
    {
        if(ha_global == nullptr)
        {
            ha_global = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal>();
        }
        return ha_global;
    }

    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors == nullptr)
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors>();
        }
        return ha_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ha_global != nullptr)
    {
        children["ha-global"] = ha_global;
    }

    if(ha_neighbors != nullptr)
    {
        children["ha-neighbors"] = ha_neighbors;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-global" || name == "ha-neighbors")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::HaGlobal()
    :
    init_sync(std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync>())
{
    init_sync->parent = this;

    yang_name = "ha-global"; yang_parent_name = "ha-statistics";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::~HaGlobal()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::has_data() const
{
    return (init_sync !=  nullptr && init_sync->has_data());
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (init_sync !=  nullptr && init_sync->has_operation());
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-global";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaGlobal' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-sync")
    {
        if(init_sync == nullptr)
        {
            init_sync = std::make_shared<MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync>();
        }
        return init_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(init_sync != nullptr)
    {
        children["init-sync"] = init_sync;
    }

    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync")
        return true;
    return false;
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::InitSync()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    ipc_default_mtu{YType::uint32, "ipc-default-mtu"},
    ipc_exceeded_mtu_msg_cnt{YType::uint32, "ipc-exceeded-mtu-msg-cnt"},
    ipc_max_rx_batch_bytes{YType::uint32, "ipc-max-rx-batch-bytes"},
    ipc_max_tx_batch_bytes{YType::uint32, "ipc-max-tx-batch-bytes"},
    ipc_msg_rx_bytes{YType::uint32, "ipc-msg-rx-bytes"},
    ipc_msg_rx_cnt{YType::uint32, "ipc-msg-rx-cnt"},
    ipc_msg_tx_bytes{YType::uint32, "ipc-msg-tx-bytes"},
    ipc_msg_tx_cnt{YType::uint32, "ipc-msg-tx-cnt"},
    ipc_restart_cnt{YType::uint32, "ipc-restart-cnt"},
    ipc_tx_fail_cnt{YType::uint32, "ipc-tx-fail-cnt"},
    nsr_cfged{YType::boolean, "nsr-cfged"},
    nsr_synced{YType::boolean, "nsr-synced"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_lbl{YType::uint32, "num-lbl"},
    num_lbl_adv{YType::uint32, "num-lbl-adv"},
    num_lcl_addr_wd{YType::uint32, "num-lcl-addr-wd"},
    num_peers{YType::uint32, "num-peers"},
    num_pfx{YType::uint32, "num-pfx"},
    total_ipc_tx_fail_cnt{YType::uint32, "total-ipc-tx-fail-cnt"}
{
    yang_name = "init-sync"; yang_parent_name = "ha-global";
}

MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::~InitSync()
{
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| ipc_default_mtu.is_set
	|| ipc_exceeded_mtu_msg_cnt.is_set
	|| ipc_max_rx_batch_bytes.is_set
	|| ipc_max_tx_batch_bytes.is_set
	|| ipc_msg_rx_bytes.is_set
	|| ipc_msg_rx_cnt.is_set
	|| ipc_msg_tx_bytes.is_set
	|| ipc_msg_tx_cnt.is_set
	|| ipc_restart_cnt.is_set
	|| ipc_tx_fail_cnt.is_set
	|| nsr_cfged.is_set
	|| nsr_synced.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_lbl.is_set
	|| num_lbl_adv.is_set
	|| num_lcl_addr_wd.is_set
	|| num_peers.is_set
	|| num_pfx.is_set
	|| total_ipc_tx_fail_cnt.is_set;
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(init_sync_end.yfilter)
	|| ydk::is_set(init_sync_start.yfilter)
	|| ydk::is_set(ipc_default_mtu.yfilter)
	|| ydk::is_set(ipc_exceeded_mtu_msg_cnt.yfilter)
	|| ydk::is_set(ipc_max_rx_batch_bytes.yfilter)
	|| ydk::is_set(ipc_max_tx_batch_bytes.yfilter)
	|| ydk::is_set(ipc_msg_rx_bytes.yfilter)
	|| ydk::is_set(ipc_msg_rx_cnt.yfilter)
	|| ydk::is_set(ipc_msg_tx_bytes.yfilter)
	|| ydk::is_set(ipc_msg_tx_cnt.yfilter)
	|| ydk::is_set(ipc_restart_cnt.yfilter)
	|| ydk::is_set(ipc_tx_fail_cnt.yfilter)
	|| ydk::is_set(nsr_cfged.yfilter)
	|| ydk::is_set(nsr_synced.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_lbl.yfilter)
	|| ydk::is_set(num_lbl_adv.yfilter)
	|| ydk::is_set(num_lcl_addr_wd.yfilter)
	|| ydk::is_set(num_peers.yfilter)
	|| ydk::is_set(num_pfx.yfilter)
	|| ydk::is_set(total_ipc_tx_fail_cnt.yfilter);
}

std::string MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitSync' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.yfilter)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.yfilter)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (ipc_default_mtu.is_set || is_set(ipc_default_mtu.yfilter)) leaf_name_data.push_back(ipc_default_mtu.get_name_leafdata());
    if (ipc_exceeded_mtu_msg_cnt.is_set || is_set(ipc_exceeded_mtu_msg_cnt.yfilter)) leaf_name_data.push_back(ipc_exceeded_mtu_msg_cnt.get_name_leafdata());
    if (ipc_max_rx_batch_bytes.is_set || is_set(ipc_max_rx_batch_bytes.yfilter)) leaf_name_data.push_back(ipc_max_rx_batch_bytes.get_name_leafdata());
    if (ipc_max_tx_batch_bytes.is_set || is_set(ipc_max_tx_batch_bytes.yfilter)) leaf_name_data.push_back(ipc_max_tx_batch_bytes.get_name_leafdata());
    if (ipc_msg_rx_bytes.is_set || is_set(ipc_msg_rx_bytes.yfilter)) leaf_name_data.push_back(ipc_msg_rx_bytes.get_name_leafdata());
    if (ipc_msg_rx_cnt.is_set || is_set(ipc_msg_rx_cnt.yfilter)) leaf_name_data.push_back(ipc_msg_rx_cnt.get_name_leafdata());
    if (ipc_msg_tx_bytes.is_set || is_set(ipc_msg_tx_bytes.yfilter)) leaf_name_data.push_back(ipc_msg_tx_bytes.get_name_leafdata());
    if (ipc_msg_tx_cnt.is_set || is_set(ipc_msg_tx_cnt.yfilter)) leaf_name_data.push_back(ipc_msg_tx_cnt.get_name_leafdata());
    if (ipc_restart_cnt.is_set || is_set(ipc_restart_cnt.yfilter)) leaf_name_data.push_back(ipc_restart_cnt.get_name_leafdata());
    if (ipc_tx_fail_cnt.is_set || is_set(ipc_tx_fail_cnt.yfilter)) leaf_name_data.push_back(ipc_tx_fail_cnt.get_name_leafdata());
    if (nsr_cfged.is_set || is_set(nsr_cfged.yfilter)) leaf_name_data.push_back(nsr_cfged.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.yfilter)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.yfilter)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_lbl_adv.is_set || is_set(num_lbl_adv.yfilter)) leaf_name_data.push_back(num_lbl_adv.get_name_leafdata());
    if (num_lcl_addr_wd.is_set || is_set(num_lcl_addr_wd.yfilter)) leaf_name_data.push_back(num_lcl_addr_wd.get_name_leafdata());
    if (num_peers.is_set || is_set(num_peers.yfilter)) leaf_name_data.push_back(num_peers.get_name_leafdata());
    if (num_pfx.is_set || is_set(num_pfx.yfilter)) leaf_name_data.push_back(num_pfx.get_name_leafdata());
    if (total_ipc_tx_fail_cnt.is_set || is_set(total_ipc_tx_fail_cnt.yfilter)) leaf_name_data.push_back(total_ipc_tx_fail_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
        init_sync_end.value_namespace = name_space;
        init_sync_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
        init_sync_start.value_namespace = name_space;
        init_sync_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu = value;
        ipc_default_mtu.value_namespace = name_space;
        ipc_default_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt = value;
        ipc_exceeded_mtu_msg_cnt.value_namespace = name_space;
        ipc_exceeded_mtu_msg_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes = value;
        ipc_max_rx_batch_bytes.value_namespace = name_space;
        ipc_max_rx_batch_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes = value;
        ipc_max_tx_batch_bytes.value_namespace = name_space;
        ipc_max_tx_batch_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes = value;
        ipc_msg_rx_bytes.value_namespace = name_space;
        ipc_msg_rx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt = value;
        ipc_msg_rx_cnt.value_namespace = name_space;
        ipc_msg_rx_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes = value;
        ipc_msg_tx_bytes.value_namespace = name_space;
        ipc_msg_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt = value;
        ipc_msg_tx_cnt.value_namespace = name_space;
        ipc_msg_tx_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt = value;
        ipc_restart_cnt.value_namespace = name_space;
        ipc_restart_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt = value;
        ipc_tx_fail_cnt.value_namespace = name_space;
        ipc_tx_fail_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-cfged")
    {
        nsr_cfged = value;
        nsr_cfged.value_namespace = name_space;
        nsr_cfged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
        nsr_synced.value_namespace = name_space;
        nsr_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
        num_lbl.value_namespace = name_space;
        num_lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv = value;
        num_lbl_adv.value_namespace = name_space;
        num_lbl_adv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd = value;
        num_lcl_addr_wd.value_namespace = name_space;
        num_lcl_addr_wd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-peers")
    {
        num_peers = value;
        num_peers.value_namespace = name_space;
        num_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pfx")
    {
        num_pfx = value;
        num_pfx.value_namespace = name_space;
        num_pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt = value;
        total_ipc_tx_fail_cnt.value_namespace = name_space;
        total_ipc_tx_fail_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end.yfilter = yfilter;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start.yfilter = yfilter;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu.yfilter = yfilter;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt.yfilter = yfilter;
    }
    if(value_path == "nsr-cfged")
    {
        nsr_cfged.yfilter = yfilter;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-lbl")
    {
        num_lbl.yfilter = yfilter;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv.yfilter = yfilter;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd.yfilter = yfilter;
    }
    if(value_path == "num-peers")
    {
        num_peers.yfilter = yfilter;
    }
    if(value_path == "num-pfx")
    {
        num_pfx.yfilter = yfilter;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-end" || name == "init-sync-start" || name == "ipc-default-mtu" || name == "ipc-exceeded-mtu-msg-cnt" || name == "ipc-max-rx-batch-bytes" || name == "ipc-max-tx-batch-bytes" || name == "ipc-msg-rx-bytes" || name == "ipc-msg-rx-cnt" || name == "ipc-msg-tx-bytes" || name == "ipc-msg-tx-cnt" || name == "ipc-restart-cnt" || name == "ipc-tx-fail-cnt" || name == "nsr-cfged" || name == "nsr-synced" || name == "num-cap-rcvd" || name == "num-cap-sent" || name == "num-lbl" || name == "num-lbl-adv" || name == "num-lcl-addr-wd" || name == "num-peers" || name == "num-pfx" || name == "total-ipc-tx-fail-cnt")
        return true;
    return false;
}


}
}

