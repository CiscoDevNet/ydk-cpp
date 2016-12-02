#ifndef _CISCO_IOS_XR_CONTROLLER_OTU_OPER_
#define _CISCO_IOS_XR_CONTROLLER_OTU_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_controller_otu_oper {

class Otu : public Entity
{
    public:
        Otu();
        ~Otu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Controllers : public Entity
    {
        public:
            Controllers();
            ~Controllers();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Controller : public Entity
        {
            public:
                Controller();
                ~Controller();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value controller_name; //type: string


            class Info : public Entity
            {
                public:
                    Info();
                    ~Info();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value state; //type: OtuStateEtEnum
                    Value name; //type: string
                    Value remote_intf_name; //type: string
                    Value remote_host_name; //type: string
                    Value remote_host_ip; //type: string
                    Value sf; //type: uint8
                    Value sd; //type: uint8
                    Value loopback_mode; //type: OtuLoopBackModeEnum
                    Value fec_mode; //type: OtuG709FecModeEnum
                    Value derivedstate_mode; //type: OtuDerStateEnum
                    Value sec_state; //type: OtuSecStateEnum
                    Value gcc_mode; //type: boolean
                    Value q; //type: uint64
                    Value q_margin; //type: uint64
                    Value performance_monitoring; //type: OtuPerMonEnum
                    Value ec; //type: uint64
                    Value uc; //type: uint64
                    Value pre_fec_val; //type: int32
                    Value pre_fec_mantissa; //type: int8
                    Value ec_value; //type: boolean
                    Value uc_value; //type: boolean
                    Value pre_fec_ber_value; //type: boolean
                    Value pre_fec_ber_mantissa; //type: boolean
                    Value nv_optical_support; //type: boolean
                    Value gmpls_tti_mode; //type: GmplsOtuTtiModeEnum
                    Value gmpls_tvm_id; //type: uint8


                class Local : public Entity
                {
                    public:
                        Local();
                        ~Local();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value router_id; //type: uint32
                        Value if_index; //type: uint32




                }; // Otu::Controllers::Controller::Info::Local


                class Remote : public Entity
                {
                    public:
                        Remote();
                        ~Remote();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value router_id; //type: uint32
                        Value if_index; //type: uint32




                }; // Otu::Controllers::Controller::Info::Remote


                class TtiMode : public Entity
                {
                    public:
                        TtiMode();
                        ~TtiMode();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value g709tti_sent_mode; //type: OtuTtiEtEnum
                        Value g709tti_exp_mode; //type: OtuTtiEtEnum
                        Value g709tti_rec_mode; //type: OtuTtiEtEnum


                    class Tx : public Entity
                    {
                        public:
                            Tx();
                            ~Tx();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList sapi; //type: list of  uint8
                            ValueList dapi; //type: list of  uint8
                            ValueList operator_specific; //type: list of  uint8




                    }; // Otu::Controllers::Controller::Info::TtiMode::Tx


                    class Exp : public Entity
                    {
                        public:
                            Exp();
                            ~Exp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList sapi; //type: list of  uint8
                            ValueList dapi; //type: list of  uint8
                            ValueList operator_specific; //type: list of  uint8




                    }; // Otu::Controllers::Controller::Info::TtiMode::Exp


                    class Rec : public Entity
                    {
                        public:
                            Rec();
                            ~Rec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList sapi; //type: list of  uint8
                            ValueList dapi; //type: list of  uint8
                            ValueList operator_specific; //type: list of  uint8




                    }; // Otu::Controllers::Controller::Info::TtiMode::Rec


                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::TtiMode::Exp> exp;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::TtiMode::Rec> rec;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::TtiMode::Tx> tx;
                        class OtuTtiEtEnum;
                        class OtuTtiEtEnum;
                        class OtuTtiEtEnum;


                }; // Otu::Controllers::Controller::Info::TtiMode


                class NetworkSrlg : public Entity
                {
                    public:
                        NetworkSrlg();
                        ~NetworkSrlg();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SrlgInfo : public Entity
                    {
                        public:
                            SrlgInfo();
                            ~SrlgInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value srlg; //type: uint32




                    }; // Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo> > srlg_info;


                }; // Otu::Controllers::Controller::Info::NetworkSrlg


                class OtuAlarmInfo : public Entity
                {
                    public:
                        OtuAlarmInfo();
                        ~OtuAlarmInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Los : public Entity
                    {
                        public:
                            Los();
                            ~Los();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Los


                    class Lof : public Entity
                    {
                        public:
                            Lof();
                            ~Lof();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof


                    class Lom : public Entity
                    {
                        public:
                            Lom();
                            ~Lom();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom


                    class Oof : public Entity
                    {
                        public:
                            Oof();
                            ~Oof();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof


                    class Oom : public Entity
                    {
                        public:
                            Oom();
                            ~Oom();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom


                    class Ais : public Entity
                    {
                        public:
                            Ais();
                            ~Ais();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais


                    class Iae : public Entity
                    {
                        public:
                            Iae();
                            ~Iae();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae


                    class Biae : public Entity
                    {
                        public:
                            Biae();
                            ~Biae();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae


                    class Bdi : public Entity
                    {
                        public:
                            Bdi();
                            ~Bdi();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi


                    class Tim : public Entity
                    {
                        public:
                            Tim();
                            ~Tim();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim


                    class Eoc : public Entity
                    {
                        public:
                            Eoc();
                            ~Eoc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc


                    class FecMismatch : public Entity
                    {
                        public:
                            FecMismatch();
                            ~FecMismatch();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch


                    class SfBer : public Entity
                    {
                        public:
                            SfBer();
                            ~SfBer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer


                    class SdBer : public Entity
                    {
                        public:
                            SdBer();
                            ~SdBer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer


                    class Ec : public Entity
                    {
                        public:
                            Ec();
                            ~Ec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec


                    class Uc : public Entity
                    {
                        public:
                            Uc();
                            ~Uc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc


                    class Fecunc : public Entity
                    {
                        public:
                            Fecunc();
                            ~Fecunc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc


                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais> ais;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi> bdi;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae> biae;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec> ec;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc> eoc;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch> fec_mismatch;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc> fecunc;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae> iae;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof> lof;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom> lom;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Los> los;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof> oof;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom> oom;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer> sd_ber;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer> sf_ber;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim> tim;
                        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc> uc;


                }; // Otu::Controllers::Controller::Info::OtuAlarmInfo


                class Proactive : public Entity
                {
                    public:
                        Proactive();
                        ~Proactive();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value proactive_status; //type: boolean
                        Value sec_state; //type: OtuSecStateEnum
                        Value proactive_fsm_state; //type: OtuPpFsmStateEnum
                        Value proactive_fsm_if_state; //type: OtuPpIntfStateEnum
                        Value trig_thresh_coeff; //type: uint8
                        Value trig_thresh_power; //type: uint8
                        Value rvrt_thresh_coeff; //type: uint8
                        Value rvrt_thresh_power; //type: uint8
                        Value trigger_window; //type: uint32
                        Value revert_window; //type: uint32


                        class OtuPpIntfStateEnum;
                        class OtuPpFsmStateEnum;
                        class OtuSecStateEnum;


                }; // Otu::Controllers::Controller::Info::Proactive


                class OtuFecSatistics : public Entity
                {
                    public:
                        OtuFecSatistics();
                        ~OtuFecSatistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value post_fec_ber; //type: string
                        Value pre_fec_ber; //type: string




                }; // Otu::Controllers::Controller::Info::OtuFecSatistics


                    std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::Local> local;
                    std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::NetworkSrlg> network_srlg;
                    std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo> otu_alarm_info;
                    std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuFecSatistics> otu_fec_satistics;
                    std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::Proactive> proactive;
                    std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::Remote> remote;
                    std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::TtiMode> tti_mode;
                    class OtuDerStateEnum;
                    class OtuG709FecModeEnum;
                    class GmplsOtuTtiModeEnum;
                    class OtuLoopBackModeEnum;
                    class OtuPerMonEnum;
                    class OtuSecStateEnum;
                    class OtuStateEtEnum;


            }; // Otu::Controllers::Controller::Info


                std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info> info;


        }; // Otu::Controllers::Controller


            std::vector<std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller> > controller;


    }; // Otu::Controllers


        std::unique_ptr<Cisco_IOS_XR_controller_otu_oper::Otu::Controllers> controllers;


}; // Otu


class OtuStateEtEnum : public Enum
{
    public:
        static const Enum::Value not_ready;
        static const Enum::Value admin_down;
        static const Enum::Value down;
        static const Enum::Value up;
        static const Enum::Value shutdown;
        static const Enum::Value error_disable;
        static const Enum::Value down_immediate;
        static const Enum::Value down_immediate_admin;
        static const Enum::Value down_graceful;
        static const Enum::Value begin_shutdown;
        static const Enum::Value end_shutdown;
        static const Enum::Value begin_error_disable;
        static const Enum::Value end_error_disable;
        static const Enum::Value begin_down_graceful;
        static const Enum::Value reset;
        static const Enum::Value operational;
        static const Enum::Value not_operational;
        static const Enum::Value unknown;
        static const Enum::Value last;

};

class OtuPerMonEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value enable;

};

class OtuPpIntfStateEnum : public Enum
{
    public:
        static const Enum::Value otu_pp_intf_up;
        static const Enum::Value otu_pp_intf_failing;
        static const Enum::Value otu_pp_intf_down;

};

class OtuPpFsmStateEnum : public Enum
{
    public:
        static const Enum::Value otu_in_active;
        static const Enum::Value otu_disabled;
        static const Enum::Value otu_normal_state;
        static const Enum::Value otu_local_failing;
        static const Enum::Value otu_remote_failing;
        static const Enum::Value otu_main_t_failing;
        static const Enum::Value otu_regen_failing;
        static const Enum::Value otu_local_failed;
        static const Enum::Value otu_remote_failed;
        static const Enum::Value otu_main_t_failed;
        static const Enum::Value otu_regen_failed;

};

class OtuTtiEtEnum : public Enum
{
    public:
        static const Enum::Value ascii;
        static const Enum::Value hex;
        static const Enum::Value full_ascii;
        static const Enum::Value full_hex;

};

class OtuG709FecModeEnum : public Enum
{
    public:
        static const Enum::Value otu_bag_none_fec;
        static const Enum::Value otu_bag_standard_fec;
        static const Enum::Value otu_bag_1_i_7_fec;
        static const Enum::Value otu_bag_1_i_4_fec;
        static const Enum::Value otu_bag_swizzle_fec;
        static const Enum::Value otu_bag_hg20_fec;
        static const Enum::Value otu_bag_enhanced_hg7_fec;
        static const Enum::Value otu_bag_sd20_fec;
        static const Enum::Value otu_bag_sd7_fec;
        static const Enum::Value otu_bag_all_fec;

};

class OtuSecStateEnum : public Enum
{
    public:
        static const Enum::Value normal;
        static const Enum::Value maintenance;
        static const Enum::Value ais;

};

class OtuLoopBackModeEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value line;
        static const Enum::Value internal;

};

class GmplsOtuTtiModeEnum : public Enum
{
    public:
        static const Enum::Value gmpls_otu_tti_mode_none;
        static const Enum::Value gmpls_otu_tti_mode_sm;
        static const Enum::Value gmpls_otu_tti_mode_pm;
        static const Enum::Value gmpls_otu_tti_mode_tcm;

};

class OtuDerStateEnum : public Enum
{
    public:
        static const Enum::Value out_of_service;
        static const Enum::Value in_service;
        static const Enum::Value maintenance;
        static const Enum::Value ais;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OTU_OPER_ */

