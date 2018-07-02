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

        class IpMRoute; //type: IPMROUTESTDMIB::IpMRoute
        class IpMRouteTable; //type: IPMROUTESTDMIB::IpMRouteTable
        class IpMRouteNextHopTable; //type: IPMROUTESTDMIB::IpMRouteNextHopTable
        class IpMRouteInterfaceTable; //type: IPMROUTESTDMIB::IpMRouteInterfaceTable
        class IpMRouteBoundaryTable; //type: IPMROUTESTDMIB::IpMRouteBoundaryTable
        class IpMRouteScopeNameTable; //type: IPMROUTESTDMIB::IpMRouteScopeNameTable

        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRoute> ipmroute;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteTable> ipmroutetable;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteNextHopTable> ipmroutenexthoptable;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteInterfaceTable> ipmrouteinterfacetable;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteBoundaryTable> ipmrouteboundarytable;
        std::shared_ptr<cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteScopeNameTable> ipmroutescopenametable;
        
}; // IPMROUTESTDMIB


class IPMROUTESTDMIB::IpMRoute : public ydk::Entity
{
    public:
        IpMRoute();
        ~IpMRoute();

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

        ydk::YLeaf ipmrouteenable; //type: IpMRouteEnable
        ydk::YLeaf ipmrouteentrycount; //type: uint32
        class IpMRouteEnable;

}; // IPMROUTESTDMIB::IpMRoute


class IPMROUTESTDMIB::IpMRouteTable : public ydk::Entity
{
    public:
        IpMRouteTable();
        ~IpMRouteTable();

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

        class IpMRouteEntry; //type: IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry

        ydk::YList ipmrouteentry;
        
}; // IPMROUTESTDMIB::IpMRouteTable


class IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry : public ydk::Entity
{
    public:
        IpMRouteEntry();
        ~IpMRouteEntry();

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
        ydk::YLeaf ipmrouterttype; //type: IpMRouteRtType
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
        class IpMRouteRtType;

}; // IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry


class IPMROUTESTDMIB::IpMRouteNextHopTable : public ydk::Entity
{
    public:
        IpMRouteNextHopTable();
        ~IpMRouteNextHopTable();

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

        class IpMRouteNextHopEntry; //type: IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry

        ydk::YList ipmroutenexthopentry;
        
}; // IPMROUTESTDMIB::IpMRouteNextHopTable


class IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry : public ydk::Entity
{
    public:
        IpMRouteNextHopEntry();
        ~IpMRouteNextHopEntry();

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
        ydk::YLeaf ipmroutenexthopstate; //type: IpMRouteNextHopState
        ydk::YLeaf ipmroutenexthopuptime; //type: uint32
        ydk::YLeaf ipmroutenexthopexpirytime; //type: uint32
        ydk::YLeaf ipmroutenexthopclosestmemberhops; //type: int32
        ydk::YLeaf ipmroutenexthopprotocol; //type: IANAipMRouteProtocol
        ydk::YLeaf ipmroutenexthoppkts; //type: uint32
        ydk::YLeaf ciscoipmroutenexthopoutlimit; //type: uint32
        ydk::YLeaf ciscoipmroutenexthopmachdr; //type: binary
        ydk::YLeaf ciscoipmroutenexthoppkts; //type: uint64
        class IpMRouteNextHopState;

}; // IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry


class IPMROUTESTDMIB::IpMRouteInterfaceTable : public ydk::Entity
{
    public:
        IpMRouteInterfaceTable();
        ~IpMRouteInterfaceTable();

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

        class IpMRouteInterfaceEntry; //type: IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry

        ydk::YList ipmrouteinterfaceentry;
        
}; // IPMROUTESTDMIB::IpMRouteInterfaceTable


class IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry : public ydk::Entity
{
    public:
        IpMRouteInterfaceEntry();
        ~IpMRouteInterfaceEntry();

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

}; // IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry


class IPMROUTESTDMIB::IpMRouteBoundaryTable : public ydk::Entity
{
    public:
        IpMRouteBoundaryTable();
        ~IpMRouteBoundaryTable();

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

        class IpMRouteBoundaryEntry; //type: IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry

        ydk::YList ipmrouteboundaryentry;
        
}; // IPMROUTESTDMIB::IpMRouteBoundaryTable


class IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry : public ydk::Entity
{
    public:
        IpMRouteBoundaryEntry();
        ~IpMRouteBoundaryEntry();

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

}; // IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry


class IPMROUTESTDMIB::IpMRouteScopeNameTable : public ydk::Entity
{
    public:
        IpMRouteScopeNameTable();
        ~IpMRouteScopeNameTable();

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

        class IpMRouteScopeNameEntry; //type: IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry

        ydk::YList ipmroutescopenameentry;
        
}; // IPMROUTESTDMIB::IpMRouteScopeNameTable


class IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry : public ydk::Entity
{
    public:
        IpMRouteScopeNameEntry();
        ~IpMRouteScopeNameEntry();

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

}; // IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry

class IPMROUTESTDMIB::IpMRoute::IpMRouteEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::IpMRouteRtType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};

class IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::IpMRouteNextHopState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pruned;
        static const ydk::Enum::YLeaf forwarding;

};


}
}

#endif /* _IPMROUTE_STD_MIB_ */

