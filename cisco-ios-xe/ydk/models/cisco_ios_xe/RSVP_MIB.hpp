#ifndef _RSVP_MIB_
#define _RSVP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace RSVP_MIB {

class RSVPMIB : public ydk::Entity
{
    public:
        RSVPMIB();
        ~RSVPMIB();

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

        class RsvpGenObjects; //type: RSVPMIB::RsvpGenObjects
        class RsvpSessionTable; //type: RSVPMIB::RsvpSessionTable
        class RsvpSenderTable; //type: RSVPMIB::RsvpSenderTable
        class RsvpSenderOutInterfaceTable; //type: RSVPMIB::RsvpSenderOutInterfaceTable
        class RsvpResvTable; //type: RSVPMIB::RsvpResvTable
        class RsvpResvFwdTable; //type: RSVPMIB::RsvpResvFwdTable
        class RsvpIfTable; //type: RSVPMIB::RsvpIfTable
        class RsvpNbrTable; //type: RSVPMIB::RsvpNbrTable

        std::shared_ptr<cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpGenObjects> rsvpgenobjects;
        std::shared_ptr<cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpSessionTable> rsvpsessiontable;
        std::shared_ptr<cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpSenderTable> rsvpsendertable;
        std::shared_ptr<cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpSenderOutInterfaceTable> rsvpsenderoutinterfacetable;
        std::shared_ptr<cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpResvTable> rsvpresvtable;
        std::shared_ptr<cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpResvFwdTable> rsvpresvfwdtable;
        std::shared_ptr<cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpIfTable> rsvpiftable;
        std::shared_ptr<cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpNbrTable> rsvpnbrtable;
        
}; // RSVPMIB


class RSVPMIB::RsvpGenObjects : public ydk::Entity
{
    public:
        RsvpGenObjects();
        ~RsvpGenObjects();

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

        ydk::YLeaf rsvpbadpackets; //type: uint32
        ydk::YLeaf rsvpsendernewindex; //type: int32
        ydk::YLeaf rsvpresvnewindex; //type: int32
        ydk::YLeaf rsvpresvfwdnewindex; //type: int32
        ydk::YLeaf rsvpsessionnewindex; //type: int32

}; // RSVPMIB::RsvpGenObjects


class RSVPMIB::RsvpSessionTable : public ydk::Entity
{
    public:
        RsvpSessionTable();
        ~RsvpSessionTable();

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

        class RsvpSessionEntry; //type: RSVPMIB::RsvpSessionTable::RsvpSessionEntry

        ydk::YList rsvpsessionentry;
        
}; // RSVPMIB::RsvpSessionTable


class RSVPMIB::RsvpSessionTable::RsvpSessionEntry : public ydk::Entity
{
    public:
        RsvpSessionEntry();
        ~RsvpSessionEntry();

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

        ydk::YLeaf rsvpsessionnumber; //type: int32
        ydk::YLeaf rsvpsessiontype; //type: int32
        ydk::YLeaf rsvpsessiondestaddr; //type: binary
        ydk::YLeaf rsvpsessiondestaddrlength; //type: int32
        ydk::YLeaf rsvpsessionprotocol; //type: int32
        ydk::YLeaf rsvpsessionport; //type: binary
        ydk::YLeaf rsvpsessionsenders; //type: uint32
        ydk::YLeaf rsvpsessionreceivers; //type: uint32
        ydk::YLeaf rsvpsessionrequests; //type: uint32

}; // RSVPMIB::RsvpSessionTable::RsvpSessionEntry


class RSVPMIB::RsvpSenderTable : public ydk::Entity
{
    public:
        RsvpSenderTable();
        ~RsvpSenderTable();

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

        class RsvpSenderEntry; //type: RSVPMIB::RsvpSenderTable::RsvpSenderEntry

        ydk::YList rsvpsenderentry;
        
}; // RSVPMIB::RsvpSenderTable


class RSVPMIB::RsvpSenderTable::RsvpSenderEntry : public ydk::Entity
{
    public:
        RsvpSenderEntry();
        ~RsvpSenderEntry();

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

        //type: int32 (refers to cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpSessionTable::RsvpSessionEntry::rsvpsessionnumber)
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
        ydk::YLeaf rsvpsenderstatus; //type: RowStatus
        ydk::YLeaf rsvpsenderttl; //type: int32

}; // RSVPMIB::RsvpSenderTable::RsvpSenderEntry


class RSVPMIB::RsvpSenderOutInterfaceTable : public ydk::Entity
{
    public:
        RsvpSenderOutInterfaceTable();
        ~RsvpSenderOutInterfaceTable();

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

        class RsvpSenderOutInterfaceEntry; //type: RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry

        ydk::YList rsvpsenderoutinterfaceentry;
        
}; // RSVPMIB::RsvpSenderOutInterfaceTable


class RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry : public ydk::Entity
{
    public:
        RsvpSenderOutInterfaceEntry();
        ~RsvpSenderOutInterfaceEntry();

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

        //type: int32 (refers to cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpSessionTable::RsvpSessionEntry::rsvpsessionnumber)
        ydk::YLeaf rsvpsessionnumber;
        //type: int32 (refers to cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpSenderTable::RsvpSenderEntry::rsvpsendernumber)
        ydk::YLeaf rsvpsendernumber;
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf rsvpsenderoutinterfacestatus; //type: RowStatus

}; // RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry


class RSVPMIB::RsvpResvTable : public ydk::Entity
{
    public:
        RsvpResvTable();
        ~RsvpResvTable();

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

        class RsvpResvEntry; //type: RSVPMIB::RsvpResvTable::RsvpResvEntry

        ydk::YList rsvpresventry;
        
}; // RSVPMIB::RsvpResvTable


class RSVPMIB::RsvpResvTable::RsvpResvEntry : public ydk::Entity
{
    public:
        RsvpResvEntry();
        ~RsvpResvEntry();

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

        //type: int32 (refers to cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpSessionTable::RsvpSessionEntry::rsvpsessionnumber)
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
        ydk::YLeaf rsvpresvservice; //type: QosService
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
        ydk::YLeaf rsvpresvstatus; //type: RowStatus
        ydk::YLeaf rsvpresvttl; //type: int32
        ydk::YLeaf rsvpresvflowid; //type: int32

}; // RSVPMIB::RsvpResvTable::RsvpResvEntry


class RSVPMIB::RsvpResvFwdTable : public ydk::Entity
{
    public:
        RsvpResvFwdTable();
        ~RsvpResvFwdTable();

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

        class RsvpResvFwdEntry; //type: RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry

        ydk::YList rsvpresvfwdentry;
        
}; // RSVPMIB::RsvpResvFwdTable


class RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry : public ydk::Entity
{
    public:
        RsvpResvFwdEntry();
        ~RsvpResvFwdEntry();

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

        //type: int32 (refers to cisco_ios_xe::RSVP_MIB::RSVPMIB::RsvpSessionTable::RsvpSessionEntry::rsvpsessionnumber)
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
        ydk::YLeaf rsvpresvfwdservice; //type: QosService
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
        ydk::YLeaf rsvpresvfwdstatus; //type: RowStatus
        ydk::YLeaf rsvpresvfwdttl; //type: int32
        ydk::YLeaf rsvpresvfwdflowid; //type: int32

}; // RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry


class RSVPMIB::RsvpIfTable : public ydk::Entity
{
    public:
        RsvpIfTable();
        ~RsvpIfTable();

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

        class RsvpIfEntry; //type: RSVPMIB::RsvpIfTable::RsvpIfEntry

        ydk::YList rsvpifentry;
        
}; // RSVPMIB::RsvpIfTable


class RSVPMIB::RsvpIfTable::RsvpIfEntry : public ydk::Entity
{
    public:
        RsvpIfEntry();
        ~RsvpIfEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
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
        ydk::YLeaf rsvpifstatus; //type: RowStatus

}; // RSVPMIB::RsvpIfTable::RsvpIfEntry


class RSVPMIB::RsvpNbrTable : public ydk::Entity
{
    public:
        RsvpNbrTable();
        ~RsvpNbrTable();

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

        class RsvpNbrEntry; //type: RSVPMIB::RsvpNbrTable::RsvpNbrEntry

        ydk::YList rsvpnbrentry;
        
}; // RSVPMIB::RsvpNbrTable


class RSVPMIB::RsvpNbrTable::RsvpNbrEntry : public ydk::Entity
{
    public:
        RsvpNbrEntry();
        ~RsvpNbrEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf rsvpnbraddress; //type: binary
        ydk::YLeaf rsvpnbrprotocol; //type: RsvpEncapsulation
        ydk::YLeaf rsvpnbrstatus; //type: RowStatus

}; // RSVPMIB::RsvpNbrTable::RsvpNbrEntry

class RsvpEncapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf both;

};


}
}

#endif /* _RSVP_MIB_ */

