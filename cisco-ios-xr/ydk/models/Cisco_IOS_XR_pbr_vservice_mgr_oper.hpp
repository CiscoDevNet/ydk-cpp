#ifndef _CISCO_IOS_XR_PBR_VSERVICE_MGR_OPER_
#define _CISCO_IOS_XR_PBR_VSERVICE_MGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pbr_vservice_mgr_oper {

class GlobalServiceFunctionChaining : public Entity
{
    public:
        GlobalServiceFunctionChaining();
        ~GlobalServiceFunctionChaining();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class ServiceFunctionPath : public Entity
    {
        public:
            ServiceFunctionPath();
            ~ServiceFunctionPath();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class PathIds : public Entity
        {
            public:
                PathIds();
                ~PathIds();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class PathId : public Entity
            {
                public:
                    PathId();
                    ~PathId();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf id; //type: uint32

                class Stats : public Entity
                {
                    public:
                        Stats();
                        ~Stats();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Detail : public Entity
                    {
                        public:
                            Detail();
                            ~Detail();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Data : public Entity
                        {
                            public:
                                Data();
                                ~Data();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf type; //type: VsNshStatsEnum

                            class Sfp : public Entity
                            {
                                public:
                                    Sfp();
                                    ~Sfp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class SpiSi : public Entity
                                {
                                    public:
                                        SpiSi();
                                        ~SpiSi();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf processed_pkts; //type: uint64
                                        YLeaf processed_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi


                                class Term : public Entity
                                {
                                    public:
                                        Term();
                                        ~Term();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf terminated_pkts; //type: uint64
                                        YLeaf terminated_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi> spi_si;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term> term;


                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp


                            class SpiSi : public Entity
                            {
                                public:
                                    SpiSi();
                                    ~SpiSi();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf processed_pkts; //type: uint64
                                    YLeaf processed_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi


                            class Term : public Entity
                            {
                                public:
                                    Term();
                                    ~Term();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf terminated_pkts; //type: uint64
                                    YLeaf terminated_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term


                            class Sf : public Entity
                            {
                                public:
                                    Sf();
                                    ~Sf();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf processed_pkts; //type: uint64
                                    YLeaf processed_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf


                            class Sff : public Entity
                            {
                                public:
                                    Sff();
                                    ~Sff();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf processed_pkts; //type: uint64
                                    YLeaf processed_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff


                            class SffLocal : public Entity
                            {
                                public:
                                    SffLocal();
                                    ~SffLocal();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf malformed_err_pkts; //type: uint64
                                    YLeaf lookup_err_pkts; //type: uint64
                                    YLeaf malformed_err_bytes; //type: uint64
                                    YLeaf lookup_err_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf> sf;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff> sff;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal> sff_local;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp> sfp;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi> spi_si;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term> term;


                        }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data


                        class SiArr : public Entity
                        {
                            public:
                                SiArr();
                                ~SiArr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf si; //type: uint8

                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf type; //type: VsNshStatsEnum

                                class SpiSi : public Entity
                                {
                                    public:
                                        SpiSi();
                                        ~SpiSi();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf processed_pkts; //type: uint64
                                        YLeaf processed_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi


                                class Term : public Entity
                                {
                                    public:
                                        Term();
                                        ~Term();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf terminated_pkts; //type: uint64
                                        YLeaf terminated_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi> spi_si;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term> term;


                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data> data;


                        }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data> data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr> > si_arr;


                    }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail


                    class Summarized : public Entity
                    {
                        public:
                            Summarized();
                            ~Summarized();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Data : public Entity
                        {
                            public:
                                Data();
                                ~Data();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf type; //type: VsNshStatsEnum

                            class Sfp : public Entity
                            {
                                public:
                                    Sfp();
                                    ~Sfp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class SpiSi : public Entity
                                {
                                    public:
                                        SpiSi();
                                        ~SpiSi();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf processed_pkts; //type: uint64
                                        YLeaf processed_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi


                                class Term : public Entity
                                {
                                    public:
                                        Term();
                                        ~Term();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf terminated_pkts; //type: uint64
                                        YLeaf terminated_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi> spi_si;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term> term;


                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp


                            class SpiSi : public Entity
                            {
                                public:
                                    SpiSi();
                                    ~SpiSi();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf processed_pkts; //type: uint64
                                    YLeaf processed_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi


                            class Term : public Entity
                            {
                                public:
                                    Term();
                                    ~Term();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf terminated_pkts; //type: uint64
                                    YLeaf terminated_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term


                            class Sf : public Entity
                            {
                                public:
                                    Sf();
                                    ~Sf();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf processed_pkts; //type: uint64
                                    YLeaf processed_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf


                            class Sff : public Entity
                            {
                                public:
                                    Sff();
                                    ~Sff();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf processed_pkts; //type: uint64
                                    YLeaf processed_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff


                            class SffLocal : public Entity
                            {
                                public:
                                    SffLocal();
                                    ~SffLocal();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf malformed_err_pkts; //type: uint64
                                    YLeaf lookup_err_pkts; //type: uint64
                                    YLeaf malformed_err_bytes; //type: uint64
                                    YLeaf lookup_err_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf> sf;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff> sff;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal> sff_local;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp> sfp;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi> spi_si;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term> term;


                        }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data


                        class SiArr : public Entity
                        {
                            public:
                                SiArr();
                                ~SiArr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf si; //type: uint8

                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf type; //type: VsNshStatsEnum

                                class SpiSi : public Entity
                                {
                                    public:
                                        SpiSi();
                                        ~SpiSi();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf processed_pkts; //type: uint64
                                        YLeaf processed_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi


                                class Term : public Entity
                                {
                                    public:
                                        Term();
                                        ~Term();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf terminated_pkts; //type: uint64
                                        YLeaf terminated_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi> spi_si;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term> term;


                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data> data;


                        }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data> data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr> > si_arr;


                    }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail> detail;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized> summarized;


                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats


                class ServiceIndexes : public Entity
                {
                    public:
                        ServiceIndexes();
                        ~ServiceIndexes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class ServiceIndex : public Entity
                    {
                        public:
                            ServiceIndex();
                            ~ServiceIndex();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf index_; //type: uint32

                        class Data : public Entity
                        {
                            public:
                                Data();
                                ~Data();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf type; //type: VsNshStatsEnum

                            class Sfp : public Entity
                            {
                                public:
                                    Sfp();
                                    ~Sfp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class SpiSi : public Entity
                                {
                                    public:
                                        SpiSi();
                                        ~SpiSi();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf processed_pkts; //type: uint64
                                        YLeaf processed_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi


                                class Term : public Entity
                                {
                                    public:
                                        Term();
                                        ~Term();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf terminated_pkts; //type: uint64
                                        YLeaf terminated_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi> spi_si;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term> term;


                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp


                            class SpiSi : public Entity
                            {
                                public:
                                    SpiSi();
                                    ~SpiSi();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf processed_pkts; //type: uint64
                                    YLeaf processed_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi


                            class Term : public Entity
                            {
                                public:
                                    Term();
                                    ~Term();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf terminated_pkts; //type: uint64
                                    YLeaf terminated_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term


                            class Sf : public Entity
                            {
                                public:
                                    Sf();
                                    ~Sf();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf processed_pkts; //type: uint64
                                    YLeaf processed_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf


                            class Sff : public Entity
                            {
                                public:
                                    Sff();
                                    ~Sff();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf processed_pkts; //type: uint64
                                    YLeaf processed_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff


                            class SffLocal : public Entity
                            {
                                public:
                                    SffLocal();
                                    ~SffLocal();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf malformed_err_pkts; //type: uint64
                                    YLeaf lookup_err_pkts; //type: uint64
                                    YLeaf malformed_err_bytes; //type: uint64
                                    YLeaf lookup_err_bytes; //type: uint64



                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf> sf;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff> sff;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal> sff_local;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp> sfp;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi> spi_si;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term> term;


                        }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data


                        class SiArr : public Entity
                        {
                            public:
                                SiArr();
                                ~SiArr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf si; //type: uint8

                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf type; //type: VsNshStatsEnum

                                class SpiSi : public Entity
                                {
                                    public:
                                        SpiSi();
                                        ~SpiSi();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf processed_pkts; //type: uint64
                                        YLeaf processed_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi


                                class Term : public Entity
                                {
                                    public:
                                        Term();
                                        ~Term();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf terminated_pkts; //type: uint64
                                        YLeaf terminated_bytes; //type: uint64



                                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi> spi_si;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term> term;


                            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data> data;


                        }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data> data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr> > si_arr;


                    }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex


                        std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex> > service_index;


                }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes


                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes> service_indexes;
                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats> stats;


            }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId


                std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId> > path_id;


        }; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds


            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds> path_ids;


    }; // GlobalServiceFunctionChaining::ServiceFunctionPath


    class ServiceFunction : public Entity
    {
        public:
            ServiceFunction();
            ~ServiceFunction();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class SfNames : public Entity
        {
            public:
                SfNames();
                ~SfNames();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class SfName : public Entity
            {
                public:
                    SfName();
                    ~SfName();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf name; //type: string

                class Data : public Entity
                {
                    public:
                        Data();
                        ~Data();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf type; //type: VsNshStatsEnum

                    class Sfp : public Entity
                    {
                        public:
                            Sfp();
                            ~Sfp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SpiSi : public Entity
                        {
                            public:
                                SpiSi();
                                ~SpiSi();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf processed_pkts; //type: uint64
                                YLeaf processed_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi


                        class Term : public Entity
                        {
                            public:
                                Term();
                                ~Term();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf terminated_pkts; //type: uint64
                                YLeaf terminated_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi> spi_si;
                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term> term;


                    }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp


                    class SpiSi : public Entity
                    {
                        public:
                            SpiSi();
                            ~SpiSi();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf processed_pkts; //type: uint64
                            YLeaf processed_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi


                    class Term : public Entity
                    {
                        public:
                            Term();
                            ~Term();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf terminated_pkts; //type: uint64
                            YLeaf terminated_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term


                    class Sf : public Entity
                    {
                        public:
                            Sf();
                            ~Sf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf processed_pkts; //type: uint64
                            YLeaf processed_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf


                    class Sff : public Entity
                    {
                        public:
                            Sff();
                            ~Sff();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf processed_pkts; //type: uint64
                            YLeaf processed_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff


                    class SffLocal : public Entity
                    {
                        public:
                            SffLocal();
                            ~SffLocal();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf malformed_err_pkts; //type: uint64
                            YLeaf lookup_err_pkts; //type: uint64
                            YLeaf malformed_err_bytes; //type: uint64
                            YLeaf lookup_err_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf> sf;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff> sff;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal> sff_local;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp> sfp;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi> spi_si;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term> term;


                }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data


                class SiArr : public Entity
                {
                    public:
                        SiArr();
                        ~SiArr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf si; //type: uint8

                    class Data : public Entity
                    {
                        public:
                            Data();
                            ~Data();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf type; //type: VsNshStatsEnum

                        class SpiSi : public Entity
                        {
                            public:
                                SpiSi();
                                ~SpiSi();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf processed_pkts; //type: uint64
                                YLeaf processed_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi


                        class Term : public Entity
                        {
                            public:
                                Term();
                                ~Term();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf terminated_pkts; //type: uint64
                                YLeaf terminated_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi> spi_si;
                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term> term;


                    }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data> data;


                }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr


                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data> data;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr> > si_arr;


            }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName


                std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName> > sf_name;


        }; // GlobalServiceFunctionChaining::ServiceFunction::SfNames


            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames> sf_names;


    }; // GlobalServiceFunctionChaining::ServiceFunction


    class ServiceFunctionForwarder : public Entity
    {
        public:
            ServiceFunctionForwarder();
            ~ServiceFunctionForwarder();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class SffNames : public Entity
        {
            public:
                SffNames();
                ~SffNames();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class SffName : public Entity
            {
                public:
                    SffName();
                    ~SffName();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf name; //type: string

                class Data : public Entity
                {
                    public:
                        Data();
                        ~Data();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf type; //type: VsNshStatsEnum

                    class Sfp : public Entity
                    {
                        public:
                            Sfp();
                            ~Sfp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SpiSi : public Entity
                        {
                            public:
                                SpiSi();
                                ~SpiSi();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf processed_pkts; //type: uint64
                                YLeaf processed_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi


                        class Term : public Entity
                        {
                            public:
                                Term();
                                ~Term();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf terminated_pkts; //type: uint64
                                YLeaf terminated_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi> spi_si;
                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term> term;


                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp


                    class SpiSi : public Entity
                    {
                        public:
                            SpiSi();
                            ~SpiSi();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf processed_pkts; //type: uint64
                            YLeaf processed_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi


                    class Term : public Entity
                    {
                        public:
                            Term();
                            ~Term();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf terminated_pkts; //type: uint64
                            YLeaf terminated_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term


                    class Sf : public Entity
                    {
                        public:
                            Sf();
                            ~Sf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf processed_pkts; //type: uint64
                            YLeaf processed_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf


                    class Sff : public Entity
                    {
                        public:
                            Sff();
                            ~Sff();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf processed_pkts; //type: uint64
                            YLeaf processed_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff


                    class SffLocal : public Entity
                    {
                        public:
                            SffLocal();
                            ~SffLocal();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf malformed_err_pkts; //type: uint64
                            YLeaf lookup_err_pkts; //type: uint64
                            YLeaf malformed_err_bytes; //type: uint64
                            YLeaf lookup_err_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf> sf;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff> sff;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal> sff_local;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp> sfp;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi> spi_si;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term> term;


                }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data


                class SiArr : public Entity
                {
                    public:
                        SiArr();
                        ~SiArr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf si; //type: uint8

                    class Data : public Entity
                    {
                        public:
                            Data();
                            ~Data();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf type; //type: VsNshStatsEnum

                        class SpiSi : public Entity
                        {
                            public:
                                SpiSi();
                                ~SpiSi();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf processed_pkts; //type: uint64
                                YLeaf processed_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi


                        class Term : public Entity
                        {
                            public:
                                Term();
                                ~Term();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf terminated_pkts; //type: uint64
                                YLeaf terminated_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi> spi_si;
                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term> term;


                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data> data;


                }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr


                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data> data;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr> > si_arr;


            }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName


                std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName> > sff_name;


        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames


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



            class Error : public Entity
            {
                public:
                    Error();
                    ~Error();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Data : public Entity
                {
                    public:
                        Data();
                        ~Data();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf type; //type: VsNshStatsEnum

                    class Sfp : public Entity
                    {
                        public:
                            Sfp();
                            ~Sfp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SpiSi : public Entity
                        {
                            public:
                                SpiSi();
                                ~SpiSi();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf processed_pkts; //type: uint64
                                YLeaf processed_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi


                        class Term : public Entity
                        {
                            public:
                                Term();
                                ~Term();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf terminated_pkts; //type: uint64
                                YLeaf terminated_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi> spi_si;
                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term> term;


                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp


                    class SpiSi : public Entity
                    {
                        public:
                            SpiSi();
                            ~SpiSi();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf processed_pkts; //type: uint64
                            YLeaf processed_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi


                    class Term : public Entity
                    {
                        public:
                            Term();
                            ~Term();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf terminated_pkts; //type: uint64
                            YLeaf terminated_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term


                    class Sf : public Entity
                    {
                        public:
                            Sf();
                            ~Sf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf processed_pkts; //type: uint64
                            YLeaf processed_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf


                    class Sff : public Entity
                    {
                        public:
                            Sff();
                            ~Sff();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf processed_pkts; //type: uint64
                            YLeaf processed_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff


                    class SffLocal : public Entity
                    {
                        public:
                            SffLocal();
                            ~SffLocal();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf malformed_err_pkts; //type: uint64
                            YLeaf lookup_err_pkts; //type: uint64
                            YLeaf malformed_err_bytes; //type: uint64
                            YLeaf lookup_err_bytes; //type: uint64



                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf> sf;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff> sff;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal> sff_local;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp> sfp;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi> spi_si;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term> term;


                }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data


                class SiArr : public Entity
                {
                    public:
                        SiArr();
                        ~SiArr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf si; //type: uint8

                    class Data : public Entity
                    {
                        public:
                            Data();
                            ~Data();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf type; //type: VsNshStatsEnum

                        class SpiSi : public Entity
                        {
                            public:
                                SpiSi();
                                ~SpiSi();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf processed_pkts; //type: uint64
                                YLeaf processed_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi


                        class Term : public Entity
                        {
                            public:
                                Term();
                                ~Term();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf terminated_pkts; //type: uint64
                                YLeaf terminated_bytes; //type: uint64



                        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi> spi_si;
                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term> term;


                    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data> data;


                }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr


                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data> data;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr> > si_arr;


            }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error


                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error> error;


        }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local


            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local> local;
            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames> sff_names;


    }; // GlobalServiceFunctionChaining::ServiceFunctionForwarder


        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction> service_function;
        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder> service_function_forwarder;
        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath> service_function_path;


}; // GlobalServiceFunctionChaining


class VsNshStatsEnum : public Enum
{
    public:
        static const Enum::YLeaf vs_nsh_stats_spi_si;
        static const Enum::YLeaf vs_nsh_stats_ter_min_ate;
        static const Enum::YLeaf vs_nsh_stats_sf;
        static const Enum::YLeaf vs_nsh_stats_sff;
        static const Enum::YLeaf vs_nsh_stats_sff_local;
        static const Enum::YLeaf vs_nsh_stats_sfp;
        static const Enum::YLeaf vs_nsh_stats_sfp_detail;
        static const Enum::YLeaf vs_nsh_stats_max;

};


}
}

#endif /* _CISCO_IOS_XR_PBR_VSERVICE_MGR_OPER_ */

