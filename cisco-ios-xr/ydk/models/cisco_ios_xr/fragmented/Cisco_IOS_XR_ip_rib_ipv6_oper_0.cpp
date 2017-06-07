
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv6_oper_0.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv6_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rib_ipv6_oper {

Ipv6Rib::Ipv6Rib()
    :
    rib_table_ids(std::make_shared<Ipv6Rib::RibTableIds>())
	,vrfs(std::make_shared<Ipv6Rib::Vrfs>())
{
    rib_table_ids->parent = this;

    vrfs->parent = this;

    yang_name = "ipv6-rib"; yang_parent_name = "Cisco-IOS-XR-ip-rib-ipv6-oper";
}

Ipv6Rib::~Ipv6Rib()
{
}

bool Ipv6Rib::has_data() const
{
    return (rib_table_ids !=  nullptr && rib_table_ids->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv6Rib::has_operation() const
{
    return is_set(operation)
	|| (rib_table_ids !=  nullptr && rib_table_ids->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv6Rib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-ipv6-oper:ipv6-rib";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Rib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-table-ids")
    {
        if(rib_table_ids == nullptr)
        {
            rib_table_ids = std::make_shared<Ipv6Rib::RibTableIds>();
        }
        return rib_table_ids;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv6Rib::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rib_table_ids != nullptr)
    {
        children["rib-table-ids"] = rib_table_ids;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv6Rib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ipv6Rib::clone_ptr() const
{
    return std::make_shared<Ipv6Rib>();
}

std::string Ipv6Rib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6Rib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6Rib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ipv6Rib::RibTableIds::RibTableIds()
{
    yang_name = "rib-table-ids"; yang_parent_name = "ipv6-rib";
}

Ipv6Rib::RibTableIds::~RibTableIds()
{
}

bool Ipv6Rib::RibTableIds::has_data() const
{
    for (std::size_t index=0; index<rib_table_id.size(); index++)
    {
        if(rib_table_id[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::RibTableIds::has_operation() const
{
    for (std::size_t index=0; index<rib_table_id.size(); index++)
    {
        if(rib_table_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::RibTableIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-ids";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-ipv6-oper:ipv6-rib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-table-id")
    {
        for(auto const & c : rib_table_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::RibTableIds::RibTableId>();
        c->parent = this;
        rib_table_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rib_table_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::RibTableIds::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::RibTableIds::RibTableId::RibTableId()
    :
    tableid{YType::str, "tableid"}
    	,
    rib_table_itf_hndls(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls>())
	,summary_protos(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos>())
{
    rib_table_itf_hndls->parent = this;

    summary_protos->parent = this;

    yang_name = "rib-table-id"; yang_parent_name = "rib-table-ids";
}

Ipv6Rib::RibTableIds::RibTableId::~RibTableId()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::has_data() const
{
    return tableid.is_set
	|| (rib_table_itf_hndls !=  nullptr && rib_table_itf_hndls->has_data())
	|| (summary_protos !=  nullptr && summary_protos->has_data());
}

bool Ipv6Rib::RibTableIds::RibTableId::has_operation() const
{
    return is_set(operation)
	|| is_set(tableid.operation)
	|| (rib_table_itf_hndls !=  nullptr && rib_table_itf_hndls->has_operation())
	|| (summary_protos !=  nullptr && summary_protos->has_operation());
}

std::string Ipv6Rib::RibTableIds::RibTableId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-id" <<"[tableid='" <<tableid <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-ipv6-oper:ipv6-rib/rib-table-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tableid.is_set || is_set(tableid.operation)) leaf_name_data.push_back(tableid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-table-itf-hndls")
    {
        if(rib_table_itf_hndls == nullptr)
        {
            rib_table_itf_hndls = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls>();
        }
        return rib_table_itf_hndls;
    }

    if(child_yang_name == "summary-protos")
    {
        if(summary_protos == nullptr)
        {
            summary_protos = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos>();
        }
        return summary_protos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rib_table_itf_hndls != nullptr)
    {
        children["rib-table-itf-hndls"] = rib_table_itf_hndls;
    }

    if(summary_protos != nullptr)
    {
        children["summary-protos"] = summary_protos;
    }

    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tableid")
    {
        tableid = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProtos()
{
    yang_name = "summary-protos"; yang_parent_name = "rib-table-id";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::~SummaryProtos()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::has_data() const
{
    for (std::size_t index=0; index<summary_proto.size(); index++)
    {
        if(summary_proto[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::has_operation() const
{
    for (std::size_t index=0; index<summary_proto.size(); index++)
    {
        if(summary_proto[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-protos";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryProtos' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-proto")
    {
        for(auto const & c : summary_proto)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto>();
        c->parent = this;
        summary_proto.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_proto)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::SummaryProto()
    :
    protoid{YType::int32, "protoid"},
    instance{YType::str, "instance"},
    name{YType::str, "name"}
    	,
    proto_route_count(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount>())
	,rtype_bgp_ext(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt>())
	,rtype_bgp_int(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt>())
	,rtype_bgp_loc(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc>())
	,rtype_igrp2_ext(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext>())
	,rtype_igrp2_int(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int>())
	,rtype_isis_l1(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1>())
	,rtype_isis_l1_ia(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia>())
	,rtype_isis_l2(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2>())
	,rtype_isis_sum(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum>())
	,rtype_none(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone>())
	,rtype_ospf_extern1(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1>())
	,rtype_ospf_extern2(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2>())
	,rtype_ospf_inter(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter>())
	,rtype_ospf_intra(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra>())
	,rtype_ospf_nssa1(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1>())
	,rtype_ospf_nssa2(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2>())
	,rtype_other(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther>())
{
    proto_route_count->parent = this;

    rtype_bgp_ext->parent = this;

    rtype_bgp_int->parent = this;

    rtype_bgp_loc->parent = this;

    rtype_igrp2_ext->parent = this;

    rtype_igrp2_int->parent = this;

    rtype_isis_l1->parent = this;

    rtype_isis_l1_ia->parent = this;

    rtype_isis_l2->parent = this;

    rtype_isis_sum->parent = this;

    rtype_none->parent = this;

    rtype_ospf_extern1->parent = this;

    rtype_ospf_extern2->parent = this;

    rtype_ospf_inter->parent = this;

    rtype_ospf_intra->parent = this;

    rtype_ospf_nssa1->parent = this;

    rtype_ospf_nssa2->parent = this;

    rtype_other->parent = this;

    yang_name = "summary-proto"; yang_parent_name = "summary-protos";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::~SummaryProto()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::has_data() const
{
    return protoid.is_set
	|| instance.is_set
	|| name.is_set
	|| (proto_route_count !=  nullptr && proto_route_count->has_data())
	|| (rtype_bgp_ext !=  nullptr && rtype_bgp_ext->has_data())
	|| (rtype_bgp_int !=  nullptr && rtype_bgp_int->has_data())
	|| (rtype_bgp_loc !=  nullptr && rtype_bgp_loc->has_data())
	|| (rtype_igrp2_ext !=  nullptr && rtype_igrp2_ext->has_data())
	|| (rtype_igrp2_int !=  nullptr && rtype_igrp2_int->has_data())
	|| (rtype_isis_l1 !=  nullptr && rtype_isis_l1->has_data())
	|| (rtype_isis_l1_ia !=  nullptr && rtype_isis_l1_ia->has_data())
	|| (rtype_isis_l2 !=  nullptr && rtype_isis_l2->has_data())
	|| (rtype_isis_sum !=  nullptr && rtype_isis_sum->has_data())
	|| (rtype_none !=  nullptr && rtype_none->has_data())
	|| (rtype_ospf_extern1 !=  nullptr && rtype_ospf_extern1->has_data())
	|| (rtype_ospf_extern2 !=  nullptr && rtype_ospf_extern2->has_data())
	|| (rtype_ospf_inter !=  nullptr && rtype_ospf_inter->has_data())
	|| (rtype_ospf_intra !=  nullptr && rtype_ospf_intra->has_data())
	|| (rtype_ospf_nssa1 !=  nullptr && rtype_ospf_nssa1->has_data())
	|| (rtype_ospf_nssa2 !=  nullptr && rtype_ospf_nssa2->has_data())
	|| (rtype_other !=  nullptr && rtype_other->has_data());
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::has_operation() const
{
    return is_set(operation)
	|| is_set(protoid.operation)
	|| is_set(instance.operation)
	|| is_set(name.operation)
	|| (proto_route_count !=  nullptr && proto_route_count->has_operation())
	|| (rtype_bgp_ext !=  nullptr && rtype_bgp_ext->has_operation())
	|| (rtype_bgp_int !=  nullptr && rtype_bgp_int->has_operation())
	|| (rtype_bgp_loc !=  nullptr && rtype_bgp_loc->has_operation())
	|| (rtype_igrp2_ext !=  nullptr && rtype_igrp2_ext->has_operation())
	|| (rtype_igrp2_int !=  nullptr && rtype_igrp2_int->has_operation())
	|| (rtype_isis_l1 !=  nullptr && rtype_isis_l1->has_operation())
	|| (rtype_isis_l1_ia !=  nullptr && rtype_isis_l1_ia->has_operation())
	|| (rtype_isis_l2 !=  nullptr && rtype_isis_l2->has_operation())
	|| (rtype_isis_sum !=  nullptr && rtype_isis_sum->has_operation())
	|| (rtype_none !=  nullptr && rtype_none->has_operation())
	|| (rtype_ospf_extern1 !=  nullptr && rtype_ospf_extern1->has_operation())
	|| (rtype_ospf_extern2 !=  nullptr && rtype_ospf_extern2->has_operation())
	|| (rtype_ospf_inter !=  nullptr && rtype_ospf_inter->has_operation())
	|| (rtype_ospf_intra !=  nullptr && rtype_ospf_intra->has_operation())
	|| (rtype_ospf_nssa1 !=  nullptr && rtype_ospf_nssa1->has_operation())
	|| (rtype_ospf_nssa2 !=  nullptr && rtype_ospf_nssa2->has_operation())
	|| (rtype_other !=  nullptr && rtype_other->has_operation());
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-proto" <<"[protoid='" <<protoid <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryProto' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protoid.is_set || is_set(protoid.operation)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proto-route-count")
    {
        if(proto_route_count == nullptr)
        {
            proto_route_count = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount>();
        }
        return proto_route_count;
    }

    if(child_yang_name == "rtype-bgp-ext")
    {
        if(rtype_bgp_ext == nullptr)
        {
            rtype_bgp_ext = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt>();
        }
        return rtype_bgp_ext;
    }

    if(child_yang_name == "rtype-bgp-int")
    {
        if(rtype_bgp_int == nullptr)
        {
            rtype_bgp_int = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt>();
        }
        return rtype_bgp_int;
    }

    if(child_yang_name == "rtype-bgp-loc")
    {
        if(rtype_bgp_loc == nullptr)
        {
            rtype_bgp_loc = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc>();
        }
        return rtype_bgp_loc;
    }

    if(child_yang_name == "rtype-igrp2-ext")
    {
        if(rtype_igrp2_ext == nullptr)
        {
            rtype_igrp2_ext = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext>();
        }
        return rtype_igrp2_ext;
    }

    if(child_yang_name == "rtype-igrp2-int")
    {
        if(rtype_igrp2_int == nullptr)
        {
            rtype_igrp2_int = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int>();
        }
        return rtype_igrp2_int;
    }

    if(child_yang_name == "rtype-isis-l1")
    {
        if(rtype_isis_l1 == nullptr)
        {
            rtype_isis_l1 = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1>();
        }
        return rtype_isis_l1;
    }

    if(child_yang_name == "rtype-isis-l1-ia")
    {
        if(rtype_isis_l1_ia == nullptr)
        {
            rtype_isis_l1_ia = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia>();
        }
        return rtype_isis_l1_ia;
    }

    if(child_yang_name == "rtype-isis-l2")
    {
        if(rtype_isis_l2 == nullptr)
        {
            rtype_isis_l2 = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2>();
        }
        return rtype_isis_l2;
    }

    if(child_yang_name == "rtype-isis-sum")
    {
        if(rtype_isis_sum == nullptr)
        {
            rtype_isis_sum = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum>();
        }
        return rtype_isis_sum;
    }

    if(child_yang_name == "rtype-none")
    {
        if(rtype_none == nullptr)
        {
            rtype_none = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone>();
        }
        return rtype_none;
    }

    if(child_yang_name == "rtype-ospf-extern1")
    {
        if(rtype_ospf_extern1 == nullptr)
        {
            rtype_ospf_extern1 = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1>();
        }
        return rtype_ospf_extern1;
    }

    if(child_yang_name == "rtype-ospf-extern2")
    {
        if(rtype_ospf_extern2 == nullptr)
        {
            rtype_ospf_extern2 = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2>();
        }
        return rtype_ospf_extern2;
    }

    if(child_yang_name == "rtype-ospf-inter")
    {
        if(rtype_ospf_inter == nullptr)
        {
            rtype_ospf_inter = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter>();
        }
        return rtype_ospf_inter;
    }

    if(child_yang_name == "rtype-ospf-intra")
    {
        if(rtype_ospf_intra == nullptr)
        {
            rtype_ospf_intra = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra>();
        }
        return rtype_ospf_intra;
    }

    if(child_yang_name == "rtype-ospf-nssa1")
    {
        if(rtype_ospf_nssa1 == nullptr)
        {
            rtype_ospf_nssa1 = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1>();
        }
        return rtype_ospf_nssa1;
    }

    if(child_yang_name == "rtype-ospf-nssa2")
    {
        if(rtype_ospf_nssa2 == nullptr)
        {
            rtype_ospf_nssa2 = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2>();
        }
        return rtype_ospf_nssa2;
    }

    if(child_yang_name == "rtype-other")
    {
        if(rtype_other == nullptr)
        {
            rtype_other = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther>();
        }
        return rtype_other;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(proto_route_count != nullptr)
    {
        children["proto-route-count"] = proto_route_count;
    }

    if(rtype_bgp_ext != nullptr)
    {
        children["rtype-bgp-ext"] = rtype_bgp_ext;
    }

    if(rtype_bgp_int != nullptr)
    {
        children["rtype-bgp-int"] = rtype_bgp_int;
    }

    if(rtype_bgp_loc != nullptr)
    {
        children["rtype-bgp-loc"] = rtype_bgp_loc;
    }

    if(rtype_igrp2_ext != nullptr)
    {
        children["rtype-igrp2-ext"] = rtype_igrp2_ext;
    }

    if(rtype_igrp2_int != nullptr)
    {
        children["rtype-igrp2-int"] = rtype_igrp2_int;
    }

    if(rtype_isis_l1 != nullptr)
    {
        children["rtype-isis-l1"] = rtype_isis_l1;
    }

    if(rtype_isis_l1_ia != nullptr)
    {
        children["rtype-isis-l1-ia"] = rtype_isis_l1_ia;
    }

    if(rtype_isis_l2 != nullptr)
    {
        children["rtype-isis-l2"] = rtype_isis_l2;
    }

    if(rtype_isis_sum != nullptr)
    {
        children["rtype-isis-sum"] = rtype_isis_sum;
    }

    if(rtype_none != nullptr)
    {
        children["rtype-none"] = rtype_none;
    }

    if(rtype_ospf_extern1 != nullptr)
    {
        children["rtype-ospf-extern1"] = rtype_ospf_extern1;
    }

    if(rtype_ospf_extern2 != nullptr)
    {
        children["rtype-ospf-extern2"] = rtype_ospf_extern2;
    }

    if(rtype_ospf_inter != nullptr)
    {
        children["rtype-ospf-inter"] = rtype_ospf_inter;
    }

    if(rtype_ospf_intra != nullptr)
    {
        children["rtype-ospf-intra"] = rtype_ospf_intra;
    }

    if(rtype_ospf_nssa1 != nullptr)
    {
        children["rtype-ospf-nssa1"] = rtype_ospf_nssa1;
    }

    if(rtype_ospf_nssa2 != nullptr)
    {
        children["rtype-ospf-nssa2"] = rtype_ospf_nssa2;
    }

    if(rtype_other != nullptr)
    {
        children["rtype-other"] = rtype_other;
    }

    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protoid")
    {
        protoid = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::ProtoRouteCount()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "proto-route-count"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::~ProtoRouteCount()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto-route-count";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtoRouteCount' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::RtypeNone()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-none"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::~RtypeNone()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-none";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeNone' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::RtypeOther()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-other"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::~RtypeOther()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-other";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOther' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::RtypeOspfIntra()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-intra"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::~RtypeOspfIntra()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-intra";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfIntra' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::RtypeOspfInter()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-inter"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::~RtypeOspfInter()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-inter";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfInter' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::RtypeOspfExtern1()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-extern1"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::~RtypeOspfExtern1()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-extern1";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfExtern1' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::RtypeOspfExtern2()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-extern2"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::~RtypeOspfExtern2()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-extern2";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfExtern2' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::RtypeIsisSum()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-isis-sum"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::~RtypeIsisSum()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-sum";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIsisSum' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::RtypeIsisL1()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-isis-l1"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::~RtypeIsisL1()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-l1";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIsisL1' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::RtypeIsisL2()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-isis-l2"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::~RtypeIsisL2()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-l2";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIsisL2' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::RtypeIsisL1Ia()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-isis-l1-ia"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::~RtypeIsisL1Ia()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-l1-ia";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIsisL1Ia' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::RtypeBgpInt()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-bgp-int"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::~RtypeBgpInt()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-bgp-int";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeBgpInt' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::RtypeBgpExt()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-bgp-ext"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::~RtypeBgpExt()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-bgp-ext";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeBgpExt' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::RtypeBgpLoc()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-bgp-loc"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::~RtypeBgpLoc()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-bgp-loc";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeBgpLoc' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::RtypeOspfNssa1()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-nssa1"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::~RtypeOspfNssa1()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-nssa1";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfNssa1' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::RtypeOspfNssa2()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-nssa2"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::~RtypeOspfNssa2()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-nssa2";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfNssa2' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::RtypeIgrp2Int()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-igrp2-int"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::~RtypeIgrp2Int()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-igrp2-int";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIgrp2Int' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::RtypeIgrp2Ext()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-igrp2-ext"; yang_parent_name = "summary-proto";
}

Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::~RtypeIgrp2Ext()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-igrp2-ext";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIgrp2Ext' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndls()
{
    yang_name = "rib-table-itf-hndls"; yang_parent_name = "rib-table-id";
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::~RibTableItfHndls()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::has_data() const
{
    for (std::size_t index=0; index<rib_table_itf_hndl.size(); index++)
    {
        if(rib_table_itf_hndl[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::has_operation() const
{
    for (std::size_t index=0; index<rib_table_itf_hndl.size(); index++)
    {
        if(rib_table_itf_hndl[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-itf-hndls";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibTableItfHndls' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-table-itf-hndl")
    {
        for(auto const & c : rib_table_itf_hndl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl>();
        c->parent = this;
        rib_table_itf_hndl.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rib_table_itf_hndl)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::RibTableItfHndl()
    :
    handle{YType::int32, "handle"}
{
    yang_name = "rib-table-itf-hndl"; yang_parent_name = "rib-table-itf-hndls";
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::~RibTableItfHndl()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::has_data() const
{
    for (std::size_t index=0; index<itf_route.size(); index++)
    {
        if(itf_route[index]->has_data())
            return true;
    }
    return handle.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::has_operation() const
{
    for (std::size_t index=0; index<itf_route.size(); index++)
    {
        if(itf_route[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(handle.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-itf-hndl" <<"[handle='" <<handle <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibTableItfHndl' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "itf-route")
    {
        for(auto const & c : itf_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute>();
        c->parent = this;
        itf_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : itf_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "handle")
    {
        handle = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::ItfRoute()
    :
    address{YType::str, "address"},
    active{YType::boolean, "active"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "itf-route"; yang_parent_name = "rib-table-itf-hndl";
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::~ItfRoute()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::has_data() const
{
    return address.is_set
	|| active.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(active.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itf-route" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ItfRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "itf-route";
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "ipv6-rib";
}

Ipv6Rib::Vrfs::~Vrfs()
{
}

bool Ipv6Rib::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-ipv6-oper:ipv6-rib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    afs(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs>())
{
    afs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv6Rib::Vrfs::Vrf::~Vrf()
{
}

bool Ipv6Rib::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-ipv6-oper:ipv6-rib/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
}

Ipv6Rib::Vrfs::Vrf::Afs::~Afs()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::str, "af-name"}
    	,
    safs(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs>())
{
    safs->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (safs !=  nullptr && safs->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (safs !=  nullptr && safs->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "safs")
    {
        if(safs == nullptr)
        {
            safs = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs>();
        }
        return safs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(safs != nullptr)
    {
        children["safs"] = safs;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Safs()
{
    yang_name = "safs"; yang_parent_name = "af";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::~Safs()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::has_data() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::has_operation() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "safs";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Safs' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "saf")
    {
        for(auto const & c : saf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf>();
        c->parent = this;
        saf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : saf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::Saf()
    :
    saf_name{YType::str, "saf-name"}
    	,
    ip_rib_route_table_names(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames>())
{
    ip_rib_route_table_names->parent = this;

    yang_name = "saf"; yang_parent_name = "safs";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::~Saf()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::has_data() const
{
    return saf_name.is_set
	|| (ip_rib_route_table_names !=  nullptr && ip_rib_route_table_names->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::has_operation() const
{
    return is_set(operation)
	|| is_set(saf_name.operation)
	|| (ip_rib_route_table_names !=  nullptr && ip_rib_route_table_names->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saf" <<"[saf-name='" <<saf_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Saf' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-rib-route-table-names")
    {
        if(ip_rib_route_table_names == nullptr)
        {
            ip_rib_route_table_names = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames>();
        }
        return ip_rib_route_table_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_rib_route_table_names != nullptr)
    {
        children["ip-rib-route-table-names"] = ip_rib_route_table_names;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableNames()
{
    yang_name = "ip-rib-route-table-names"; yang_parent_name = "saf";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::~IpRibRouteTableNames()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::has_data() const
{
    for (std::size_t index=0; index<ip_rib_route_table_name.size(); index++)
    {
        if(ip_rib_route_table_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::has_operation() const
{
    for (std::size_t index=0; index<ip_rib_route_table_name.size(); index++)
    {
        if(ip_rib_route_table_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-rib-route-table-names";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpRibRouteTableNames' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-rib-route-table-name")
    {
        for(auto const & c : ip_rib_route_table_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName>();
        c->parent = this;
        ip_rib_route_table_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_rib_route_table_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::IpRibRouteTableName()
    :
    route_table_name{YType::str, "route-table-name"}
    	,
    adverts(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts>())
	,backup_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes>())
	,deleted_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes>())
	,destination_kw(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw>())
	,protocol(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol>())
	,q_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes>())
	,routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes>())
{
    adverts->parent = this;

    backup_routes->parent = this;

    deleted_routes->parent = this;

    destination_kw->parent = this;

    protocol->parent = this;

    q_routes->parent = this;

    routes->parent = this;

    yang_name = "ip-rib-route-table-name"; yang_parent_name = "ip-rib-route-table-names";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::~IpRibRouteTableName()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::has_data() const
{
    return route_table_name.is_set
	|| (adverts !=  nullptr && adverts->has_data())
	|| (backup_routes !=  nullptr && backup_routes->has_data())
	|| (deleted_routes !=  nullptr && deleted_routes->has_data())
	|| (destination_kw !=  nullptr && destination_kw->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (q_routes !=  nullptr && q_routes->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::has_operation() const
{
    return is_set(operation)
	|| is_set(route_table_name.operation)
	|| (adverts !=  nullptr && adverts->has_operation())
	|| (backup_routes !=  nullptr && backup_routes->has_operation())
	|| (deleted_routes !=  nullptr && deleted_routes->has_operation())
	|| (destination_kw !=  nullptr && destination_kw->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (q_routes !=  nullptr && q_routes->has_operation())
	|| (routes !=  nullptr && routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-rib-route-table-name" <<"[route-table-name='" <<route_table_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpRibRouteTableName' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_table_name.is_set || is_set(route_table_name.operation)) leaf_name_data.push_back(route_table_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adverts")
    {
        if(adverts == nullptr)
        {
            adverts = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts>();
        }
        return adverts;
    }

    if(child_yang_name == "backup-routes")
    {
        if(backup_routes == nullptr)
        {
            backup_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes>();
        }
        return backup_routes;
    }

    if(child_yang_name == "deleted-routes")
    {
        if(deleted_routes == nullptr)
        {
            deleted_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes>();
        }
        return deleted_routes;
    }

    if(child_yang_name == "destination-kw")
    {
        if(destination_kw == nullptr)
        {
            destination_kw = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw>();
        }
        return destination_kw;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "q-routes")
    {
        if(q_routes == nullptr)
        {
            q_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes>();
        }
        return q_routes;
    }

    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adverts != nullptr)
    {
        children["adverts"] = adverts;
    }

    if(backup_routes != nullptr)
    {
        children["backup-routes"] = backup_routes;
    }

    if(deleted_routes != nullptr)
    {
        children["deleted-routes"] = deleted_routes;
    }

    if(destination_kw != nullptr)
    {
        children["destination-kw"] = destination_kw;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(q_routes != nullptr)
    {
        children["q-routes"] = q_routes;
    }

    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-table-name")
    {
        route_table_name = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestinationKw()
    :
    dest_backup_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes>())
	,dest_best_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes>())
	,dest_next_hop_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes>())
	,dest_q_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes>())
{
    dest_backup_routes->parent = this;

    dest_best_routes->parent = this;

    dest_next_hop_routes->parent = this;

    dest_q_routes->parent = this;

    yang_name = "destination-kw"; yang_parent_name = "ip-rib-route-table-name";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::~DestinationKw()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::has_data() const
{
    return (dest_backup_routes !=  nullptr && dest_backup_routes->has_data())
	|| (dest_best_routes !=  nullptr && dest_best_routes->has_data())
	|| (dest_next_hop_routes !=  nullptr && dest_next_hop_routes->has_data())
	|| (dest_q_routes !=  nullptr && dest_q_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::has_operation() const
{
    return is_set(operation)
	|| (dest_backup_routes !=  nullptr && dest_backup_routes->has_operation())
	|| (dest_best_routes !=  nullptr && dest_best_routes->has_operation())
	|| (dest_next_hop_routes !=  nullptr && dest_next_hop_routes->has_operation())
	|| (dest_q_routes !=  nullptr && dest_q_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-kw";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationKw' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-backup-routes")
    {
        if(dest_backup_routes == nullptr)
        {
            dest_backup_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes>();
        }
        return dest_backup_routes;
    }

    if(child_yang_name == "dest-best-routes")
    {
        if(dest_best_routes == nullptr)
        {
            dest_best_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes>();
        }
        return dest_best_routes;
    }

    if(child_yang_name == "dest-next-hop-routes")
    {
        if(dest_next_hop_routes == nullptr)
        {
            dest_next_hop_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes>();
        }
        return dest_next_hop_routes;
    }

    if(child_yang_name == "dest-q-routes")
    {
        if(dest_q_routes == nullptr)
        {
            dest_q_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes>();
        }
        return dest_q_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest_backup_routes != nullptr)
    {
        children["dest-backup-routes"] = dest_backup_routes;
    }

    if(dest_best_routes != nullptr)
    {
        children["dest-best-routes"] = dest_best_routes;
    }

    if(dest_next_hop_routes != nullptr)
    {
        children["dest-next-hop-routes"] = dest_next_hop_routes;
    }

    if(dest_q_routes != nullptr)
    {
        children["dest-q-routes"] = dest_q_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoutes()
{
    yang_name = "dest-q-routes"; yang_parent_name = "destination-kw";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::~DestQRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::has_data() const
{
    for (std::size_t index=0; index<dest_q_route.size(); index++)
    {
        if(dest_q_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::has_operation() const
{
    for (std::size_t index=0; index<dest_q_route.size(); index++)
    {
        if(dest_q_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-q-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestQRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-q-route")
    {
        for(auto const & c : dest_q_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute>();
        c->parent = this;
        dest_q_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dest_q_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::DestQRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "dest-q-route"; yang_parent_name = "dest-q-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::~DestQRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-q-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestQRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "dest-q-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoutes()
{
    yang_name = "dest-backup-routes"; yang_parent_name = "destination-kw";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::~DestBackupRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::has_data() const
{
    for (std::size_t index=0; index<dest_backup_route.size(); index++)
    {
        if(dest_backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<dest_backup_route.size(); index++)
    {
        if(dest_backup_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-backup-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestBackupRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-backup-route")
    {
        for(auto const & c : dest_backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute>();
        c->parent = this;
        dest_backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dest_backup_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::DestBackupRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "dest-backup-route"; yang_parent_name = "dest-backup-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::~DestBackupRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-backup-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestBackupRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "dest-backup-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoutes()
{
    yang_name = "dest-best-routes"; yang_parent_name = "destination-kw";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::~DestBestRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::has_data() const
{
    for (std::size_t index=0; index<dest_best_route.size(); index++)
    {
        if(dest_best_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::has_operation() const
{
    for (std::size_t index=0; index<dest_best_route.size(); index++)
    {
        if(dest_best_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-best-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestBestRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-best-route")
    {
        for(auto const & c : dest_best_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute>();
        c->parent = this;
        dest_best_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dest_best_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::DestBestRoute()
    :
    address{YType::str, "address"},
    active{YType::boolean, "active"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "dest-best-route"; yang_parent_name = "dest-best-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::~DestBestRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::has_data() const
{
    return address.is_set
	|| active.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(active.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-best-route" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestBestRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "dest-best-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoutes()
{
    yang_name = "dest-next-hop-routes"; yang_parent_name = "destination-kw";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::~DestNextHopRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::has_data() const
{
    for (std::size_t index=0; index<dest_next_hop_route.size(); index++)
    {
        if(dest_next_hop_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::has_operation() const
{
    for (std::size_t index=0; index<dest_next_hop_route.size(); index++)
    {
        if(dest_next_hop_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-next-hop-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestNextHopRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-next-hop-route")
    {
        for(auto const & c : dest_next_hop_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute>();
        c->parent = this;
        dest_next_hop_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dest_next_hop_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::DestNextHopRoute()
    :
    address{YType::str, "address"},
    active{YType::boolean, "active"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "dest-next-hop-route"; yang_parent_name = "dest-next-hop-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::~DestNextHopRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::has_data() const
{
    return address.is_set
	|| active.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(active.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-next-hop-route" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestNextHopRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "dest-next-hop-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Adverts()
{
    yang_name = "adverts"; yang_parent_name = "ip-rib-route-table-name";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::~Adverts()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::has_data() const
{
    for (std::size_t index=0; index<advert.size(); index++)
    {
        if(advert[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::has_operation() const
{
    for (std::size_t index=0; index<advert.size(); index++)
    {
        if(advert[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adverts";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Adverts' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advert")
    {
        for(auto const & c : advert)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert>();
        c->parent = this;
        advert.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : advert)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Advert()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "advert"; yang_parent_name = "adverts";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::~Advert()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_advert.size(); index++)
    {
        if(ipv6_rib_edm_advert[index]->has_data())
            return true;
    }
    return address.is_set
	|| prefix_length.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_advert.size(); index++)
    {
        if(ipv6_rib_edm_advert[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advert";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advert' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-advert")
    {
        for(auto const & c : ipv6_rib_edm_advert)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert>();
        c->parent = this;
        ipv6_rib_edm_advert.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_advert)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert::Ipv6RibEdmAdvert()
    :
    client_id{YType::uint32, "client-id"},
    code{YType::int8, "code"},
    extended_communities{YType::str, "extended-communities"},
    instance_name{YType::str, "instance-name"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_opaque{YType::uint32, "protocol-opaque"},
    protocol_opaque_flags{YType::uint8, "protocol-opaque-flags"}
{
    yang_name = "ipv6-rib-edm-advert"; yang_parent_name = "advert";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert::~Ipv6RibEdmAdvert()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert::has_data() const
{
    return client_id.is_set
	|| code.is_set
	|| extended_communities.is_set
	|| instance_name.is_set
	|| number_of_extended_communities.is_set
	|| protocol_id.is_set
	|| protocol_opaque.is_set
	|| protocol_opaque_flags.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert::has_operation() const
{
    return is_set(operation)
	|| is_set(client_id.operation)
	|| is_set(code.operation)
	|| is_set(extended_communities.operation)
	|| is_set(instance_name.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_opaque.operation)
	|| is_set(protocol_opaque_flags.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-advert";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmAdvert' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (extended_communities.is_set || is_set(extended_communities.operation)) leaf_name_data.push_back(extended_communities.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_opaque.is_set || is_set(protocol_opaque.operation)) leaf_name_data.push_back(protocol_opaque.get_name_leafdata());
    if (protocol_opaque_flags.is_set || is_set(protocol_opaque_flags.operation)) leaf_name_data.push_back(protocol_opaque_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "extended-communities")
    {
        extended_communities = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-opaque")
    {
        protocol_opaque = value;
    }
    if(value_path == "protocol-opaque-flags")
    {
        protocol_opaque_flags = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoutes()
{
    yang_name = "deleted-routes"; yang_parent_name = "ip-rib-route-table-name";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::~DeletedRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::has_data() const
{
    for (std::size_t index=0; index<deleted_route.size(); index++)
    {
        if(deleted_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::has_operation() const
{
    for (std::size_t index=0; index<deleted_route.size(); index++)
    {
        if(deleted_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deleted-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeletedRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deleted-route")
    {
        for(auto const & c : deleted_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute>();
        c->parent = this;
        deleted_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : deleted_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::DeletedRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "deleted-route"; yang_parent_name = "deleted-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::~DeletedRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deleted-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeletedRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "deleted-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Protocol()
    :
    bgp(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp>())
	,connected(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected>())
	,eigrp(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp>())
	,isis(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis>())
	,local(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local>())
	,mobile(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile>())
	,ospf(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf>())
	,rpl(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl>())
	,static_(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_>())
	,subscriber(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber>())
	,te_client(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient>())
{
    bgp->parent = this;

    connected->parent = this;

    eigrp->parent = this;

    isis->parent = this;

    local->parent = this;

    mobile->parent = this;

    ospf->parent = this;

    rpl->parent = this;

    static_->parent = this;

    subscriber->parent = this;

    te_client->parent = this;

    yang_name = "protocol"; yang_parent_name = "ip-rib-route-table-name";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::~Protocol()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (rpl !=  nullptr && rpl->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (te_client !=  nullptr && te_client->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::has_operation() const
{
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (rpl !=  nullptr && rpl->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (te_client !=  nullptr && te_client->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local>();
        }
        return local;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "rpl")
    {
        if(rpl == nullptr)
        {
            rpl = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl>();
        }
        return rpl;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber>();
        }
        return subscriber;
    }

    if(child_yang_name == "te-client")
    {
        if(te_client == nullptr)
        {
            te_client = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient>();
        }
        return te_client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(rpl != nullptr)
    {
        children["rpl"] = rpl;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(subscriber != nullptr)
    {
        children["subscriber"] = subscriber;
    }

    if(te_client != nullptr)
    {
        children["te-client"] = te_client;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Local()
    :
    lspv(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv>())
	,non_as(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs>())
{
    lspv->parent = this;

    non_as->parent = this;

    yang_name = "local"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::~Local()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::has_data() const
{
    return (lspv !=  nullptr && lspv->has_data())
	|| (non_as !=  nullptr && non_as->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::has_operation() const
{
    return is_set(operation)
	|| (lspv !=  nullptr && lspv->has_operation())
	|| (non_as !=  nullptr && non_as->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lspv")
    {
        if(lspv == nullptr)
        {
            lspv = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv>();
        }
        return lspv;
    }

    if(child_yang_name == "non-as")
    {
        if(non_as == nullptr)
        {
            non_as = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs>();
        }
        return non_as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lspv != nullptr)
    {
        children["lspv"] = lspv;
    }

    if(non_as != nullptr)
    {
        children["non-as"] = non_as;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Lspv()
    :
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "lspv"; yang_parent_name = "local";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::~Lspv()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspv";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lspv' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "lspv";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "lspv";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::NonAs()
    :
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "non-as"; yang_parent_name = "local";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::~NonAs()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-as";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonAs' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::Bgp()
{
    yang_name = "bgp"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::~Bgp()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        for(auto const & c : as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As>();
        c->parent = this;
        as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::As()
    :
    as{YType::str, "as"}
    	,
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "as"; yang_parent_name = "bgp";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::~As()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::has_data() const
{
    return as.is_set
	|| (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::Mobile()
    :
    non_as(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs>())
{
    non_as->parent = this;

    yang_name = "mobile"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::~Mobile()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::has_data() const
{
    return (non_as !=  nullptr && non_as->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::has_operation() const
{
    return is_set(operation)
	|| (non_as !=  nullptr && non_as->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-as")
    {
        if(non_as == nullptr)
        {
            non_as = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs>();
        }
        return non_as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_as != nullptr)
    {
        children["non-as"] = non_as;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::NonAs()
    :
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "non-as"; yang_parent_name = "mobile";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::~NonAs()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-as";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonAs' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::~Eigrp()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        for(auto const & c : as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As>();
        c->parent = this;
        as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::As()
    :
    as{YType::str, "as"}
    	,
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "as"; yang_parent_name = "eigrp";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::~As()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::has_data() const
{
    return as.is_set
	|| (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::Rpl()
{
    yang_name = "rpl"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::~Rpl()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpl";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpl' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        for(auto const & c : as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As>();
        c->parent = this;
        as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::As()
    :
    as{YType::str, "as"}
    	,
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "as"; yang_parent_name = "rpl";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::~As()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::has_data() const
{
    return as.is_set
	|| (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::Static_()
    :
    non_as(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs>())
{
    non_as->parent = this;

    yang_name = "static"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::~Static_()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::has_data() const
{
    return (non_as !=  nullptr && non_as->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::has_operation() const
{
    return is_set(operation)
	|| (non_as !=  nullptr && non_as->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-as")
    {
        if(non_as == nullptr)
        {
            non_as = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs>();
        }
        return non_as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_as != nullptr)
    {
        children["non-as"] = non_as;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::NonAs()
    :
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "non-as"; yang_parent_name = "static";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::~NonAs()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-as";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonAs' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::TeClient()
    :
    non_as(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs>())
{
    non_as->parent = this;

    yang_name = "te-client"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::~TeClient()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::has_data() const
{
    return (non_as !=  nullptr && non_as->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::has_operation() const
{
    return is_set(operation)
	|| (non_as !=  nullptr && non_as->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-client";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeClient' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-as")
    {
        if(non_as == nullptr)
        {
            non_as = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs>();
        }
        return non_as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_as != nullptr)
    {
        children["non-as"] = non_as;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::NonAs()
    :
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "non-as"; yang_parent_name = "te-client";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::~NonAs()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-as";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonAs' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::Subscriber()
    :
    non_as(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs>())
{
    non_as->parent = this;

    yang_name = "subscriber"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::~Subscriber()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::has_data() const
{
    return (non_as !=  nullptr && non_as->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::has_operation() const
{
    return is_set(operation)
	|| (non_as !=  nullptr && non_as->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subscriber' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-as")
    {
        if(non_as == nullptr)
        {
            non_as = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs>();
        }
        return non_as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_as != nullptr)
    {
        children["non-as"] = non_as;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::NonAs()
    :
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "non-as"; yang_parent_name = "subscriber";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::~NonAs()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-as";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonAs' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::Ospf()
{
    yang_name = "ospf"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::~Ospf()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        for(auto const & c : as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As>();
        c->parent = this;
        as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::As()
    :
    as{YType::str, "as"}
    	,
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "as"; yang_parent_name = "ospf";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::~As()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::has_data() const
{
    return as.is_set
	|| (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::Connected()
    :
    l2vpn(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn>())
	,non_as(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs>())
{
    l2vpn->parent = this;

    non_as->parent = this;

    yang_name = "connected"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::~Connected()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::has_data() const
{
    return (l2vpn !=  nullptr && l2vpn->has_data())
	|| (non_as !=  nullptr && non_as->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::has_operation() const
{
    return is_set(operation)
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (non_as !=  nullptr && non_as->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "non-as")
    {
        if(non_as == nullptr)
        {
            non_as = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs>();
        }
        return non_as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    if(non_as != nullptr)
    {
        children["non-as"] = non_as;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::L2Vpn()
    :
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "connected";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::~L2Vpn()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Vpn' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "l2vpn";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "l2vpn";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::NonAs()
    :
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "non-as"; yang_parent_name = "connected";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::~NonAs()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-as";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonAs' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "non-as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::Isis()
{
    yang_name = "isis"; yang_parent_name = "protocol";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::~Isis()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        for(auto const & c : as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As>();
        c->parent = this;
        as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::As()
    :
    as{YType::str, "as"}
    	,
    information(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>())
	,protocol_routes(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "as"; yang_parent_name = "isis";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::~As()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_data() const
{
    return as.is_set
	|| (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::~Information()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "as";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}


}
}

