#ifndef _CISCO_PROCESS_MIB_
#define _CISCO_PROCESS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_PROCESS_MIB {

class CiscoProcessMib : public ydk::Entity
{
    public:
        CiscoProcessMib();
        ~CiscoProcessMib();

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

        class Cpmcpuhistory; //type: CiscoProcessMib::Cpmcpuhistory
        class Cpmcputotaltable; //type: CiscoProcessMib::Cpmcputotaltable
        class Cpmcoretable; //type: CiscoProcessMib::Cpmcoretable
        class Cpmprocesstable; //type: CiscoProcessMib::Cpmprocesstable
        class Cpmprocessextrevtable; //type: CiscoProcessMib::Cpmprocessextrevtable
        class Cpmcputhresholdtable; //type: CiscoProcessMib::Cpmcputhresholdtable
        class Cpmcpuhistorytable; //type: CiscoProcessMib::Cpmcpuhistorytable
        class Cpmcpuprocesshistorytable; //type: CiscoProcessMib::Cpmcpuprocesshistorytable
        class Cpmthreadtable; //type: CiscoProcessMib::Cpmthreadtable
        class Cpmvirtualprocesstable; //type: CiscoProcessMib::Cpmvirtualprocesstable

        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcoretable> cpmcoretable;
        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcpuhistory> cpmcpuhistory;
        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcpuhistorytable> cpmcpuhistorytable;
        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcpuprocesshistorytable> cpmcpuprocesshistorytable;
        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputhresholdtable> cpmcputhresholdtable;
        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable> cpmcputotaltable;
        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmprocessextrevtable> cpmprocessextrevtable;
        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmprocesstable> cpmprocesstable;
        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmthreadtable> cpmthreadtable;
        std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmvirtualprocesstable> cpmvirtualprocesstable;
        
}; // CiscoProcessMib


class CiscoProcessMib::Cpmcpuhistory : public ydk::Entity
{
    public:
        Cpmcpuhistory();
        ~Cpmcpuhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpmcpuhistorythreshold; //type: uint32
        ydk::YLeaf cpmcpuhistorysize; //type: uint32

}; // CiscoProcessMib::Cpmcpuhistory


class CiscoProcessMib::Cpmcputotaltable : public ydk::Entity
{
    public:
        Cpmcputotaltable();
        ~Cpmcputotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpmcputotalentry; //type: CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry

        std::vector<std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry> > cpmcputotalentry;
        
}; // CiscoProcessMib::Cpmcputotaltable


class CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry : public ydk::Entity
{
    public:
        Cpmcputotalentry();
        ~Cpmcputotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpmcputotalindex; //type: uint32
        ydk::YLeaf cpmcputotalphysicalindex; //type: int32
        ydk::YLeaf cpmcputotal5sec; //type: uint32
        ydk::YLeaf cpmcputotal1min; //type: uint32
        ydk::YLeaf cpmcputotal5min; //type: uint32
        ydk::YLeaf cpmcputotal5secrev; //type: uint32
        ydk::YLeaf cpmcputotal1minrev; //type: uint32
        ydk::YLeaf cpmcputotal5minrev; //type: uint32
        ydk::YLeaf cpmcpumoninterval; //type: uint32
        ydk::YLeaf cpmcputotalmonintervalvalue; //type: uint32
        ydk::YLeaf cpmcpuinterruptmonintervalvalue; //type: uint32
        ydk::YLeaf cpmcpumemoryused; //type: uint32
        ydk::YLeaf cpmcpumemoryfree; //type: uint32
        ydk::YLeaf cpmcpumemorykernelreserved; //type: uint32
        ydk::YLeaf cpmcpumemorylowest; //type: uint32
        ydk::YLeaf cpmcpumemoryusedovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhcused; //type: uint64
        ydk::YLeaf cpmcpumemoryfreeovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhcfree; //type: uint64
        ydk::YLeaf cpmcpumemorykernelreservedovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhckernelreserved; //type: uint64
        ydk::YLeaf cpmcpumemorylowestovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhclowest; //type: uint64
        ydk::YLeaf cpmcpuloadavg1min; //type: uint32
        ydk::YLeaf cpmcpuloadavg5min; //type: uint32
        ydk::YLeaf cpmcpuloadavg15min; //type: uint32
        ydk::YLeaf cpmcpumemorycommitted; //type: uint32
        ydk::YLeaf cpmcpumemorycommittedovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhccommitted; //type: uint64

}; // CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry


class CiscoProcessMib::Cpmcoretable : public ydk::Entity
{
    public:
        Cpmcoretable();
        ~Cpmcoretable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpmcoreentry; //type: CiscoProcessMib::Cpmcoretable::Cpmcoreentry

        std::vector<std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcoretable::Cpmcoreentry> > cpmcoreentry;
        
}; // CiscoProcessMib::Cpmcoretable


class CiscoProcessMib::Cpmcoretable::Cpmcoreentry : public ydk::Entity
{
    public:
        Cpmcoreentry();
        ~Cpmcoreentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmcoreindex; //type: uint32
        ydk::YLeaf cpmcorephysicalindex; //type: int32
        ydk::YLeaf cpmcore5sec; //type: uint32
        ydk::YLeaf cpmcore1min; //type: uint32
        ydk::YLeaf cpmcore5min; //type: uint32
        ydk::YLeaf cpmcoreloadavg1min; //type: uint32
        ydk::YLeaf cpmcoreloadavg5min; //type: uint32
        ydk::YLeaf cpmcoreloadavg15min; //type: uint32

}; // CiscoProcessMib::Cpmcoretable::Cpmcoreentry


class CiscoProcessMib::Cpmprocesstable : public ydk::Entity
{
    public:
        Cpmprocesstable();
        ~Cpmprocesstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpmprocessentry; //type: CiscoProcessMib::Cpmprocesstable::Cpmprocessentry

        std::vector<std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmprocesstable::Cpmprocessentry> > cpmprocessentry;
        
}; // CiscoProcessMib::Cpmprocesstable


class CiscoProcessMib::Cpmprocesstable::Cpmprocessentry : public ydk::Entity
{
    public:
        Cpmprocessentry();
        ~Cpmprocessentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmprocesspid; //type: uint32
        ydk::YLeaf cpmprocessname; //type: string
        ydk::YLeaf cpmprocessusecs; //type: uint32
        ydk::YLeaf cpmprocesstimecreated; //type: uint32
        ydk::YLeaf cpmprocessaverageusecs; //type: uint32
        ydk::YLeaf cpmprocextmemallocated; //type: uint32
        ydk::YLeaf cpmprocextmemfreed; //type: uint32
        ydk::YLeaf cpmprocextinvoked; //type: uint32
        ydk::YLeaf cpmprocextruntime; //type: uint32
        ydk::YLeaf cpmprocextutil5sec; //type: uint32
        ydk::YLeaf cpmprocextutil1min; //type: uint32
        ydk::YLeaf cpmprocextutil5min; //type: uint32
        ydk::YLeaf cpmprocextpriority; //type: Cpmprocextpriority
        class Cpmprocextpriority;

}; // CiscoProcessMib::Cpmprocesstable::Cpmprocessentry


class CiscoProcessMib::Cpmprocessextrevtable : public ydk::Entity
{
    public:
        Cpmprocessextrevtable();
        ~Cpmprocessextrevtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpmprocessextreventry; //type: CiscoProcessMib::Cpmprocessextrevtable::Cpmprocessextreventry

        std::vector<std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmprocessextrevtable::Cpmprocessextreventry> > cpmprocessextreventry;
        
}; // CiscoProcessMib::Cpmprocessextrevtable


class CiscoProcessMib::Cpmprocessextrevtable::Cpmprocessextreventry : public ydk::Entity
{
    public:
        Cpmprocessextreventry();
        ~Cpmprocessextreventry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmprocesstable::Cpmprocessentry::cpmprocesspid)
        ydk::YLeaf cpmprocesspid;
        ydk::YLeaf cpmprocextmemallocatedrev; //type: uint32
        ydk::YLeaf cpmprocextmemfreedrev; //type: uint32
        ydk::YLeaf cpmprocextinvokedrev; //type: uint32
        ydk::YLeaf cpmprocextruntimerev; //type: uint32
        ydk::YLeaf cpmprocextutil5secrev; //type: uint32
        ydk::YLeaf cpmprocextutil1minrev; //type: uint32
        ydk::YLeaf cpmprocextutil5minrev; //type: uint32
        ydk::YLeaf cpmprocextpriorityrev; //type: Cpmprocextpriorityrev
        ydk::YLeaf cpmprocesstype; //type: Cpmprocesstype
        ydk::YLeaf cpmprocessrespawn; //type: uint32
        ydk::YLeaf cpmprocessrespawncount; //type: uint32
        ydk::YLeaf cpmprocessrespawnafterlastpatch; //type: uint32
        ydk::YLeaf cpmprocessmemorycore; //type: Cpmprocessmemorycore
        ydk::YLeaf cpmprocesslastrestartuser; //type: string
        ydk::YLeaf cpmprocesstextsegmentsize; //type: uint32
        ydk::YLeaf cpmprocessdatasegmentsize; //type: uint32
        ydk::YLeaf cpmprocessstacksize; //type: uint32
        ydk::YLeaf cpmprocessdynamicmemorysize; //type: uint32
        ydk::YLeaf cpmprocextmemallocatedrevovrflw; //type: uint32
        ydk::YLeaf cpmprocexthcmemallocatedrev; //type: uint64
        ydk::YLeaf cpmprocextmemfreedrevovrflw; //type: uint32
        ydk::YLeaf cpmprocexthcmemfreedrev; //type: uint64
        ydk::YLeaf cpmprocesstextsegmentsizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshctextsegmentsize; //type: uint64
        ydk::YLeaf cpmprocessdatasegmentsizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshcdatasegmentsize; //type: uint64
        ydk::YLeaf cpmprocessstacksizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshcstacksize; //type: uint64
        ydk::YLeaf cpmprocessdynamicmemorysizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshcdynamicmemorysize; //type: uint64
        class Cpmprocextpriorityrev;
        class Cpmprocesstype;
        class Cpmprocessmemorycore;

}; // CiscoProcessMib::Cpmprocessextrevtable::Cpmprocessextreventry


class CiscoProcessMib::Cpmcputhresholdtable : public ydk::Entity
{
    public:
        Cpmcputhresholdtable();
        ~Cpmcputhresholdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpmcputhresholdentry; //type: CiscoProcessMib::Cpmcputhresholdtable::Cpmcputhresholdentry

        std::vector<std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputhresholdtable::Cpmcputhresholdentry> > cpmcputhresholdentry;
        
}; // CiscoProcessMib::Cpmcputhresholdtable


class CiscoProcessMib::Cpmcputhresholdtable::Cpmcputhresholdentry : public ydk::Entity
{
    public:
        Cpmcputhresholdentry();
        ~Cpmcputhresholdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmcputhresholdclass; //type: Cpmcputhresholdclass
        ydk::YLeaf cpmcpurisingthresholdvalue; //type: uint32
        ydk::YLeaf cpmcpurisingthresholdperiod; //type: uint32
        ydk::YLeaf cpmcpufallingthresholdvalue; //type: uint32
        ydk::YLeaf cpmcpufallingthresholdperiod; //type: uint32
        ydk::YLeaf cpmcputhresholdentrystatus; //type: Rowstatus
        class Cpmcputhresholdclass;

}; // CiscoProcessMib::Cpmcputhresholdtable::Cpmcputhresholdentry


class CiscoProcessMib::Cpmcpuhistorytable : public ydk::Entity
{
    public:
        Cpmcpuhistorytable();
        ~Cpmcpuhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpmcpuhistoryentry; //type: CiscoProcessMib::Cpmcpuhistorytable::Cpmcpuhistoryentry

        std::vector<std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcpuhistorytable::Cpmcpuhistoryentry> > cpmcpuhistoryentry;
        
}; // CiscoProcessMib::Cpmcpuhistorytable


class CiscoProcessMib::Cpmcpuhistorytable::Cpmcpuhistoryentry : public ydk::Entity
{
    public:
        Cpmcpuhistoryentry();
        ~Cpmcpuhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmcpuhistoryreportid; //type: uint32
        ydk::YLeaf cpmcpuhistoryreportsize; //type: uint32
        ydk::YLeaf cpmcpuhistorytotalutil; //type: uint32
        ydk::YLeaf cpmcpuhistoryinterruptutil; //type: uint32
        ydk::YLeaf cpmcpuhistorycreatedtime; //type: uint32

}; // CiscoProcessMib::Cpmcpuhistorytable::Cpmcpuhistoryentry


class CiscoProcessMib::Cpmcpuprocesshistorytable : public ydk::Entity
{
    public:
        Cpmcpuprocesshistorytable();
        ~Cpmcpuprocesshistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpmcpuprocesshistoryentry; //type: CiscoProcessMib::Cpmcpuprocesshistorytable::Cpmcpuprocesshistoryentry

        std::vector<std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcpuprocesshistorytable::Cpmcpuprocesshistoryentry> > cpmcpuprocesshistoryentry;
        
}; // CiscoProcessMib::Cpmcpuprocesshistorytable


class CiscoProcessMib::Cpmcpuprocesshistorytable::Cpmcpuprocesshistoryentry : public ydk::Entity
{
    public:
        Cpmcpuprocesshistoryentry();
        ~Cpmcpuprocesshistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcpuhistorytable::Cpmcpuhistoryentry::cpmcpuhistoryreportid)
        ydk::YLeaf cpmcpuhistoryreportid;
        ydk::YLeaf cpmcpuprocesshistoryindex; //type: uint32
        ydk::YLeaf cpmcpuhistoryprocid; //type: uint32
        ydk::YLeaf cpmcpuhistoryprocname; //type: string
        ydk::YLeaf cpmcpuhistoryproccreated; //type: uint32
        ydk::YLeaf cpmcpuhistoryprocutil; //type: uint32

}; // CiscoProcessMib::Cpmcpuprocesshistorytable::Cpmcpuprocesshistoryentry


class CiscoProcessMib::Cpmthreadtable : public ydk::Entity
{
    public:
        Cpmthreadtable();
        ~Cpmthreadtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpmthreadentry; //type: CiscoProcessMib::Cpmthreadtable::Cpmthreadentry

        std::vector<std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmthreadtable::Cpmthreadentry> > cpmthreadentry;
        
}; // CiscoProcessMib::Cpmthreadtable


class CiscoProcessMib::Cpmthreadtable::Cpmthreadentry : public ydk::Entity
{
    public:
        Cpmthreadentry();
        ~Cpmthreadentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmprocesstable::Cpmprocessentry::cpmprocesspid)
        ydk::YLeaf cpmprocesspid;
        ydk::YLeaf cpmthreadid; //type: uint32
        ydk::YLeaf cpmthreadname; //type: string
        ydk::YLeaf cpmthreadpriority; //type: uint32
        ydk::YLeaf cpmthreadstate; //type: Cpmthreadstate
        ydk::YLeaf cpmthreadblockingprocess; //type: string
        ydk::YLeaf cpmthreadcpuutilization; //type: uint32
        ydk::YLeaf cpmthreadstacksize; //type: uint32
        ydk::YLeaf cpmthreadstacksizeovrflw; //type: uint32
        ydk::YLeaf cpmthreadhcstacksize; //type: uint64
        class Cpmthreadstate;

}; // CiscoProcessMib::Cpmthreadtable::Cpmthreadentry


class CiscoProcessMib::Cpmvirtualprocesstable : public ydk::Entity
{
    public:
        Cpmvirtualprocesstable();
        ~Cpmvirtualprocesstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpmvirtualprocessentry; //type: CiscoProcessMib::Cpmvirtualprocesstable::Cpmvirtualprocessentry

        std::vector<std::shared_ptr<CISCO_PROCESS_MIB::CiscoProcessMib::Cpmvirtualprocesstable::Cpmvirtualprocessentry> > cpmvirtualprocessentry;
        
}; // CiscoProcessMib::Cpmvirtualprocesstable


class CiscoProcessMib::Cpmvirtualprocesstable::Cpmvirtualprocessentry : public ydk::Entity
{
    public:
        Cpmvirtualprocessentry();
        ~Cpmvirtualprocessentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to CISCO_PROCESS_MIB::CiscoProcessMib::Cpmprocesstable::Cpmprocessentry::cpmprocesspid)
        ydk::YLeaf cpmprocesspid;
        ydk::YLeaf cpmvirtualprocessid; //type: uint32
        ydk::YLeaf cpmvirtualprocessname; //type: string
        ydk::YLeaf cpmvirtualprocessutil5sec; //type: uint32
        ydk::YLeaf cpmvirtualprocessutil1min; //type: uint32
        ydk::YLeaf cpmvirtualprocessutil5min; //type: uint32
        ydk::YLeaf cpmvirtualprocessmemallocated; //type: uint32
        ydk::YLeaf cpmvirtualprocessmemfreed; //type: uint32
        ydk::YLeaf cpmvirtualprocessinvokecount; //type: uint32
        ydk::YLeaf cpmvirtualprocessruntime; //type: uint32
        ydk::YLeaf cpmvirtualprocessmemallocatedovrflw; //type: uint32
        ydk::YLeaf cpmvirtualprocesshcmemallocated; //type: uint64
        ydk::YLeaf cpmvirtualprocessmemfreedovrflw; //type: uint32
        ydk::YLeaf cpmvirtualprocesshcmemfreed; //type: uint64

}; // CiscoProcessMib::Cpmvirtualprocesstable::Cpmvirtualprocessentry

class CiscoProcessMib::Cpmprocesstable::Cpmprocessentry::Cpmprocextpriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf notAssigned;

};

class CiscoProcessMib::Cpmprocessextrevtable::Cpmprocessextreventry::Cpmprocextpriorityrev : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf notAssigned;

};

class CiscoProcessMib::Cpmprocessextrevtable::Cpmprocessextreventry::Cpmprocesstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf posix;
        static const ydk::Enum::YLeaf ios;

};

class CiscoProcessMib::Cpmprocessextrevtable::Cpmprocessextreventry::Cpmprocessmemorycore : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf mainmem;
        static const ydk::Enum::YLeaf mainmemSharedmem;
        static const ydk::Enum::YLeaf mainmemText;
        static const ydk::Enum::YLeaf mainmemTextSharedmem;
        static const ydk::Enum::YLeaf sharedmem;
        static const ydk::Enum::YLeaf sparse;
        static const ydk::Enum::YLeaf off;

};

class CiscoProcessMib::Cpmcputhresholdtable::Cpmcputhresholdentry::Cpmcputhresholdclass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf total;
        static const ydk::Enum::YLeaf interrupt;
        static const ydk::Enum::YLeaf process;

};

class CiscoProcessMib::Cpmthreadtable::Cpmthreadentry::Cpmthreadstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf dead;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf stopped;
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf reply;
        static const ydk::Enum::YLeaf stack;
        static const ydk::Enum::YLeaf waitpage;
        static const ydk::Enum::YLeaf sigsuspend;
        static const ydk::Enum::YLeaf sigwaitinfo;
        static const ydk::Enum::YLeaf nanosleep;
        static const ydk::Enum::YLeaf mutex;
        static const ydk::Enum::YLeaf condvar;
        static const ydk::Enum::YLeaf join;
        static const ydk::Enum::YLeaf intr;
        static const ydk::Enum::YLeaf sem;

};


}
}

#endif /* _CISCO_PROCESS_MIB_ */

