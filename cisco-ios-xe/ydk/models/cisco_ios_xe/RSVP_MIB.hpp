#ifndef _RSVP_MIB_
#define _RSVP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace RSVP_MIB {

class RsvpMib : public ydk::Entity
{
    public:
        RsvpMib();
        ~RsvpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class RsvpMib::Rsvpgenobjects : public ydk::Entity
{
    public:
        Rsvpgenobjects();
        ~Rsvpgenobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rsvpbadpackets; //type: uint32
        ydk::YLeaf rsvpsendernewindex; //type: int32
        ydk::YLeaf rsvpresvnewindex; //type: int32
        ydk::YLeaf rsvpresvfwdnewindex; //type: int32
        ydk::YLeaf rsvpsessionnewindex; //type: int32

}; // RsvpMib::Rsvpgenobjects


class RsvpMib::Rsvpsessiontable : public ydk::Entity
{
    public:
        Rsvpsessiontable();
        ~Rsvpsessiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rsvpsessionentry; //type: RsvpMib::Rsvpsessiontable::Rsvpsessionentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry> > rsvpsessionentry;
        
}; // RsvpMib::Rsvpsessiontable


class RsvpMib::Rsvpsessiontable::Rsvpsessionentry : public ydk::Entity
{
    public:
        Rsvpsessionentry();
        ~Rsvpsessionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rsvpsessionnumber; //type: int32
        ydk::YLeaf rsvpsessiontype; //type: int32
        ydk::YLeaf rsvpsessiondestaddr; //type: binary
        ydk::YLeaf rsvpsessiondestaddrlength; //type: int32
        ydk::YLeaf rsvpsessionprotocol; //type: int32
        ydk::YLeaf rsvpsessionport; //type: binary
        ydk::YLeaf rsvpsessionsenders; //type: uint32
        ydk::YLeaf rsvpsessionreceivers; //type: uint32
        ydk::YLeaf rsvpsessionrequests; //type: uint32

}; // RsvpMib::Rsvpsessiontable::Rsvpsessionentry


class RsvpMib::Rsvpsendertable : public ydk::Entity
{
    public:
        Rsvpsendertable();
        ~Rsvpsendertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rsvpsenderentry; //type: RsvpMib::Rsvpsendertable::Rsvpsenderentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpsendertable::Rsvpsenderentry> > rsvpsenderentry;
        
}; // RsvpMib::Rsvpsendertable


class RsvpMib::Rsvpsendertable::Rsvpsenderentry : public ydk::Entity
{
    public:
        Rsvpsenderentry();
        ~Rsvpsenderentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry::rsvpsessionnumber)
        ydk::YLeaf rsvpsessionnumber;
        ydk::YLeaf rsvpsendernumber; //type: int32
        ydk::YLeaf rsvpsendertype; //type: int32
        ydk::YLeaf rsvpsenderdestaddr; //type: binary
        ydk::YLeaf rsvpsenderaddr; //type: binary
        ydk::YLeaf rsvpsenderdestaddrlength; //type: int32
        ydk::YLeaf rsvpsenderaddrlength; //type: int32
        ydk::YLeaf rsvpsenderprotocol; //type: int32
        ydk::YLeaf rsvpsenderdestport; //type: binary
        ydk::YLeaf rsvpsenderport; //type: binary
        ydk::YLeaf rsvpsenderflowid; //type: int32
        ydk::YLeaf rsvpsenderhopaddr; //type: binary
        ydk::YLeaf rsvpsenderhoplih; //type: int32
        ydk::YLeaf rsvpsenderinterface; //type: int32
        ydk::YLeaf rsvpsendertspecrate; //type: int32
        ydk::YLeaf rsvpsendertspecpeakrate; //type: int32
        ydk::YLeaf rsvpsendertspecburst; //type: int32
        ydk::YLeaf rsvpsendertspecmintu; //type: int32
        ydk::YLeaf rsvpsendertspecmaxtu; //type: int32
        ydk::YLeaf rsvpsenderinterval; //type: int32
        ydk::YLeaf rsvpsenderrsvphop; //type: boolean
        ydk::YLeaf rsvpsenderlastchange; //type: uint32
        ydk::YLeaf rsvpsenderpolicy; //type: binary
        ydk::YLeaf rsvpsenderadspecbreak; //type: boolean
        ydk::YLeaf rsvpsenderadspechopcount; //type: int32
        ydk::YLeaf rsvpsenderadspecpathbw; //type: int32
        ydk::YLeaf rsvpsenderadspecminlatency; //type: int32
        ydk::YLeaf rsvpsenderadspecmtu; //type: int32
        ydk::YLeaf rsvpsenderadspecguaranteedsvc; //type: boolean
        ydk::YLeaf rsvpsenderadspecguaranteedbreak; //type: boolean
        ydk::YLeaf rsvpsenderadspecguaranteedctot; //type: int32
        ydk::YLeaf rsvpsenderadspecguaranteeddtot; //type: int32
        ydk::YLeaf rsvpsenderadspecguaranteedcsum; //type: int32
        ydk::YLeaf rsvpsenderadspecguaranteeddsum; //type: int32
        ydk::YLeaf rsvpsenderadspecguaranteedhopcount; //type: int32
        ydk::YLeaf rsvpsenderadspecguaranteedpathbw; //type: int32
        ydk::YLeaf rsvpsenderadspecguaranteedminlatency; //type: int32
        ydk::YLeaf rsvpsenderadspecguaranteedmtu; //type: int32
        ydk::YLeaf rsvpsenderadspecctrlloadsvc; //type: boolean
        ydk::YLeaf rsvpsenderadspecctrlloadbreak; //type: boolean
        ydk::YLeaf rsvpsenderadspecctrlloadhopcount; //type: int32
        ydk::YLeaf rsvpsenderadspecctrlloadpathbw; //type: int32
        ydk::YLeaf rsvpsenderadspecctrlloadminlatency; //type: int32
        ydk::YLeaf rsvpsenderadspecctrlloadmtu; //type: int32
        ydk::YLeaf rsvpsenderstatus; //type: Rowstatus
        ydk::YLeaf rsvpsenderttl; //type: int32

}; // RsvpMib::Rsvpsendertable::Rsvpsenderentry


class RsvpMib::Rsvpsenderoutinterfacetable : public ydk::Entity
{
    public:
        Rsvpsenderoutinterfacetable();
        ~Rsvpsenderoutinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rsvpsenderoutinterfaceentry; //type: RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry> > rsvpsenderoutinterfaceentry;
        
}; // RsvpMib::Rsvpsenderoutinterfacetable


class RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry : public ydk::Entity
{
    public:
        Rsvpsenderoutinterfaceentry();
        ~Rsvpsenderoutinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry::rsvpsessionnumber)
        ydk::YLeaf rsvpsessionnumber;
        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsendertable::Rsvpsenderentry::rsvpsendernumber)
        ydk::YLeaf rsvpsendernumber;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf rsvpsenderoutinterfacestatus; //type: Rowstatus

}; // RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry


class RsvpMib::Rsvpresvtable : public ydk::Entity
{
    public:
        Rsvpresvtable();
        ~Rsvpresvtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rsvpresventry; //type: RsvpMib::Rsvpresvtable::Rsvpresventry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpresvtable::Rsvpresventry> > rsvpresventry;
        
}; // RsvpMib::Rsvpresvtable


class RsvpMib::Rsvpresvtable::Rsvpresventry : public ydk::Entity
{
    public:
        Rsvpresventry();
        ~Rsvpresventry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry::rsvpsessionnumber)
        ydk::YLeaf rsvpsessionnumber;
        ydk::YLeaf rsvpresvnumber; //type: int32
        ydk::YLeaf rsvpresvtype; //type: int32
        ydk::YLeaf rsvpresvdestaddr; //type: binary
        ydk::YLeaf rsvpresvsenderaddr; //type: binary
        ydk::YLeaf rsvpresvdestaddrlength; //type: int32
        ydk::YLeaf rsvpresvsenderaddrlength; //type: int32
        ydk::YLeaf rsvpresvprotocol; //type: int32
        ydk::YLeaf rsvpresvdestport; //type: binary
        ydk::YLeaf rsvpresvport; //type: binary
        ydk::YLeaf rsvpresvhopaddr; //type: binary
        ydk::YLeaf rsvpresvhoplih; //type: int32
        ydk::YLeaf rsvpresvinterface; //type: int32
        ydk::YLeaf rsvpresvservice; //type: Qosservice
        ydk::YLeaf rsvpresvtspecrate; //type: int32
        ydk::YLeaf rsvpresvtspecpeakrate; //type: int32
        ydk::YLeaf rsvpresvtspecburst; //type: int32
        ydk::YLeaf rsvpresvtspecmintu; //type: int32
        ydk::YLeaf rsvpresvtspecmaxtu; //type: int32
        ydk::YLeaf rsvpresvrspecrate; //type: int32
        ydk::YLeaf rsvpresvrspecslack; //type: int32
        ydk::YLeaf rsvpresvinterval; //type: int32
        ydk::YLeaf rsvpresvscope; //type: binary
        ydk::YLeaf rsvpresvshared; //type: boolean
        ydk::YLeaf rsvpresvexplicit; //type: boolean
        ydk::YLeaf rsvpresvrsvphop; //type: boolean
        ydk::YLeaf rsvpresvlastchange; //type: uint32
        ydk::YLeaf rsvpresvpolicy; //type: binary
        ydk::YLeaf rsvpresvstatus; //type: Rowstatus
        ydk::YLeaf rsvpresvttl; //type: int32
        ydk::YLeaf rsvpresvflowid; //type: int32

}; // RsvpMib::Rsvpresvtable::Rsvpresventry


class RsvpMib::Rsvpresvfwdtable : public ydk::Entity
{
    public:
        Rsvpresvfwdtable();
        ~Rsvpresvfwdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rsvpresvfwdentry; //type: RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry> > rsvpresvfwdentry;
        
}; // RsvpMib::Rsvpresvfwdtable


class RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry : public ydk::Entity
{
    public:
        Rsvpresvfwdentry();
        ~Rsvpresvfwdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to RSVP_MIB::RsvpMib::Rsvpsessiontable::Rsvpsessionentry::rsvpsessionnumber)
        ydk::YLeaf rsvpsessionnumber;
        ydk::YLeaf rsvpresvfwdnumber; //type: int32
        ydk::YLeaf rsvpresvfwdtype; //type: int32
        ydk::YLeaf rsvpresvfwddestaddr; //type: binary
        ydk::YLeaf rsvpresvfwdsenderaddr; //type: binary
        ydk::YLeaf rsvpresvfwddestaddrlength; //type: int32
        ydk::YLeaf rsvpresvfwdsenderaddrlength; //type: int32
        ydk::YLeaf rsvpresvfwdprotocol; //type: int32
        ydk::YLeaf rsvpresvfwddestport; //type: binary
        ydk::YLeaf rsvpresvfwdport; //type: binary
        ydk::YLeaf rsvpresvfwdhopaddr; //type: binary
        ydk::YLeaf rsvpresvfwdhoplih; //type: int32
        ydk::YLeaf rsvpresvfwdinterface; //type: int32
        ydk::YLeaf rsvpresvfwdservice; //type: Qosservice
        ydk::YLeaf rsvpresvfwdtspecrate; //type: int32
        ydk::YLeaf rsvpresvfwdtspecpeakrate; //type: int32
        ydk::YLeaf rsvpresvfwdtspecburst; //type: int32
        ydk::YLeaf rsvpresvfwdtspecmintu; //type: int32
        ydk::YLeaf rsvpresvfwdtspecmaxtu; //type: int32
        ydk::YLeaf rsvpresvfwdrspecrate; //type: int32
        ydk::YLeaf rsvpresvfwdrspecslack; //type: int32
        ydk::YLeaf rsvpresvfwdinterval; //type: int32
        ydk::YLeaf rsvpresvfwdscope; //type: binary
        ydk::YLeaf rsvpresvfwdshared; //type: boolean
        ydk::YLeaf rsvpresvfwdexplicit; //type: boolean
        ydk::YLeaf rsvpresvfwdrsvphop; //type: boolean
        ydk::YLeaf rsvpresvfwdlastchange; //type: uint32
        ydk::YLeaf rsvpresvfwdpolicy; //type: binary
        ydk::YLeaf rsvpresvfwdstatus; //type: Rowstatus
        ydk::YLeaf rsvpresvfwdttl; //type: int32
        ydk::YLeaf rsvpresvfwdflowid; //type: int32

}; // RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry


class RsvpMib::Rsvpiftable : public ydk::Entity
{
    public:
        Rsvpiftable();
        ~Rsvpiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rsvpifentry; //type: RsvpMib::Rsvpiftable::Rsvpifentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpiftable::Rsvpifentry> > rsvpifentry;
        
}; // RsvpMib::Rsvpiftable


class RsvpMib::Rsvpiftable::Rsvpifentry : public ydk::Entity
{
    public:
        Rsvpifentry();
        ~Rsvpifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf rsvpifudpnbrs; //type: uint32
        ydk::YLeaf rsvpifipnbrs; //type: uint32
        ydk::YLeaf rsvpifnbrs; //type: uint32
        ydk::YLeaf rsvpifrefreshblockademultiple; //type: int32
        ydk::YLeaf rsvpifrefreshmultiple; //type: int32
        ydk::YLeaf rsvpifttl; //type: int32
        ydk::YLeaf rsvpifrefreshinterval; //type: int32
        ydk::YLeaf rsvpifroutedelay; //type: int32
        ydk::YLeaf rsvpifenabled; //type: boolean
        ydk::YLeaf rsvpifudprequired; //type: boolean
        ydk::YLeaf rsvpifstatus; //type: Rowstatus

}; // RsvpMib::Rsvpiftable::Rsvpifentry


class RsvpMib::Rsvpnbrtable : public ydk::Entity
{
    public:
        Rsvpnbrtable();
        ~Rsvpnbrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rsvpnbrentry; //type: RsvpMib::Rsvpnbrtable::Rsvpnbrentry

        std::vector<std::shared_ptr<RSVP_MIB::RsvpMib::Rsvpnbrtable::Rsvpnbrentry> > rsvpnbrentry;
        
}; // RsvpMib::Rsvpnbrtable


class RsvpMib::Rsvpnbrtable::Rsvpnbrentry : public ydk::Entity
{
    public:
        Rsvpnbrentry();
        ~Rsvpnbrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf rsvpnbraddress; //type: binary
        ydk::YLeaf rsvpnbrprotocol; //type: Rsvpencapsulation
        ydk::YLeaf rsvpnbrstatus; //type: Rowstatus

}; // RsvpMib::Rsvpnbrtable::Rsvpnbrentry

class Rsvpencapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf both;

};


}
}

#endif /* _RSVP_MIB_ */

