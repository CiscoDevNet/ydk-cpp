#ifndef _MPLS_VPN_MIB_
#define _MPLS_VPN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace MPLS_VPN_MIB {

class MplsVpnMib : public Entity
{
    public:
        MplsVpnMib();
        ~MplsVpnMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Mplsvpnscalars; //type: MplsVpnMib::Mplsvpnscalars
        class Mplsvpninterfaceconftable; //type: MplsVpnMib::Mplsvpninterfaceconftable
        class Mplsvpnvrftable; //type: MplsVpnMib::Mplsvpnvrftable
        class Mplsvpnvrfroutetargettable; //type: MplsVpnMib::Mplsvpnvrfroutetargettable
        class Mplsvpnvrfbgpnbraddrtable; //type: MplsVpnMib::Mplsvpnvrfbgpnbraddrtable
        class Mplsvpnvrfbgpnbrprefixtable; //type: MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable
        class Mplsvpnvrfroutetable; //type: MplsVpnMib::Mplsvpnvrfroutetable

        std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpninterfaceconftable> mplsvpninterfaceconftable_;
        std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnscalars> mplsvpnscalars_;
        std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrfbgpnbraddrtable> mplsvpnvrfbgpnbraddrtable_;
        std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable> mplsvpnvrfbgpnbrprefixtable_;
        std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrfroutetable> mplsvpnvrfroutetable_;
        std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrfroutetargettable> mplsvpnvrfroutetargettable_;
        std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrftable> mplsvpnvrftable_;
        
}; // MplsVpnMib


class MplsVpnMib::Mplsvpnscalars : public Entity
{
    public:
        Mplsvpnscalars();
        ~Mplsvpnscalars();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsvpnconfiguredvrfs; //type: uint32
        YLeaf mplsvpnactivevrfs; //type: uint32
        YLeaf mplsvpnconnectedinterfaces; //type: uint32
        YLeaf mplsvpnnotificationenable; //type: boolean
        YLeaf mplsvpnvrfconfmaxpossibleroutes; //type: uint32

}; // MplsVpnMib::Mplsvpnscalars


class MplsVpnMib::Mplsvpninterfaceconftable : public Entity
{
    public:
        Mplsvpninterfaceconftable();
        ~Mplsvpninterfaceconftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsvpninterfaceconfentry; //type: MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry

        std::vector<std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry> > mplsvpninterfaceconfentry_;
        
}; // MplsVpnMib::Mplsvpninterfaceconftable


class MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry : public Entity
{
    public:
        Mplsvpninterfaceconfentry();
        ~Mplsvpninterfaceconfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        YLeaf mplsvpnvrfname;
        YLeaf mplsvpninterfaceconfindex; //type: int32
        YLeaf mplsvpninterfacelabeledgetype; //type: MplsvpninterfacelabeledgetypeEnum
        YLeaf mplsvpninterfacevpnclassification; //type: MplsvpninterfacevpnclassificationEnum
        YLeaf mplsvpninterfacevpnroutedistprotocol; //type: Mplsvpninterfacevpnroutedistprotocol
        YLeaf mplsvpninterfaceconfstoragetype; //type: StoragetypeEnum
        YLeaf mplsvpninterfaceconfrowstatus; //type: RowstatusEnum
        class MplsvpninterfacelabeledgetypeEnum;
        class MplsvpninterfacevpnclassificationEnum;

}; // MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry


class MplsVpnMib::Mplsvpnvrftable : public Entity
{
    public:
        Mplsvpnvrftable();
        ~Mplsvpnvrftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsvpnvrfentry; //type: MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry

        std::vector<std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry> > mplsvpnvrfentry_;
        
}; // MplsVpnMib::Mplsvpnvrftable


class MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry : public Entity
{
    public:
        Mplsvpnvrfentry();
        ~Mplsvpnvrfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsvpnvrfname; //type: binary
        YLeaf mplsvpnvrfdescription; //type: string
        YLeaf mplsvpnvrfroutedistinguisher; //type: binary
        YLeaf mplsvpnvrfcreationtime; //type: uint32
        YLeaf mplsvpnvrfoperstatus; //type: MplsvpnvrfoperstatusEnum
        YLeaf mplsvpnvrfactiveinterfaces; //type: uint32
        YLeaf mplsvpnvrfassociatedinterfaces; //type: uint32
        YLeaf mplsvpnvrfconfmidroutethreshold; //type: uint32
        YLeaf mplsvpnvrfconfhighroutethreshold; //type: uint32
        YLeaf mplsvpnvrfconfmaxroutes; //type: uint32
        YLeaf mplsvpnvrfconflastchanged; //type: uint32
        YLeaf mplsvpnvrfconfrowstatus; //type: RowstatusEnum
        YLeaf mplsvpnvrfconfstoragetype; //type: StoragetypeEnum
        YLeaf mplsvpnvrfsecillegallabelviolations; //type: uint32
        YLeaf mplsvpnvrfsecillegallabelrcvthresh; //type: uint32
        YLeaf mplsvpnvrfperfroutesadded; //type: uint32
        YLeaf mplsvpnvrfperfroutesdeleted; //type: uint32
        YLeaf mplsvpnvrfperfcurrnumroutes; //type: uint32
        class MplsvpnvrfoperstatusEnum;

}; // MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry


class MplsVpnMib::Mplsvpnvrfroutetargettable : public Entity
{
    public:
        Mplsvpnvrfroutetargettable();
        ~Mplsvpnvrfroutetargettable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsvpnvrfroutetargetentry; //type: MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry

        std::vector<std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry> > mplsvpnvrfroutetargetentry_;
        
}; // MplsVpnMib::Mplsvpnvrfroutetargettable


class MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry : public Entity
{
    public:
        Mplsvpnvrfroutetargetentry();
        ~Mplsvpnvrfroutetargetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        YLeaf mplsvpnvrfname;
        YLeaf mplsvpnvrfroutetargetindex; //type: uint32
        YLeaf mplsvpnvrfroutetargettype; //type: MplsvpnvrfroutetargettypeEnum
        YLeaf mplsvpnvrfroutetarget; //type: binary
        YLeaf mplsvpnvrfroutetargetdescr; //type: string
        YLeaf mplsvpnvrfroutetargetrowstatus; //type: RowstatusEnum
        class MplsvpnvrfroutetargettypeEnum;

}; // MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry


class MplsVpnMib::Mplsvpnvrfbgpnbraddrtable : public Entity
{
    public:
        Mplsvpnvrfbgpnbraddrtable();
        ~Mplsvpnvrfbgpnbraddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsvpnvrfbgpnbraddrentry; //type: MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry

        std::vector<std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry> > mplsvpnvrfbgpnbraddrentry_;
        
}; // MplsVpnMib::Mplsvpnvrfbgpnbraddrtable


class MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry : public Entity
{
    public:
        Mplsvpnvrfbgpnbraddrentry();
        ~Mplsvpnvrfbgpnbraddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        YLeaf mplsvpnvrfname;
        //type: int32 (refers to MPLS_VPN_MIB::MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::mplsvpninterfaceconfindex)
        YLeaf mplsvpninterfaceconfindex;
        YLeaf mplsvpnvrfbgpnbrindex; //type: uint32
        YLeaf mplsvpnvrfbgpnbrrole; //type: MplsvpnvrfbgpnbrroleEnum
        YLeaf mplsvpnvrfbgpnbrtype; //type: InetaddresstypeEnum
        YLeaf mplsvpnvrfbgpnbraddr; //type: binary
        YLeaf mplsvpnvrfbgpnbrrowstatus; //type: RowstatusEnum
        YLeaf mplsvpnvrfbgpnbrstoragetype; //type: StoragetypeEnum
        class MplsvpnvrfbgpnbrroleEnum;

}; // MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry


class MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable : public Entity
{
    public:
        Mplsvpnvrfbgpnbrprefixtable();
        ~Mplsvpnvrfbgpnbrprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsvpnvrfbgpnbrprefixentry; //type: MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry

        std::vector<std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry> > mplsvpnvrfbgpnbrprefixentry_;
        
}; // MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable


class MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry : public Entity
{
    public:
        Mplsvpnvrfbgpnbrprefixentry();
        ~Mplsvpnvrfbgpnbrprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        YLeaf mplsvpnvrfname;
        YLeaf mplsvpnvrfbgppathattripaddrprefix; //type: binary
        YLeaf mplsvpnvrfbgppathattripaddrprefixlen; //type: int32
        YLeaf mplsvpnvrfbgppathattrpeer; //type: binary
        YLeaf mplsvpnvrfbgppathattrorigin; //type: MplsvpnvrfbgppathattroriginEnum
        YLeaf mplsvpnvrfbgppathattraspathsegment; //type: binary
        YLeaf mplsvpnvrfbgppathattrnexthop; //type: binary
        YLeaf mplsvpnvrfbgppathattrmultiexitdisc; //type: int32
        YLeaf mplsvpnvrfbgppathattrlocalpref; //type: int32
        YLeaf mplsvpnvrfbgppathattratomicaggregate; //type: MplsvpnvrfbgppathattratomicaggregateEnum
        YLeaf mplsvpnvrfbgppathattraggregatoras; //type: int32
        YLeaf mplsvpnvrfbgppathattraggregatoraddr; //type: binary
        YLeaf mplsvpnvrfbgppathattrcalclocalpref; //type: int32
        YLeaf mplsvpnvrfbgppathattrbest; //type: MplsvpnvrfbgppathattrbestEnum
        YLeaf mplsvpnvrfbgppathattrunknown; //type: binary
        class MplsvpnvrfbgppathattroriginEnum;
        class MplsvpnvrfbgppathattratomicaggregateEnum;
        class MplsvpnvrfbgppathattrbestEnum;

}; // MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry


class MplsVpnMib::Mplsvpnvrfroutetable : public Entity
{
    public:
        Mplsvpnvrfroutetable();
        ~Mplsvpnvrfroutetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsvpnvrfrouteentry; //type: MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry

        std::vector<std::shared_ptr<MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry> > mplsvpnvrfrouteentry_;
        
}; // MplsVpnMib::Mplsvpnvrfroutetable


class MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry : public Entity
{
    public:
        Mplsvpnvrfrouteentry();
        ~Mplsvpnvrfrouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to MPLS_VPN_MIB::MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        YLeaf mplsvpnvrfname;
        YLeaf mplsvpnvrfroutedest; //type: binary
        YLeaf mplsvpnvrfroutemask; //type: binary
        YLeaf mplsvpnvrfroutetos; //type: uint32
        YLeaf mplsvpnvrfroutenexthop; //type: binary
        YLeaf mplsvpnvrfroutedestaddrtype; //type: InetaddresstypeEnum
        YLeaf mplsvpnvrfroutemaskaddrtype; //type: InetaddresstypeEnum
        YLeaf mplsvpnvrfroutenexthopaddrtype; //type: InetaddresstypeEnum
        YLeaf mplsvpnvrfrouteifindex; //type: int32
        YLeaf mplsvpnvrfroutetype; //type: MplsvpnvrfroutetypeEnum
        YLeaf mplsvpnvrfrouteproto; //type: MplsvpnvrfrouteprotoEnum
        YLeaf mplsvpnvrfrouteage; //type: uint32
        YLeaf mplsvpnvrfrouteinfo; //type: string
        YLeaf mplsvpnvrfroutenexthopas; //type: uint32
        YLeaf mplsvpnvrfroutemetric1; //type: int32
        YLeaf mplsvpnvrfroutemetric2; //type: int32
        YLeaf mplsvpnvrfroutemetric3; //type: int32
        YLeaf mplsvpnvrfroutemetric4; //type: int32
        YLeaf mplsvpnvrfroutemetric5; //type: int32
        YLeaf mplsvpnvrfrouterowstatus; //type: RowstatusEnum
        YLeaf mplsvpnvrfroutestoragetype; //type: StoragetypeEnum
        class MplsvpnvrfroutetypeEnum;
        class MplsvpnvrfrouteprotoEnum;

}; // MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry

class MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::MplsvpninterfacelabeledgetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf providerEdge;
        static const Enum::YLeaf customerEdge;

};

class MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::MplsvpninterfacevpnclassificationEnum : public Enum
{
    public:
        static const Enum::YLeaf carrierOfCarrier;
        static const Enum::YLeaf enterprise;
        static const Enum::YLeaf interProvider;

};

class MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::MplsvpnvrfoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::MplsvpnvrfroutetargettypeEnum : public Enum
{
    public:
        static const Enum::YLeaf import;
        static const Enum::YLeaf export_;
        static const Enum::YLeaf both;

};

class MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::MplsvpnvrfbgpnbrroleEnum : public Enum
{
    public:
        static const Enum::YLeaf ce;
        static const Enum::YLeaf pe;

};

class MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattroriginEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf egp;
        static const Enum::YLeaf incomplete;

};

class MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattratomicaggregateEnum : public Enum
{
    public:
        static const Enum::YLeaf lessSpecificRrouteNotSelected;
        static const Enum::YLeaf lessSpecificRouteSelected;

};

class MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattrbestEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfroutetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf reject;
        static const Enum::YLeaf local;
        static const Enum::YLeaf remote;

};

class MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf local;
        static const Enum::YLeaf netmgmt;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf egp;
        static const Enum::YLeaf ggp;
        static const Enum::YLeaf hello;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf isIs;
        static const Enum::YLeaf esIs;
        static const Enum::YLeaf ciscoIgrp;
        static const Enum::YLeaf bbnSpfIgp;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf idpr;
        static const Enum::YLeaf ciscoEigrp;

};


}
}

#endif /* _MPLS_VPN_MIB_ */

