#ifndef _RSVP_MIB_
#define _RSVP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace RSVP_MIB {

class RsvpMib : public Entity
{
    public:
        RsvpMib();
        ~RsvpMib();

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

        class Rsvpgenobjects; //type: RsvpMib::Rsvpgenobjects
        class Rsvpsessiontable; //type: RsvpMib::Rsvpsessiontable
        class Rsvpsendertable; //type: RsvpMib::Rsvpsendertable
        class Rsvpsenderoutinterfacetable; //type: RsvpMib::Rsvpsenderoutinterfacetable
        class Rsvpresvtable; //type: RsvpMib::Rsvpresvtable
        class Rsvpresvfwdtable; //type: RsvpMib::Rsvpresvfwdtable
        class Rsvpiftable; //type: RsvpMib::Rsvpiftable
        class Rsvpnbrtable; //type: RsvpMib::Rsvpnbrtable

        std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpgenobjects> rsvpgenobjects;
        std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpiftable> rsvpiftable;
        std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpnbrtable> rsvpnbrtable;
        std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpresvfwdtable> rsvpresvfwdtable;
        std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpresvtable> rsvpresvtable;
        std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpsenderoutinterfacetable> rsvpsenderoutinterfacetable;
        std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpsendertable> rsvpsendertable;
        std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpsessiontable> rsvpsessiontable;
        
}; // RsvpMib


class RsvpMib::Rsvpgenobjects : public Entity
{
    public:
        Rsvpgenobjects();
        ~Rsvpgenobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rsvpbadpackets; //type: uint32
        YLeaf rsvpsendernewindex; //type: int32
        YLeaf rsvpresvnewindex; //type: int32
        YLeaf rsvpresvfwdnewindex; //type: int32
        YLeaf rsvpsessionnewindex; //type: int32

}; // RsvpMib::Rsvpgenobjects


class RsvpMib::Rsvpsessiontable : public Entity
{
    public:
        Rsvpsessiontable();
        ~Rsvpsessiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rsvpsessionentry; //type: RsvpMib::Rsvpsessiontable::Rsvpsessionentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry> > rsvpsessionentry;
        
}; // RsvpMib::Rsvpsessiontable


class RsvpMib::Rsvpsessiontable::Rsvpsessionentry : public Entity
{
    public:
        Rsvpsessionentry();
        ~Rsvpsessionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rsvpsessionnumber; //type: int32
        YLeaf rsvpsessiontype; //type: int32
        YLeaf rsvpsessiondestaddr; //type: binary
        YLeaf rsvpsessiondestaddrlength; //type: int32
        YLeaf rsvpsessionprotocol; //type: int32
        YLeaf rsvpsessionport; //type: binary
        YLeaf rsvpsessionsenders; //type: uint32
        YLeaf rsvpsessionreceivers; //type: uint32
        YLeaf rsvpsessionrequests; //type: uint32

}; // RsvpMib::Rsvpsessiontable::Rsvpsessionentry


class RsvpMib::Rsvpsendertable : public Entity
{
    public:
        Rsvpsendertable();
        ~Rsvpsendertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rsvpsenderentry; //type: RsvpMib::Rsvpsendertable::Rsvpsenderentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpsendertable::Rsvpsenderentry> > rsvpsenderentry;
        
}; // RsvpMib::Rsvpsendertable


class RsvpMib::Rsvpsendertable::Rsvpsenderentry : public Entity
{
    public:
        Rsvpsenderentry();
        ~Rsvpsenderentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry::rsvpsessionnumber)
        YLeaf rsvpsessionnumber;
        YLeaf rsvpsendernumber; //type: int32
        YLeaf rsvpsendertype; //type: int32
        YLeaf rsvpsenderdestaddr; //type: binary
        YLeaf rsvpsenderaddr; //type: binary
        YLeaf rsvpsenderdestaddrlength; //type: int32
        YLeaf rsvpsenderaddrlength; //type: int32
        YLeaf rsvpsenderprotocol; //type: int32
        YLeaf rsvpsenderdestport; //type: binary
        YLeaf rsvpsenderport; //type: binary
        YLeaf rsvpsenderflowid; //type: int32
        YLeaf rsvpsenderhopaddr; //type: binary
        YLeaf rsvpsenderhoplih; //type: int32
        YLeaf rsvpsenderinterface; //type: int32
        YLeaf rsvpsendertspecrate; //type: int32
        YLeaf rsvpsendertspecpeakrate; //type: int32
        YLeaf rsvpsendertspecburst; //type: int32
        YLeaf rsvpsendertspecmintu; //type: int32
        YLeaf rsvpsendertspecmaxtu; //type: int32
        YLeaf rsvpsenderinterval; //type: int32
        YLeaf rsvpsenderrsvphop; //type: boolean
        YLeaf rsvpsenderlastchange; //type: uint32
        YLeaf rsvpsenderpolicy; //type: binary
        YLeaf rsvpsenderadspecbreak; //type: boolean
        YLeaf rsvpsenderadspechopcount; //type: int32
        YLeaf rsvpsenderadspecpathbw; //type: int32
        YLeaf rsvpsenderadspecminlatency; //type: int32
        YLeaf rsvpsenderadspecmtu; //type: int32
        YLeaf rsvpsenderadspecguaranteedsvc; //type: boolean
        YLeaf rsvpsenderadspecguaranteedbreak; //type: boolean
        YLeaf rsvpsenderadspecguaranteedctot; //type: int32
        YLeaf rsvpsenderadspecguaranteeddtot; //type: int32
        YLeaf rsvpsenderadspecguaranteedcsum; //type: int32
        YLeaf rsvpsenderadspecguaranteeddsum; //type: int32
        YLeaf rsvpsenderadspecguaranteedhopcount; //type: int32
        YLeaf rsvpsenderadspecguaranteedpathbw; //type: int32
        YLeaf rsvpsenderadspecguaranteedminlatency; //type: int32
        YLeaf rsvpsenderadspecguaranteedmtu; //type: int32
        YLeaf rsvpsenderadspecctrlloadsvc; //type: boolean
        YLeaf rsvpsenderadspecctrlloadbreak; //type: boolean
        YLeaf rsvpsenderadspecctrlloadhopcount; //type: int32
        YLeaf rsvpsenderadspecctrlloadpathbw; //type: int32
        YLeaf rsvpsenderadspecctrlloadminlatency; //type: int32
        YLeaf rsvpsenderadspecctrlloadmtu; //type: int32
        YLeaf rsvpsenderstatus; //type: RowstatusEnum
        YLeaf rsvpsenderttl; //type: int32

}; // RsvpMib::Rsvpsendertable::Rsvpsenderentry


class RsvpMib::Rsvpsenderoutinterfacetable : public Entity
{
    public:
        Rsvpsenderoutinterfacetable();
        ~Rsvpsenderoutinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rsvpsenderoutinterfaceentry; //type: RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry> > rsvpsenderoutinterfaceentry;
        
}; // RsvpMib::Rsvpsenderoutinterfacetable


class RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry : public Entity
{
    public:
        Rsvpsenderoutinterfaceentry();
        ~Rsvpsenderoutinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry::rsvpsessionnumber)
        YLeaf rsvpsessionnumber;
        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsendertable::Rsvpsenderentry::rsvpsendernumber)
        YLeaf rsvpsendernumber;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf rsvpsenderoutinterfacestatus; //type: RowstatusEnum

}; // RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry


class RsvpMib::Rsvpresvtable : public Entity
{
    public:
        Rsvpresvtable();
        ~Rsvpresvtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rsvpresventry; //type: RsvpMib::Rsvpresvtable::Rsvpresventry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpresvtable::Rsvpresventry> > rsvpresventry;
        
}; // RsvpMib::Rsvpresvtable


class RsvpMib::Rsvpresvtable::Rsvpresventry : public Entity
{
    public:
        Rsvpresventry();
        ~Rsvpresventry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry::rsvpsessionnumber)
        YLeaf rsvpsessionnumber;
        YLeaf rsvpresvnumber; //type: int32
        YLeaf rsvpresvtype; //type: int32
        YLeaf rsvpresvdestaddr; //type: binary
        YLeaf rsvpresvsenderaddr; //type: binary
        YLeaf rsvpresvdestaddrlength; //type: int32
        YLeaf rsvpresvsenderaddrlength; //type: int32
        YLeaf rsvpresvprotocol; //type: int32
        YLeaf rsvpresvdestport; //type: binary
        YLeaf rsvpresvport; //type: binary
        YLeaf rsvpresvhopaddr; //type: binary
        YLeaf rsvpresvhoplih; //type: int32
        YLeaf rsvpresvinterface; //type: int32
        YLeaf rsvpresvservice; //type: QosserviceEnum
        YLeaf rsvpresvtspecrate; //type: int32
        YLeaf rsvpresvtspecpeakrate; //type: int32
        YLeaf rsvpresvtspecburst; //type: int32
        YLeaf rsvpresvtspecmintu; //type: int32
        YLeaf rsvpresvtspecmaxtu; //type: int32
        YLeaf rsvpresvrspecrate; //type: int32
        YLeaf rsvpresvrspecslack; //type: int32
        YLeaf rsvpresvinterval; //type: int32
        YLeaf rsvpresvscope; //type: binary
        YLeaf rsvpresvshared; //type: boolean
        YLeaf rsvpresvexplicit; //type: boolean
        YLeaf rsvpresvrsvphop; //type: boolean
        YLeaf rsvpresvlastchange; //type: uint32
        YLeaf rsvpresvpolicy; //type: binary
        YLeaf rsvpresvstatus; //type: RowstatusEnum
        YLeaf rsvpresvttl; //type: int32
        YLeaf rsvpresvflowid; //type: int32

}; // RsvpMib::Rsvpresvtable::Rsvpresventry


class RsvpMib::Rsvpresvfwdtable : public Entity
{
    public:
        Rsvpresvfwdtable();
        ~Rsvpresvfwdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rsvpresvfwdentry; //type: RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry> > rsvpresvfwdentry;
        
}; // RsvpMib::Rsvpresvfwdtable


class RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry : public Entity
{
    public:
        Rsvpresvfwdentry();
        ~Rsvpresvfwdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry::rsvpsessionnumber)
        YLeaf rsvpsessionnumber;
        YLeaf rsvpresvfwdnumber; //type: int32
        YLeaf rsvpresvfwdtype; //type: int32
        YLeaf rsvpresvfwddestaddr; //type: binary
        YLeaf rsvpresvfwdsenderaddr; //type: binary
        YLeaf rsvpresvfwddestaddrlength; //type: int32
        YLeaf rsvpresvfwdsenderaddrlength; //type: int32
        YLeaf rsvpresvfwdprotocol; //type: int32
        YLeaf rsvpresvfwddestport; //type: binary
        YLeaf rsvpresvfwdport; //type: binary
        YLeaf rsvpresvfwdhopaddr; //type: binary
        YLeaf rsvpresvfwdhoplih; //type: int32
        YLeaf rsvpresvfwdinterface; //type: int32
        YLeaf rsvpresvfwdservice; //type: QosserviceEnum
        YLeaf rsvpresvfwdtspecrate; //type: int32
        YLeaf rsvpresvfwdtspecpeakrate; //type: int32
        YLeaf rsvpresvfwdtspecburst; //type: int32
        YLeaf rsvpresvfwdtspecmintu; //type: int32
        YLeaf rsvpresvfwdtspecmaxtu; //type: int32
        YLeaf rsvpresvfwdrspecrate; //type: int32
        YLeaf rsvpresvfwdrspecslack; //type: int32
        YLeaf rsvpresvfwdinterval; //type: int32
        YLeaf rsvpresvfwdscope; //type: binary
        YLeaf rsvpresvfwdshared; //type: boolean
        YLeaf rsvpresvfwdexplicit; //type: boolean
        YLeaf rsvpresvfwdrsvphop; //type: boolean
        YLeaf rsvpresvfwdlastchange; //type: uint32
        YLeaf rsvpresvfwdpolicy; //type: binary
        YLeaf rsvpresvfwdstatus; //type: RowstatusEnum
        YLeaf rsvpresvfwdttl; //type: int32
        YLeaf rsvpresvfwdflowid; //type: int32

}; // RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry


class RsvpMib::Rsvpiftable : public Entity
{
    public:
        Rsvpiftable();
        ~Rsvpiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rsvpifentry; //type: RsvpMib::Rsvpiftable::Rsvpifentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpiftable::Rsvpifentry> > rsvpifentry;
        
}; // RsvpMib::Rsvpiftable


class RsvpMib::Rsvpiftable::Rsvpifentry : public Entity
{
    public:
        Rsvpifentry();
        ~Rsvpifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf rsvpifudpnbrs; //type: uint32
        YLeaf rsvpifipnbrs; //type: uint32
        YLeaf rsvpifnbrs; //type: uint32
        YLeaf rsvpifrefreshblockademultiple; //type: int32
        YLeaf rsvpifrefreshmultiple; //type: int32
        YLeaf rsvpifttl; //type: int32
        YLeaf rsvpifrefreshinterval; //type: int32
        YLeaf rsvpifroutedelay; //type: int32
        YLeaf rsvpifenabled; //type: boolean
        YLeaf rsvpifudprequired; //type: boolean
        YLeaf rsvpifstatus; //type: RowstatusEnum

}; // RsvpMib::Rsvpiftable::Rsvpifentry


class RsvpMib::Rsvpnbrtable : public Entity
{
    public:
        Rsvpnbrtable();
        ~Rsvpnbrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rsvpnbrentry; //type: RsvpMib::Rsvpnbrtable::Rsvpnbrentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpnbrtable::Rsvpnbrentry> > rsvpnbrentry;
        
}; // RsvpMib::Rsvpnbrtable


class RsvpMib::Rsvpnbrtable::Rsvpnbrentry : public Entity
{
    public:
        Rsvpnbrentry();
        ~Rsvpnbrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf rsvpnbraddress; //type: binary
        YLeaf rsvpnbrprotocol; //type: RsvpencapsulationEnum
        YLeaf rsvpnbrstatus; //type: RowstatusEnum

}; // RsvpMib::Rsvpnbrtable::Rsvpnbrentry

class RsvpencapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;
        static const Enum::YLeaf udp;
        static const Enum::YLeaf both;

};


}
}

#endif /* _RSVP_MIB_ */

