#ifndef _IPMROUTE_STD_MIB_
#define _IPMROUTE_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace IPMROUTE_STD_MIB {

class IPMROUTESTDMIB : public ydk::Entity
{
    public:
        IPMROUTESTDMIB();
        ~IPMROUTESTDMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Ipmroute; //type: IPMROUTESTDMIB::Ipmroute
        class Ipmroutetable; //type: IPMROUTESTDMIB::Ipmroutetable
        class Ipmroutenexthoptable; //type: IPMROUTESTDMIB::Ipmroutenexthoptable
        class Ipmrouteinterfacetable; //type: IPMROUTESTDMIB::Ipmrouteinterfacetable
        class Ipmrouteboundarytable; //type: IPMROUTESTDMIB::Ipmrouteboundarytable
        class Ipmroutescopenametable; //type: IPMROUTESTDMIB::Ipmroutescopenametable

        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroute> ipmroute;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmrouteboundarytable> ipmrouteboundarytable;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmrouteinterfacetable> ipmrouteinterfacetable;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutenexthoptable> ipmroutenexthoptable;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutescopenametable> ipmroutescopenametable;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutetable> ipmroutetable;
        
}; // IPMROUTESTDMIB


class IPMROUTESTDMIB::Ipmroute : public ydk::Entity
{
    public:
        Ipmroute();
        ~Ipmroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipmrouteenable; //type: Ipmrouteenable
        ydk::YLeaf ipmrouteentrycount; //type: uint32
        class Ipmrouteenable;

}; // IPMROUTESTDMIB::Ipmroute


class IPMROUTESTDMIB::Ipmrouteboundarytable : public ydk::Entity
{
    public:
        Ipmrouteboundarytable();
        ~Ipmrouteboundarytable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipmrouteboundaryentry; //type: IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry

        std::vector<std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry> > ipmrouteboundaryentry;
        
}; // IPMROUTESTDMIB::Ipmrouteboundarytable


class IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry : public ydk::Entity
{
    public:
        Ipmrouteboundaryentry();
        ~Ipmrouteboundaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipmrouteboundaryifindex; //type: int32
        ydk::YLeaf ipmrouteboundaryaddress; //type: string
        ydk::YLeaf ipmrouteboundaryaddressmask; //type: string
        ydk::YLeaf ipmrouteboundarystatus; //type: RowStatus

}; // IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry


class IPMROUTESTDMIB::Ipmrouteinterfacetable : public ydk::Entity
{
    public:
        Ipmrouteinterfacetable();
        ~Ipmrouteinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipmrouteinterfaceentry; //type: IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry> > ipmrouteinterfaceentry;
        
}; // IPMROUTESTDMIB::Ipmrouteinterfacetable


class IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry : public ydk::Entity
{
    public:
        Ipmrouteinterfaceentry();
        ~Ipmrouteinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipmrouteinterfaceifindex; //type: int32
        ydk::YLeaf ipmrouteinterfacettl; //type: int32
        ydk::YLeaf ipmrouteinterfaceprotocol; //type: IANAipMRouteProtocol
        ydk::YLeaf ipmrouteinterfaceratelimit; //type: int32
        ydk::YLeaf ipmrouteinterfaceinmcastoctets; //type: uint32
        ydk::YLeaf ipmrouteinterfaceoutmcastoctets; //type: uint32
        ydk::YLeaf ipmrouteinterfacehcinmcastoctets; //type: uint64
        ydk::YLeaf ipmrouteinterfacehcoutmcastoctets; //type: uint64
        ydk::YLeaf ciscoipmrouteifinmcastoctets; //type: uint64
        ydk::YLeaf ciscoipmrouteifoutmcastoctets; //type: uint64
        ydk::YLeaf ciscoipmrouteifinmcastpkts; //type: uint32
        ydk::YLeaf ciscoipmrouteifhcinmcastpkts; //type: uint64
        ydk::YLeaf ciscoipmrouteifoutmcastpkts; //type: uint32
        ydk::YLeaf ciscoipmrouteifhcoutmcastpkts; //type: uint64

}; // IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry


class IPMROUTESTDMIB::Ipmroutenexthoptable : public ydk::Entity
{
    public:
        Ipmroutenexthoptable();
        ~Ipmroutenexthoptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipmroutenexthopentry; //type: IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry

        std::vector<std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry> > ipmroutenexthopentry;
        
}; // IPMROUTESTDMIB::Ipmroutenexthoptable


class IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry : public ydk::Entity
{
    public:
        Ipmroutenexthopentry();
        ~Ipmroutenexthopentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipmroutenexthopgroup; //type: string
        ydk::YLeaf ipmroutenexthopsource; //type: string
        ydk::YLeaf ipmroutenexthopsourcemask; //type: string
        ydk::YLeaf ipmroutenexthopifindex; //type: int32
        ydk::YLeaf ipmroutenexthopaddress; //type: string
        ydk::YLeaf ipmroutenexthopstate; //type: Ipmroutenexthopstate
        ydk::YLeaf ipmroutenexthopuptime; //type: uint32
        ydk::YLeaf ipmroutenexthopexpirytime; //type: uint32
        ydk::YLeaf ipmroutenexthopclosestmemberhops; //type: int32
        ydk::YLeaf ipmroutenexthopprotocol; //type: IANAipMRouteProtocol
        ydk::YLeaf ipmroutenexthoppkts; //type: uint32
        ydk::YLeaf ciscoipmroutenexthopoutlimit; //type: uint32
        ydk::YLeaf ciscoipmroutenexthopmachdr; //type: binary
        ydk::YLeaf ciscoipmroutenexthoppkts; //type: uint64
        class Ipmroutenexthopstate;

}; // IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry


class IPMROUTESTDMIB::Ipmroutescopenametable : public ydk::Entity
{
    public:
        Ipmroutescopenametable();
        ~Ipmroutescopenametable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipmroutescopenameentry; //type: IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry

        std::vector<std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry> > ipmroutescopenameentry;
        
}; // IPMROUTESTDMIB::Ipmroutescopenametable


class IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry : public ydk::Entity
{
    public:
        Ipmroutescopenameentry();
        ~Ipmroutescopenameentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipmroutescopenameaddress; //type: string
        ydk::YLeaf ipmroutescopenameaddressmask; //type: string
        ydk::YLeaf ipmroutescopenamelanguage; //type: string
        ydk::YLeaf ipmroutescopenamestring; //type: string
        ydk::YLeaf ipmroutescopenamedefault; //type: boolean
        ydk::YLeaf ipmroutescopenamestatus; //type: RowStatus

}; // IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry


class IPMROUTESTDMIB::Ipmroutetable : public ydk::Entity
{
    public:
        Ipmroutetable();
        ~Ipmroutetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipmrouteentry; //type: IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry

        std::vector<std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry> > ipmrouteentry;
        
}; // IPMROUTESTDMIB::Ipmroutetable


class IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry : public ydk::Entity
{
    public:
        Ipmrouteentry();
        ~Ipmrouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipmroutegroup; //type: string
        ydk::YLeaf ipmroutesource; //type: string
        ydk::YLeaf ipmroutesourcemask; //type: string
        ydk::YLeaf ipmrouteupstreamneighbor; //type: string
        ydk::YLeaf ipmrouteinifindex; //type: int32
        ydk::YLeaf ipmrouteuptime; //type: uint32
        ydk::YLeaf ipmrouteexpirytime; //type: uint32
        ydk::YLeaf ipmroutepkts; //type: uint32
        ydk::YLeaf ipmroutedifferentinifpackets; //type: uint32
        ydk::YLeaf ipmrouteoctets; //type: uint32
        ydk::YLeaf ipmrouteprotocol; //type: IANAipMRouteProtocol
        ydk::YLeaf ipmroutertproto; //type: IANAipRouteProtocol
        ydk::YLeaf ipmroutertaddress; //type: string
        ydk::YLeaf ipmroutertmask; //type: string
        ydk::YLeaf ipmrouterttype; //type: Ipmrouterttype
        ydk::YLeaf ipmroutehcoctets; //type: uint64
        ydk::YLeaf ciscoipmroutepruneflag; //type: boolean
        ydk::YLeaf ciscoipmroutesparseflag; //type: boolean
        ydk::YLeaf ciscoipmrouteconnectedflag; //type: boolean
        ydk::YLeaf ciscoipmroutelocalflag; //type: boolean
        ydk::YLeaf ciscoipmrouteregisterflag; //type: boolean
        ydk::YLeaf ciscoipmrouterpflag; //type: boolean
        ydk::YLeaf ciscoipmroutesptflag; //type: boolean
        ydk::YLeaf ciscoipmroutebps; //type: uint32
        ydk::YLeaf ciscoipmroutemetric; //type: int32
        ydk::YLeaf ciscoipmroutemetricpreference; //type: int32
        ydk::YLeaf ciscoipmrouteinlimit; //type: int32
        ydk::YLeaf ciscoipmroutelastused; //type: uint32
        ydk::YLeaf ciscoipmrouteinlimit2; //type: uint32
        ydk::YLeaf ciscoipmroutejoinflag; //type: boolean
        ydk::YLeaf ciscoipmroutemsdpflag; //type: boolean
        ydk::YLeaf ciscoipmrouteproxyjoinflag; //type: boolean
        ydk::YLeaf ciscoipmroutepkts; //type: uint64
        ydk::YLeaf ciscoipmroutedifferentinifpkts; //type: uint64
        ydk::YLeaf ciscoipmrouteoctets; //type: uint64
        ydk::YLeaf ciscoipmroutebps2; //type: uint64
        ydk::YLeaf ciscoipmroutemetric2; //type: uint32
        class Ipmrouterttype;

}; // IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry

class IPMROUTESTDMIB::Ipmroute::Ipmrouteenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::Ipmroutenexthopstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pruned;
        static const ydk::Enum::YLeaf forwarding;

};

class IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::Ipmrouterttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};


}
}

#endif /* _IPMROUTE_STD_MIB_ */

