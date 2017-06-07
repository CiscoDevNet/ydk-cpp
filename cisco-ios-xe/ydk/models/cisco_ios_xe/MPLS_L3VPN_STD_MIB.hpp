#ifndef _MPLS_L3VPN_STD_MIB_
#define _MPLS_L3VPN_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace MPLS_L3VPN_STD_MIB {

class MplsL3VpnStdMib : public Entity
{
    public:
        MplsL3VpnStdMib();
        ~MplsL3VpnStdMib();

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

        class Mplsl3Vpnscalars; //type: MplsL3VpnStdMib::Mplsl3Vpnscalars
        class Mplsl3Vpnifconftable; //type: MplsL3VpnStdMib::Mplsl3Vpnifconftable
        class Mplsl3Vpnvrftable; //type: MplsL3VpnStdMib::Mplsl3Vpnvrftable
        class Mplsl3Vpnvrfrttable; //type: MplsL3VpnStdMib::Mplsl3Vpnvrfrttable
        class Mplsl3Vpnvrfrtetable; //type: MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable

        std::shared_ptr<MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnifconftable> mplsl3vpnifconftable;
        std::shared_ptr<MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnscalars> mplsl3vpnscalars;
        std::shared_ptr<MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable> mplsl3vpnvrfrtetable;
        std::shared_ptr<MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnvrfrttable> mplsl3vpnvrfrttable;
        std::shared_ptr<MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnvrftable> mplsl3vpnvrftable;
        
}; // MplsL3VpnStdMib


class MplsL3VpnStdMib::Mplsl3Vpnscalars : public Entity
{
    public:
        Mplsl3Vpnscalars();
        ~Mplsl3Vpnscalars();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsl3vpnconfiguredvrfs; //type: uint32
        YLeaf mplsl3vpnactivevrfs; //type: uint32
        YLeaf mplsl3vpnconnectedinterfaces; //type: uint32
        YLeaf mplsl3vpnnotificationenable; //type: boolean
        YLeaf mplsl3vpnvrfconfmaxpossrts; //type: uint32
        YLeaf mplsl3vpnvrfconfrtemxthrshtime; //type: uint32
        YLeaf mplsl3vpnilllblrcvthrsh; //type: uint32

}; // MplsL3VpnStdMib::Mplsl3Vpnscalars


class MplsL3VpnStdMib::Mplsl3Vpnifconftable : public Entity
{
    public:
        Mplsl3Vpnifconftable();
        ~Mplsl3Vpnifconftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsl3Vpnifconfentry; //type: MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry

        std::vector<std::shared_ptr<MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry> > mplsl3vpnifconfentry;
        
}; // MplsL3VpnStdMib::Mplsl3Vpnifconftable


class MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry : public Entity
{
    public:
        Mplsl3Vpnifconfentry();
        ~Mplsl3Vpnifconfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::mplsl3vpnvrfname)
        YLeaf mplsl3vpnvrfname;
        YLeaf mplsl3vpnifconfindex; //type: int32
        YLeaf mplsl3vpnifvpnclassification; //type: Mplsl3VpnifvpnclassificationEnum
        YLeaf mplsl3vpnifvpnroutedistprotocol; //type: Mplsl3Vpnifvpnroutedistprotocol
        YLeaf mplsl3vpnifconfstoragetype; //type: StoragetypeEnum
        YLeaf mplsl3vpnifconfrowstatus; //type: RowstatusEnum
        class Mplsl3VpnifvpnclassificationEnum;

}; // MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry


class MplsL3VpnStdMib::Mplsl3Vpnvrftable : public Entity
{
    public:
        Mplsl3Vpnvrftable();
        ~Mplsl3Vpnvrftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsl3Vpnvrfentry; //type: MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry

        std::vector<std::shared_ptr<MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry> > mplsl3vpnvrfentry;
        
}; // MplsL3VpnStdMib::Mplsl3Vpnvrftable


class MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry : public Entity
{
    public:
        Mplsl3Vpnvrfentry();
        ~Mplsl3Vpnvrfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsl3vpnvrfname; //type: binary
        YLeaf mplsl3vpnvrfvpnid; //type: binary
        YLeaf mplsl3vpnvrfdescription; //type: string
        YLeaf mplsl3vpnvrfrd; //type: binary
        YLeaf mplsl3vpnvrfcreationtime; //type: uint32
        YLeaf mplsl3vpnvrfoperstatus; //type: Mplsl3VpnvrfoperstatusEnum
        YLeaf mplsl3vpnvrfactiveinterfaces; //type: uint32
        YLeaf mplsl3vpnvrfassociatedinterfaces; //type: uint32
        YLeaf mplsl3vpnvrfconfmidrtethresh; //type: uint32
        YLeaf mplsl3vpnvrfconfhighrtethresh; //type: uint32
        YLeaf mplsl3vpnvrfconfmaxroutes; //type: uint32
        YLeaf mplsl3vpnvrfconflastchanged; //type: uint32
        YLeaf mplsl3vpnvrfconfrowstatus; //type: RowstatusEnum
        YLeaf mplsl3vpnvrfconfadminstatus; //type: Mplsl3VpnvrfconfadminstatusEnum
        YLeaf mplsl3vpnvrfconfstoragetype; //type: StoragetypeEnum
        YLeaf mplsl3vpnvrfsecillegallblvltns; //type: uint32
        YLeaf mplsl3vpnvrfsecdiscontinuitytime; //type: uint32
        YLeaf mplsl3vpnvrfperfroutesadded; //type: uint32
        YLeaf mplsl3vpnvrfperfroutesdeleted; //type: uint32
        YLeaf mplsl3vpnvrfperfcurrnumroutes; //type: uint32
        YLeaf mplsl3vpnvrfperfroutesdropped; //type: uint32
        YLeaf mplsl3vpnvrfperfdisctime; //type: uint32
        class Mplsl3VpnvrfoperstatusEnum;
        class Mplsl3VpnvrfconfadminstatusEnum;

}; // MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry


class MplsL3VpnStdMib::Mplsl3Vpnvrfrttable : public Entity
{
    public:
        Mplsl3Vpnvrfrttable();
        ~Mplsl3Vpnvrfrttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsl3Vpnvrfrtentry; //type: MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry

        std::vector<std::shared_ptr<MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry> > mplsl3vpnvrfrtentry;
        
}; // MplsL3VpnStdMib::Mplsl3Vpnvrfrttable


class MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry : public Entity
{
    public:
        Mplsl3Vpnvrfrtentry();
        ~Mplsl3Vpnvrfrtentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::mplsl3vpnvrfname)
        YLeaf mplsl3vpnvrfname;
        YLeaf mplsl3vpnvrfrtindex; //type: uint32
        YLeaf mplsl3vpnvrfrttype; //type: Mplsl3VpnrttypeEnum
        YLeaf mplsl3vpnvrfrt; //type: binary
        YLeaf mplsl3vpnvrfrtdescr; //type: string
        YLeaf mplsl3vpnvrfrtrowstatus; //type: RowstatusEnum
        YLeaf mplsl3vpnvrfrtstoragetype; //type: StoragetypeEnum

}; // MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry


class MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable : public Entity
{
    public:
        Mplsl3Vpnvrfrtetable();
        ~Mplsl3Vpnvrfrtetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsl3Vpnvrfrteentry; //type: MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry

        std::vector<std::shared_ptr<MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry> > mplsl3vpnvrfrteentry;
        
}; // MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable


class MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry : public Entity
{
    public:
        Mplsl3Vpnvrfrteentry();
        ~Mplsl3Vpnvrfrteentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to MPLS_L3VPN_STD_MIB::MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::mplsl3vpnvrfname)
        YLeaf mplsl3vpnvrfname;
        YLeaf mplsl3vpnvrfrteinetcidrdesttype; //type: InetaddresstypeEnum
        YLeaf mplsl3vpnvrfrteinetcidrdest; //type: binary
        YLeaf mplsl3vpnvrfrteinetcidrpfxlen; //type: uint32
        YLeaf mplsl3vpnvrfrteinetcidrpolicy; //type: string
        YLeaf mplsl3vpnvrfrteinetcidrnhoptype; //type: InetaddresstypeEnum
        YLeaf mplsl3vpnvrfrteinetcidrnexthop; //type: binary
        YLeaf mplsl3vpnvrfrteinetcidrifindex; //type: int32
        YLeaf mplsl3vpnvrfrteinetcidrtype; //type: Mplsl3VpnvrfrteinetcidrtypeEnum
        YLeaf mplsl3vpnvrfrteinetcidrproto; //type: IanaiprouteprotocolEnum
        YLeaf mplsl3vpnvrfrteinetcidrage; //type: uint32
        YLeaf mplsl3vpnvrfrteinetcidrnexthopas; //type: uint32
        YLeaf mplsl3vpnvrfrteinetcidrmetric1; //type: int32
        YLeaf mplsl3vpnvrfrteinetcidrmetric2; //type: int32
        YLeaf mplsl3vpnvrfrteinetcidrmetric3; //type: int32
        YLeaf mplsl3vpnvrfrteinetcidrmetric4; //type: int32
        YLeaf mplsl3vpnvrfrteinetcidrmetric5; //type: int32
        YLeaf mplsl3vpnvrfrtexcpointer; //type: binary
        YLeaf mplsl3vpnvrfrteinetcidrstatus; //type: RowstatusEnum
        class Mplsl3VpnvrfrteinetcidrtypeEnum;

}; // MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry

class Mplsl3VpnrttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf import;
        static const Enum::YLeaf export_;
        static const Enum::YLeaf both;

};

class MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3VpnifvpnclassificationEnum : public Enum
{
    public:
        static const Enum::YLeaf carrierOfCarrier;
        static const Enum::YLeaf enterprise;
        static const Enum::YLeaf interProvider;

};

class MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3VpnvrfoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3VpnvrfconfadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;

};

class MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3VpnvrfrteinetcidrtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf reject;
        static const Enum::YLeaf local;
        static const Enum::YLeaf remote;
        static const Enum::YLeaf blackhole;

};


}
}

#endif /* _MPLS_L3VPN_STD_MIB_ */

