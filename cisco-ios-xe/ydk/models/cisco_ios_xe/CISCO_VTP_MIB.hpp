#ifndef _CISCO_VTP_MIB_
#define _CISCO_VTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VTP_MIB {

class CISCOVTPMIB : public ydk::Entity
{
    public:
        CISCOVTPMIB();
        ~CISCOVTPMIB();

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

        class Vtpstatus; //type: CISCOVTPMIB::Vtpstatus
        class Internalvlaninfo; //type: CISCOVTPMIB::Internalvlaninfo
        class Vlantrunkports; //type: CISCOVTPMIB::Vlantrunkports
        class Vlanstatistics; //type: CISCOVTPMIB::Vlanstatistics
        class Managementdomaintable; //type: CISCOVTPMIB::Managementdomaintable
        class Vtpvlantable; //type: CISCOVTPMIB::Vtpvlantable
        class Vtpinternalvlantable; //type: CISCOVTPMIB::Vtpinternalvlantable
        class Vtpvlanedittable; //type: CISCOVTPMIB::Vtpvlanedittable
        class Vtpvlanlocalshutdowntable; //type: CISCOVTPMIB::Vtpvlanlocalshutdowntable
        class Vlantrunkporttable; //type: CISCOVTPMIB::Vlantrunkporttable
        class Vtpdiscovertable; //type: CISCOVTPMIB::Vtpdiscovertable
        class Vtpdiscoverresulttable; //type: CISCOVTPMIB::Vtpdiscoverresulttable
        class Vtpdatabasetable; //type: CISCOVTPMIB::Vtpdatabasetable
        class Vtpauthenticationtable; //type: CISCOVTPMIB::Vtpauthenticationtable

        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpstatus> vtpstatus;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Internalvlaninfo> internalvlaninfo;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vlantrunkports> vlantrunkports;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vlanstatistics> vlanstatistics;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable> managementdomaintable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpvlantable> vtpvlantable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpinternalvlantable> vtpinternalvlantable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpvlanedittable> vtpvlanedittable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpvlanlocalshutdowntable> vtpvlanlocalshutdowntable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vlantrunkporttable> vlantrunkporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpdiscovertable> vtpdiscovertable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpdiscoverresulttable> vtpdiscoverresulttable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpdatabasetable> vtpdatabasetable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpauthenticationtable> vtpauthenticationtable;
        
}; // CISCOVTPMIB


class CISCOVTPMIB::Vtpstatus : public ydk::Entity
{
    public:
        Vtpstatus();
        ~Vtpstatus();

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

        ydk::YLeaf vtpversion; //type: Vtpversion
        ydk::YLeaf vtpmaxvlanstorage; //type: int32
        ydk::YLeaf vtpnotificationsenabled; //type: boolean
        ydk::YLeaf vtpvlancreatednotifenabled; //type: boolean
        ydk::YLeaf vtpvlandeletednotifenabled; //type: boolean
        class Vtpversion;

}; // CISCOVTPMIB::Vtpstatus


class CISCOVTPMIB::Internalvlaninfo : public ydk::Entity
{
    public:
        Internalvlaninfo();
        ~Internalvlaninfo();

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

        ydk::YLeaf vtpinternalvlanallocpolicy; //type: Vtpinternalvlanallocpolicy
        class Vtpinternalvlanallocpolicy;

}; // CISCOVTPMIB::Internalvlaninfo


class CISCOVTPMIB::Vlantrunkports : public ydk::Entity
{
    public:
        Vlantrunkports();
        ~Vlantrunkports();

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

        ydk::YLeaf vlantrunkportsetserialno; //type: int32
        ydk::YLeaf vlantrunkportsdot1qtag; //type: boolean

}; // CISCOVTPMIB::Vlantrunkports


class CISCOVTPMIB::Vlanstatistics : public ydk::Entity
{
    public:
        Vlanstatistics();
        ~Vlanstatistics();

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

        ydk::YLeaf vlanstatsvlans; //type: uint32
        ydk::YLeaf vlanstatsextendedvlans; //type: uint32
        ydk::YLeaf vlanstatsinternalvlans; //type: uint32
        ydk::YLeaf vlanstatsfreevlans; //type: uint32

}; // CISCOVTPMIB::Vlanstatistics


class CISCOVTPMIB::Managementdomaintable : public ydk::Entity
{
    public:
        Managementdomaintable();
        ~Managementdomaintable();

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

        class Managementdomainentry; //type: CISCOVTPMIB::Managementdomaintable::Managementdomainentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable::Managementdomainentry> > managementdomainentry;
        
}; // CISCOVTPMIB::Managementdomaintable


class CISCOVTPMIB::Managementdomaintable::Managementdomainentry : public ydk::Entity
{
    public:
        Managementdomainentry();
        ~Managementdomainentry();

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

        ydk::YLeaf managementdomainindex; //type: int32
        ydk::YLeaf managementdomainname; //type: string
        ydk::YLeaf managementdomainlocalmode; //type: Managementdomainlocalmode
        ydk::YLeaf managementdomainconfigrevnumber; //type: uint32
        ydk::YLeaf managementdomainlastupdater; //type: string
        ydk::YLeaf managementdomainlastchange; //type: string
        ydk::YLeaf managementdomainrowstatus; //type: RowStatus
        ydk::YLeaf managementdomaintftpserver; //type: string
        ydk::YLeaf managementdomaintftppathname; //type: string
        ydk::YLeaf managementdomainpruningstate; //type: Managementdomainpruningstate
        ydk::YLeaf managementdomainversioninuse; //type: Managementdomainversioninuse
        ydk::YLeaf managementdomainpruningstateoper; //type: Managementdomainpruningstateoper
        ydk::YLeaf managementdomainadminsrcif; //type: string
        ydk::YLeaf managementdomainsourceonlymode; //type: boolean
        ydk::YLeaf managementdomainopersrcif; //type: string
        ydk::YLeaf managementdomainconfigfile; //type: string
        ydk::YLeaf managementdomainlocalupdatertype; //type: InetAddressType
        ydk::YLeaf managementdomainlocalupdater; //type: binary
        ydk::YLeaf managementdomaindeviceid; //type: string
        ydk::YLeaf vtpvlaneditoperation; //type: Vtpvlaneditoperation
        ydk::YLeaf vtpvlanapplystatus; //type: Vtpvlanapplystatus
        ydk::YLeaf vtpvlaneditbufferowner; //type: binary
        ydk::YLeaf vtpvlaneditconfigrevnumber; //type: uint32
        ydk::YLeaf vtpvlaneditmodifiedvlan; //type: int32
        ydk::YLeaf vtpinsummaryadverts; //type: uint32
        ydk::YLeaf vtpinsubsetadverts; //type: uint32
        ydk::YLeaf vtpinadvertrequests; //type: uint32
        ydk::YLeaf vtpoutsummaryadverts; //type: uint32
        ydk::YLeaf vtpoutsubsetadverts; //type: uint32
        ydk::YLeaf vtpoutadvertrequests; //type: uint32
        ydk::YLeaf vtpconfigrevnumbererrors; //type: uint32
        ydk::YLeaf vtpconfigdigesterrors; //type: uint32
        class Managementdomainlocalmode;
        class Managementdomainpruningstate;
        class Managementdomainversioninuse;
        class Managementdomainpruningstateoper;
        class Vtpvlaneditoperation;
        class Vtpvlanapplystatus;

}; // CISCOVTPMIB::Managementdomaintable::Managementdomainentry


class CISCOVTPMIB::Vtpvlantable : public ydk::Entity
{
    public:
        Vtpvlantable();
        ~Vtpvlantable();

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

        class Vtpvlanentry; //type: CISCOVTPMIB::Vtpvlantable::Vtpvlanentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpvlantable::Vtpvlanentry> > vtpvlanentry;
        
}; // CISCOVTPMIB::Vtpvlantable


class CISCOVTPMIB::Vtpvlantable::Vtpvlanentry : public ydk::Entity
{
    public:
        Vtpvlanentry();
        ~Vtpvlanentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpvlanindex; //type: int32
        ydk::YLeaf vtpvlanstate; //type: Vtpvlanstate
        ydk::YLeaf vtpvlantype; //type: VlanType
        ydk::YLeaf vtpvlanname; //type: string
        ydk::YLeaf vtpvlanmtu; //type: int32
        ydk::YLeaf vtpvlandot10said; //type: binary
        ydk::YLeaf vtpvlanringnumber; //type: int32
        ydk::YLeaf vtpvlanbridgenumber; //type: int32
        ydk::YLeaf vtpvlanstptype; //type: Vtpvlanstptype
        ydk::YLeaf vtpvlanparentvlan; //type: int32
        ydk::YLeaf vtpvlantranslationalvlan1; //type: int32
        ydk::YLeaf vtpvlantranslationalvlan2; //type: int32
        ydk::YLeaf vtpvlanbridgetype; //type: Vtpvlanbridgetype
        ydk::YLeaf vtpvlanarehopcount; //type: int32
        ydk::YLeaf vtpvlanstehopcount; //type: int32
        ydk::YLeaf vtpvlaniscrfbackup; //type: boolean
        ydk::YLeaf vtpvlantypeext; //type: VlanTypeExt
        ydk::YLeaf vtpvlanifindex; //type: int32
        ydk::YLeaf stpxvlanmistpinstmapinstindex; //type: int32
        class Vtpvlanstate;
        class Vtpvlanstptype;
        class Vtpvlanbridgetype;

}; // CISCOVTPMIB::Vtpvlantable::Vtpvlanentry


class CISCOVTPMIB::Vtpinternalvlantable : public ydk::Entity
{
    public:
        Vtpinternalvlantable();
        ~Vtpinternalvlantable();

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

        class Vtpinternalvlanentry; //type: CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry> > vtpinternalvlanentry;
        
}; // CISCOVTPMIB::Vtpinternalvlantable


class CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry : public ydk::Entity
{
    public:
        Vtpinternalvlanentry();
        ~Vtpinternalvlanentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::vtpvlanindex)
        ydk::YLeaf vtpvlanindex;
        ydk::YLeaf vtpinternalvlanowner; //type: string

}; // CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry


class CISCOVTPMIB::Vtpvlanedittable : public ydk::Entity
{
    public:
        Vtpvlanedittable();
        ~Vtpvlanedittable();

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

        class Vtpvlaneditentry; //type: CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry> > vtpvlaneditentry;
        
}; // CISCOVTPMIB::Vtpvlanedittable


class CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry : public ydk::Entity
{
    public:
        Vtpvlaneditentry();
        ~Vtpvlaneditentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpvlaneditindex; //type: int32
        ydk::YLeaf vtpvlaneditstate; //type: Vtpvlaneditstate
        ydk::YLeaf vtpvlanedittype; //type: VlanType
        ydk::YLeaf vtpvlaneditname; //type: string
        ydk::YLeaf vtpvlaneditmtu; //type: int32
        ydk::YLeaf vtpvlaneditdot10said; //type: binary
        ydk::YLeaf vtpvlaneditringnumber; //type: int32
        ydk::YLeaf vtpvlaneditbridgenumber; //type: int32
        ydk::YLeaf vtpvlaneditstptype; //type: Vtpvlaneditstptype
        ydk::YLeaf vtpvlaneditparentvlan; //type: int32
        ydk::YLeaf vtpvlaneditrowstatus; //type: RowStatus
        ydk::YLeaf vtpvlanedittranslationalvlan1; //type: int32
        ydk::YLeaf vtpvlanedittranslationalvlan2; //type: int32
        ydk::YLeaf vtpvlaneditbridgetype; //type: Vtpvlaneditbridgetype
        ydk::YLeaf vtpvlaneditarehopcount; //type: int32
        ydk::YLeaf vtpvlaneditstehopcount; //type: int32
        ydk::YLeaf vtpvlaneditiscrfbackup; //type: boolean
        ydk::YLeaf vtpvlanedittypeext; //type: VlanTypeExt
        ydk::YLeaf vtpvlanedittypeext2; //type: VlanTypeExt
        ydk::YLeaf stpxvlanmistpinstmapeditinstindex; //type: int32
        class Vtpvlaneditstate;
        class Vtpvlaneditstptype;
        class Vtpvlaneditbridgetype;

}; // CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry


class CISCOVTPMIB::Vtpvlanlocalshutdowntable : public ydk::Entity
{
    public:
        Vtpvlanlocalshutdowntable();
        ~Vtpvlanlocalshutdowntable();

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

        class Vtpvlanlocalshutdownentry; //type: CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry> > vtpvlanlocalshutdownentry;
        
}; // CISCOVTPMIB::Vtpvlanlocalshutdowntable


class CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry : public ydk::Entity
{
    public:
        Vtpvlanlocalshutdownentry();
        ~Vtpvlanlocalshutdownentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::vtpvlanindex)
        ydk::YLeaf vtpvlanindex;
        ydk::YLeaf vtpvlanlocalshutdown; //type: Vtpvlanlocalshutdown
        class Vtpvlanlocalshutdown;

}; // CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry


class CISCOVTPMIB::Vlantrunkporttable : public ydk::Entity
{
    public:
        Vlantrunkporttable();
        ~Vlantrunkporttable();

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

        class Vlantrunkportentry; //type: CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry> > vlantrunkportentry;
        
}; // CISCOVTPMIB::Vlantrunkporttable


class CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry : public ydk::Entity
{
    public:
        Vlantrunkportentry();
        ~Vlantrunkportentry();

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

        ydk::YLeaf vlantrunkportifindex; //type: int32
        ydk::YLeaf vlantrunkportmanagementdomain; //type: int32
        ydk::YLeaf vlantrunkportencapsulationtype; //type: Vlantrunkportencapsulationtype
        ydk::YLeaf vlantrunkportvlansenabled; //type: binary
        ydk::YLeaf vlantrunkportnativevlan; //type: int32
        ydk::YLeaf vlantrunkportrowstatus; //type: RowStatus
        ydk::YLeaf vlantrunkportinjoins; //type: uint32
        ydk::YLeaf vlantrunkportoutjoins; //type: uint32
        ydk::YLeaf vlantrunkportoldadverts; //type: uint32
        ydk::YLeaf vlantrunkportvlanspruningeligible; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined; //type: binary
        ydk::YLeaf vlantrunkportdynamicstate; //type: Vlantrunkportdynamicstate
        ydk::YLeaf vlantrunkportdynamicstatus; //type: Vlantrunkportdynamicstatus
        ydk::YLeaf vlantrunkportvtpenabled; //type: boolean
        ydk::YLeaf vlantrunkportencapsulationopertype; //type: Vlantrunkportencapsulationopertype
        ydk::YLeaf vlantrunkportvlansenabled2k; //type: binary
        ydk::YLeaf vlantrunkportvlansenabled3k; //type: binary
        ydk::YLeaf vlantrunkportvlansenabled4k; //type: binary
        ydk::YLeaf vtpvlanspruningeligible2k; //type: binary
        ydk::YLeaf vtpvlanspruningeligible3k; //type: binary
        ydk::YLeaf vtpvlanspruningeligible4k; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined2k; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined3k; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined4k; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined2k; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined3k; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined4k; //type: binary
        ydk::YLeaf vlantrunkportdot1qtunnel; //type: Vlantrunkportdot1Qtunnel
        ydk::YLeaf vlantrunkportvlansactivefirst2k; //type: binary
        ydk::YLeaf vlantrunkportvlansactivesecond2k; //type: binary
        ydk::YLeaf stpxpreferredvlansmap; //type: binary
        ydk::YLeaf stpxpreferredvlansmap2k; //type: binary
        ydk::YLeaf stpxpreferredvlansmap3k; //type: binary
        ydk::YLeaf stpxpreferredvlansmap4k; //type: binary
        ydk::YLeaf stpxpreferredmistpinstancesmap; //type: binary
        ydk::YLeaf stpxpreferredmstinstancesmap; //type: binary
        class Vlantrunkportencapsulationtype;
        class Vlantrunkportdynamicstate;
        class Vlantrunkportdynamicstatus;
        class Vlantrunkportencapsulationopertype;
        class Vlantrunkportdot1Qtunnel;

}; // CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry


class CISCOVTPMIB::Vtpdiscovertable : public ydk::Entity
{
    public:
        Vtpdiscovertable();
        ~Vtpdiscovertable();

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

        class Vtpdiscoverentry; //type: CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry> > vtpdiscoverentry;
        
}; // CISCOVTPMIB::Vtpdiscovertable


class CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry : public ydk::Entity
{
    public:
        Vtpdiscoverentry();
        ~Vtpdiscoverentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpdiscoveraction; //type: Vtpdiscoveraction
        ydk::YLeaf vtpdiscoverstatus; //type: Vtpdiscoverstatus
        ydk::YLeaf vtplastdiscovertime; //type: uint32
        class Vtpdiscoveraction;
        class Vtpdiscoverstatus;

}; // CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry


class CISCOVTPMIB::Vtpdiscoverresulttable : public ydk::Entity
{
    public:
        Vtpdiscoverresulttable();
        ~Vtpdiscoverresulttable();

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

        class Vtpdiscoverresultentry; //type: CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry> > vtpdiscoverresultentry;
        
}; // CISCOVTPMIB::Vtpdiscoverresulttable


class CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry : public ydk::Entity
{
    public:
        Vtpdiscoverresultentry();
        ~Vtpdiscoverresultentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpdiscoverresultindex; //type: uint32
        ydk::YLeaf vtpdiscoverresultdatabasename; //type: string
        ydk::YLeaf vtpdiscoverresultconflicting; //type: boolean
        ydk::YLeaf vtpdiscoverresultdeviceid; //type: string
        ydk::YLeaf vtpdiscoverresultprimaryserver; //type: string
        ydk::YLeaf vtpdiscoverresultrevnumber; //type: uint32
        ydk::YLeaf vtpdiscoverresultsystemname; //type: string

}; // CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry


class CISCOVTPMIB::Vtpdatabasetable : public ydk::Entity
{
    public:
        Vtpdatabasetable();
        ~Vtpdatabasetable();

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

        class Vtpdatabaseentry; //type: CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry> > vtpdatabaseentry;
        
}; // CISCOVTPMIB::Vtpdatabasetable


class CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry : public ydk::Entity
{
    public:
        Vtpdatabaseentry();
        ~Vtpdatabaseentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpdatabaseindex; //type: uint32
        ydk::YLeaf vtpdatabasename; //type: string
        ydk::YLeaf vtpdatabaselocalmode; //type: Vtpdatabaselocalmode
        ydk::YLeaf vtpdatabaserevnumber; //type: uint32
        ydk::YLeaf vtpdatabaseprimaryserver; //type: boolean
        ydk::YLeaf vtpdatabaseprimaryserverid; //type: string
        ydk::YLeaf vtpdatabasetakeoverprimary; //type: boolean
        ydk::YLeaf vtpdatabasetakeoverpassword; //type: string
        class Vtpdatabaselocalmode;

}; // CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry


class CISCOVTPMIB::Vtpauthenticationtable : public ydk::Entity
{
    public:
        Vtpauthenticationtable();
        ~Vtpauthenticationtable();

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

        class Vtpauthentry; //type: CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry> > vtpauthentry;
        
}; // CISCOVTPMIB::Vtpauthenticationtable


class CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry : public ydk::Entity
{
    public:
        Vtpauthentry();
        ~Vtpauthentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpauthpassword; //type: string
        ydk::YLeaf vtpauthpasswordtype; //type: Vtpauthpasswordtype
        ydk::YLeaf vtpauthsecretkey; //type: binary
        class Vtpauthpasswordtype;

}; // CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry

class VlanType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf fddi;
        static const ydk::Enum::YLeaf tokenRing;
        static const ydk::Enum::YLeaf fddiNet;
        static const ydk::Enum::YLeaf trNet;
        static const ydk::Enum::YLeaf deprecated;

};

class CISCOVTPMIB::Vtpstatus::Vtpversion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf one;
        static const ydk::Enum::YLeaf two;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf three;

};

class CISCOVTPMIB::Internalvlaninfo::Vtpinternalvlanallocpolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ascending;
        static const ydk::Enum::YLeaf descending;

};

class CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainlocalmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf transparent;
        static const ydk::Enum::YLeaf off;

};

class CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainpruningstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainversioninuse : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version1;
        static const ydk::Enum::YLeaf version2;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf version3;

};

class CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainpruningstateoper : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlaneditoperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf apply;
        static const ydk::Enum::YLeaf release;
        static const ydk::Enum::YLeaf restartTimer;

};

class CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf succeeded;
        static const ydk::Enum::YLeaf configNumberError;
        static const ydk::Enum::YLeaf inconsistentEdit;
        static const ydk::Enum::YLeaf tooBig;
        static const ydk::Enum::YLeaf localNVStoreFail;
        static const ydk::Enum::YLeaf remoteNVStoreFail;
        static const ydk::Enum::YLeaf editBufferEmpty;
        static const ydk::Enum::YLeaf someOtherError;
        static const ydk::Enum::YLeaf notPrimaryServer;

};

class CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf mtuTooBigForDevice;
        static const ydk::Enum::YLeaf mtuTooBigForTrunk;

};

class CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanstptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ieee;
        static const ydk::Enum::YLeaf ibm;
        static const ydk::Enum::YLeaf hybrid;

};

class CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanbridgetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf srt;
        static const ydk::Enum::YLeaf srb;

};

class CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf suspended;

};

class CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditstptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ieee;
        static const ydk::Enum::YLeaf ibm;
        static const ydk::Enum::YLeaf auto_;

};

class CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditbridgetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srt;
        static const ydk::Enum::YLeaf srb;

};

class CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::Vtpvlanlocalshutdown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf dot10;
        static const ydk::Enum::YLeaf lane;
        static const ydk::Enum::YLeaf dot1Q;
        static const ydk::Enum::YLeaf negotiate;

};

class CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf desirable;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf onNoNegotiate;

};

class CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trunking;
        static const ydk::Enum::YLeaf notTrunking;

};

class CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationopertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf dot10;
        static const ydk::Enum::YLeaf lane;
        static const ydk::Enum::YLeaf dot1Q;
        static const ydk::Enum::YLeaf negotiating;
        static const ydk::Enum::YLeaf notApplicable;

};

class CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdot1Qtunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trunk;
        static const ydk::Enum::YLeaf access;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoveraction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discover;
        static const ydk::Enum::YLeaf noOperation;
        static const ydk::Enum::YLeaf purgeResult;

};

class CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoverstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf succeeded;
        static const ydk::Enum::YLeaf resourceUnavailable;
        static const ydk::Enum::YLeaf someOtherError;

};

class CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::Vtpdatabaselocalmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf transparent;
        static const ydk::Enum::YLeaf off;

};

class CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::Vtpauthpasswordtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plaintext;
        static const ydk::Enum::YLeaf hidden;

};


}
}

#endif /* _CISCO_VTP_MIB_ */

